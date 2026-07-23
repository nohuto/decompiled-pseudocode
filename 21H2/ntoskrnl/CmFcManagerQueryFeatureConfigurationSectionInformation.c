/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1405FEEA0
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x1405FED5C (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmFcpCopySectionState @ 0x1405FF098 (CmFcpCopySectionState.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r13
  _QWORD *v9; // rsi
  NTSTATUS v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *v16; // rsi
  unsigned int i; // edi
  __int128 *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r10
  HANDLE *v21; // rbx
  PADAPTER_OBJECT *v22; // rdi
  __int128 v24; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-90h]
  _QWORD v26[10]; // [rsp+60h] [rbp-88h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  memset(v26, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&RunOnce, 0LL);
  v8 = qword_140C48158;
  v9 = &unk_140C48168;
  v10 = 0;
  v11 = 0;
  v12 = 3LL;
  do
  {
    if ( *a2 < *v9 )
      CmFcpCopySectionState(&v26[3 * v11], &CmFcSystemManager[3 * v11 + 5]);
    ++v11;
    ++a2;
    v9 += 3;
  }
  while ( v11 < 3 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&RunOnce, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v16 = (PVOID *)&v26[1];
  for ( i = 0; i < 3; ++i )
  {
    if ( *v16 )
    {
      v10 = ObOpenObjectByPointer(*v16, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)&v24 + i);
      if ( v10 < 0 )
        goto LABEL_12;
      v10 = 0;
    }
    v16 += 3;
  }
  memset(a3, 0, 0x50uLL);
  *a3 = v8;
  v18 = &v24;
  v19 = a3 + 3;
  v20 = 3LL;
  do
  {
    *(v19 - 2) = *(_QWORD *)((char *)v19 + (char *)v26 - (char *)a3 - 24);
    *v19 = *(_QWORD *)((char *)v19 + (char *)&v26[2] - (char *)a3 - 24);
    v19 += 3;
    *(v19 - 4) = *(_QWORD *)v18;
    *(_QWORD *)v18 = 0LL;
    v18 = (__int128 *)((char *)v18 + 8);
    --v20;
  }
  while ( v20 );
LABEL_12:
  v21 = (HANDLE *)&v24;
  v22 = (PADAPTER_OBJECT *)&v26[1];
  do
  {
    if ( *v22 )
      HalPutDmaAdapter(*v22);
    if ( *v21 )
      ObCloseHandle(*v21, a4);
    v22 += 3;
    ++v21;
    --v12;
  }
  while ( v12 );
  return (unsigned int)v10;
}
