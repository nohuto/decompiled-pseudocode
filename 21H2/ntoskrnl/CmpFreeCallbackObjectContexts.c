/*
 * XREFs of CmpFreeCallbackObjectContexts @ 0x1405D6B4C
 * Callers:
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpFreeCallbackObjectContexts(__int64 a1)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v4; // rbx
  PVOID **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  PVOID *result; // rax
  __int64 v11; // rax
  PVOID **v12; // rcx
  PVOID *v13; // r8
  PVOID ***v14; // rdx
  PVOID *v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-30h] BYREF
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  v1 = 0;
  p_P = &P;
  P = &P;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v4 = (PVOID ***)(a1 + 72);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (PVOID **)v4 )
      break;
    if ( v5[1] != (PVOID *)v4 )
      goto LABEL_17;
    v12 = (PVOID **)*v5;
    if ( (*v5)[1] != v5 )
      goto LABEL_17;
    *v4 = v12;
    v12[1] = (PVOID *)v4;
    v13 = v5[2];
    if ( v13[1] != v5 + 2 )
      goto LABEL_17;
    v14 = (PVOID ***)v5[3];
    if ( *v14 != v5 + 2 )
      goto LABEL_17;
    *v14 = (PVOID **)v13;
    v13[1] = v14;
    if ( v14 == (PVOID ***)v13 )
      v1 = 1;
    v15 = p_P;
    if ( *p_P != &P )
LABEL_17:
      __fastfail(3u);
    v5[1] = p_P;
    *v5 = &P;
    *v15 = v5;
    p_P = (PVOID *)v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( v1 )
  {
    _InterlockedOr(v16, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  while ( 1 )
  {
    v9 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v11 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v11 + 8) = &P;
    ExFreePoolWithTag(v9, 0x63634D43u);
  }
}
