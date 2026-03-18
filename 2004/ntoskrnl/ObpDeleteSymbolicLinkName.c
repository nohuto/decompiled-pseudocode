/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x1406E1EAC
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063D600 (ObpDeleteNameCheck.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406E1CA8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObShutdownSystem @ 0x1408D8E90 (ObShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

_UNKNOWN **__fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rbp
  _DWORD *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v4 = a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
    result = *(_UNKNOWN ***)v4;
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 304LL);
    if ( v5 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v8 = CurrentServerSiloGlobals;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 30), 0LL);
      v9 = (unsigned int)(v2 - 1);
      v10 = ~(1 << (v2 - 1));
      *(_DWORD *)(v5 + 28) &= v10;
      *(_BYTE *)(v9 + v5 + 32) = 0;
      if ( v5 == *(_QWORD *)v8 )
        v8[2] &= v10;
      else
        --v8[v9 + 3];
      ExReleasePushLockEx((ULONG_PTR)(v8 + 30), 0LL);
      result = (_UNKNOWN **)KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
