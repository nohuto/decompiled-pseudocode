/*
 * XREFs of KiInitializeForceIdle @ 0x14082A224
 * Callers:
 *     KeInitializeTimerTable @ 0x14082A0D8 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc((PRKDPC)&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc(&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    BYTE1(KiForceIdleStartDpc) = 3;
    KiForceIdleStopDpc.Importance = 3;
    if ( !KiSerializeTimerExpiration )
      KiForceIdleDisabled = 1;
  }
  KeInitializeDpc((PRKDPC)(a1 + 34200), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 34201) = 3;
  result = *(_QWORD *)(a1 + 34256);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 34202) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
