/*
 * XREFs of CmEnumerateValueKey @ 0x14061EA20
 * Callers:
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140263840 (PsBoostThreadIo.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpQueryKeyValueData @ 0x140620F80 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, int a3, _DWORD *a4, int a5, __int64 a6)
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
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v24; // r14
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h] BYREF
  __int64 v27; // [rsp+50h] [rbp-88h]
  __int64 v28; // [rsp+58h] [rbp-80h] BYREF
  _OWORD v29[3]; // [rsp+60h] [rbp-78h] BYREF

  v6 = a6;
  Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
  v10 = a2;
  v27 = a6;
  v28 = 0LL;
  v26 = 0xFFFFFFFFLL;
  v25 = 0xFFFFFFFFLL;
  memset(v29, 0, sizeof(v29));
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0LL, (__int64)v29, a4);
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v13 + 66) )
  {
    KeyValueData = CmEnumerateValueFromLayeredKey(a1, v10, a3, (_DWORD)a4, a5, a6);
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
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v28);
    if ( KeyValueData >= 0 )
    {
      v24 = v28;
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v28);
      if ( KeyValueData >= 0 )
      {
        v6 = v27;
        if ( v24 )
        {
          v14 = 280LL;
          if ( v24 == *(_QWORD *)(v13 + 288) )
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
                      &v26);
              v16 = *(_DWORD *)(v15 + 4 * v10);
              v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 8LL))(
                      *(_QWORD *)(v13 + 32),
                      v16,
                      &v25);
              KeyValueData = CmpQueryKeyValueData(v13, v16, v17, a3, (size_t)a4, a5, v6);
              if ( v17 )
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 16LL))(*(_QWORD *)(v13 + 32), &v25);
              if ( v15 )
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v13 + 32) + 16LL))(*(_QWORD *)(v13 + 32), &v26);
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
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v22) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v22);
  }
  KiUnstackDetachProcess((__int64)v29, 0LL, v20, v21);
  return (unsigned int)KeyValueData;
}
