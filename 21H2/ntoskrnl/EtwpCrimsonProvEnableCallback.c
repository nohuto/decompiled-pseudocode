/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x1407B9E60
 * Callers:
 *     <none>
 * Callees:
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpPsProvCaptureState @ 0x14093ECA8 (EtwpPsProvCaptureState.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  REGHANDLE v9; // rsi
  int v10; // edi
  int v11; // ebx
  int v12; // edi
  BOOLEAN v13; // al
  int v14; // ecx
  __int64 v15; // r9
  int *v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // r8d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v22; // edi
  BOOLEAN v23; // al
  int v24; // ecx
  REGHANDLE v25; // rsi
  int v26; // ebx
  int v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-4Ch]
  int v29; // [rsp+38h] [rbp-48h]
  int v30; // [rsp+3Ch] [rbp-44h]
  int v31; // [rsp+40h] [rbp-40h]
  int v32; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v25 = EtwpFileProvRegHandle;
      v26 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v27 = 100663808;
      v22 = v26 | 0x2000000;
      if ( !EtwProviderEnabled(v25, 0, 0x60uLL) )
        v22 = v26;
      v23 = EtwProviderEnabled(v25, 0, 0x1FA0uLL);
      v24 = v22 | 0x4000000;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v27 = (int)CallbackContext;
        v28 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_26:
        v15 = 1LL;
        goto LABEL_13;
      }
      v27 = 545783808;
      v22 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x420uLL) != 0 ? 0x20080000 : 0;
      v23 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v24 = v22 | 0x20800000;
    }
    if ( !v23 )
      v24 = v22;
    v28 = v24;
    goto LABEL_26;
  }
  v9 = EtwpPsProvRegHandle;
  v10 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart) || EtwEventEnabled(v9, &EnableProcessTracingCallbacks) )
    v10 = 1;
  v11 = v10 | 2;
  if ( !EtwEventEnabled(v9, &ThreadStart) )
    v11 = v10;
  v27 = 524295;
  v12 = v11 | 4;
  if ( !EtwEventEnabled(v9, &ImageLoad) )
    v12 = v11;
  v13 = EtwEventEnabled(v9, &JobStart);
  v14 = v12 | 0x80000;
  v29 = 536879104;
  if ( !v13 )
    v14 = v12;
  v28 = v14;
  v30 = EtwProviderEnabled(v9, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v31 = 1073741826;
  v32 = EtwProviderEnabled(v9, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword);
  v15 = 3LL;
LABEL_13:
  v16 = &v27;
  do
  {
    v17 = EtwpHostSiloState;
    v18 = (unsigned __int64)(unsigned int)v16[1] >> 29;
    v19 = v16[1] & 0x1FFFFFFF;
    v20 = *v16 & ~v16[1];
    v16 += 2;
    *(_DWORD *)(EtwpHostSiloState + 4 * v18 + 4516) |= v19;
    *(_DWORD *)(v17 + 4 * ((unsigned __int64)v20 >> 29) + 4516) &= ~(v20 & 0x1FFFFFFF);
    --v15;
  }
  while ( v15 );
  KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57777445u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
}
