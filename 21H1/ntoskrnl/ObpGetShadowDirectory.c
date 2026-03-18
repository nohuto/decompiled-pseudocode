/*
 * XREFs of ObpGetShadowDirectory @ 0x1408D798C
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // rbx
  void *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = *(_DWORD *)(a1 + 336);
  v3 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 0x10) == 0 || a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
    v7 = *(_QWORD *)(a1 + 304);
    if ( v7 )
      v3 = *(_QWORD *)(v7 + 8);
    ExReleasePushLockEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  return v3;
}
