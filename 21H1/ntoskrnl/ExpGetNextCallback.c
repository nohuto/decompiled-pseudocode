/*
 * XREFs of ExpGetNextCallback @ 0x140758950
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  int v2; // edi
  __int64 *v3; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v5 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v5 = (__int64 *)Object[5];
  while ( v5 != &ExpCallbackListHead )
  {
    v3 = v5 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 5)) )
    {
      v2 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
