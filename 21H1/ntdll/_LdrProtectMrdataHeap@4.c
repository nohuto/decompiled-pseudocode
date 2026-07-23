/*
 * XREFs of _LdrProtectMrdataHeap@4 @ 0x4B2EC610
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 * Callees:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 */

void __thiscall LdrProtectMrdataHeap(void *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // esi

  LOBYTE(v2) = LdrControlFlowGuardEnforced();
  if ( !v2 )
    return;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v3 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( this )
  {
    if ( v3 )
    {
      v4 = v3 - 1;
      goto LABEL_7;
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !v3 )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v3 == -1 )
    goto LABEL_13;
  v4 = v3 + 1;
LABEL_7:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v4;
  if ( this )
  {
    if ( !v4 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
  }
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
