/*
 * XREFs of CmpFreeCallbackObjectContexts @ 0x1405D3B6C
 * Callers:
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall CmpFreeCallbackObjectContexts(__int64 a1)
{
  char v1; // di
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v4; // rbx
  PVOID **v5; // rax
  PVOID v6; // rcx
  PVOID *result; // rax
  __int64 v8; // rax
  PVOID **v9; // rcx
  PVOID *v10; // r8
  PVOID ***v11; // rdx
  PVOID *v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-30h] BYREF
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
    v9 = (PVOID **)*v5;
    if ( (*v5)[1] != v5 )
      goto LABEL_17;
    *v4 = v9;
    v9[1] = (PVOID *)v4;
    v10 = v5[2];
    if ( v10[1] != v5 + 2 )
      goto LABEL_17;
    v11 = (PVOID ***)v5[3];
    if ( *v11 != v5 + 2 )
      goto LABEL_17;
    *v11 = (PVOID **)v10;
    v10[1] = v11;
    if ( v11 == (PVOID ***)v10 )
      v1 = 1;
    v12 = p_P;
    if ( *p_P != &P )
LABEL_17:
      __fastfail(3u);
    v5[1] = p_P;
    *v5 = &P;
    *v12 = v5;
    p_P = (PVOID *)v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v1 )
  {
    _InterlockedOr(v13, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  while ( 1 )
  {
    v6 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v8 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v8 + 8) = &P;
    ExFreePoolWithTag(v6, 0x63634D43u);
  }
}
