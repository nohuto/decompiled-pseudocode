/*
 * XREFs of ObpGetShadowDirectory @ 0x1408DC2DC
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  void *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax

  v2 = *(_DWORD *)(a1 + 336);
  v3 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 0x10) == 0 || (_BYTE)a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
    v7 = *(_QWORD *)(a1 + 304);
    if ( v7 )
      v3 = *(_QWORD *)(v7 + 8);
    ExReleasePushLockEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v3;
}
