/*
 * XREFs of CmEnumerateValueKey @ 0x1406E4650
 * Callers:
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140358530 (PsBoostThreadIo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpQueryKeyValueData @ 0x1406E7610 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  _KPROCESS *Process; // rcx
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // esi
  __int64 v17; // rdi
  int KeyValueData; // r15d
  bool v19; // di
  __int64 v20; // rdx
  __int64 v22; // r14
  __int64 v23; // [rsp+40h] [rbp-98h] BYREF
  __int64 v24; // [rsp+48h] [rbp-90h] BYREF
  __int64 v25; // [rsp+50h] [rbp-88h]
  __int64 v26; // [rsp+58h] [rbp-80h] BYREF
  _OWORD v27[3]; // [rsp+60h] [rbp-78h] BYREF

  v6 = a6;
  Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
  v10 = a2;
  v25 = a6;
  v26 = 0LL;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  memset(v27, 0, sizeof(v27));
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0, (__int64)v27);
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v13 + 66) )
  {
    KeyValueData = CmEnumerateValueFromLayeredKey(a1, v10, a3, a4, a5, a6);
    goto LABEL_18;
  }
  ExAcquirePushLockSharedEx(v13 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 56));
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
      KeyValueData = -1073740763;
    else
      KeyValueData = -1073741444;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_9;
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v26);
    if ( KeyValueData >= 0 )
    {
      v22 = v26;
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v26);
      if ( KeyValueData >= 0 )
      {
        v6 = v25;
        if ( v22 )
        {
          v14 = 280LL;
          if ( v22 == *(_QWORD *)(v13 + 288) )
          {
LABEL_10:
            if ( (unsigned int)v10 >= *(_DWORD *)(v14 + v13) )
            {
              KeyValueData = -2147483622;
            }
            else
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 8LL))(
                      *(_QWORD *)(v13 + 32),
                      *(unsigned int *)(v14 + v13 + 4),
                      &v24);
              v16 = *(_DWORD *)(v15 + 4 * v10);
              v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 8LL))(
                      *(_QWORD *)(v13 + 32),
                      v16,
                      &v23);
              KeyValueData = CmpQueryKeyValueData(v13, v16, v17, a3, a4, a5, v6);
              if ( v17 )
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 16LL))(*(_QWORD *)(v13 + 32), &v23);
              if ( v15 )
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 16LL))(*(_QWORD *)(v13 + 32), &v24);
            }
            goto LABEL_15;
          }
        }
LABEL_9:
        v14 = 96LL;
        goto LABEL_10;
      }
    }
  }
LABEL_15:
  v19 = (*(_DWORD *)(v13 + 8) & 0x80000) != 0;
  if ( *(struct _KTHREAD **)(v13 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(v13 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 56));
  ExReleasePushLockEx(v13 + 48, 0LL);
  if ( v19 && (*(_DWORD *)(v13 + 8) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(v13);
LABEL_18:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v20) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v20);
  }
  KiUnstackDetachProcess((__int64)v27, 0LL);
  return (unsigned int)KeyValueData;
}
