/*
 * XREFs of KiInitializeForceIdle @ 0x14079FE80
 * Callers:
 *     KeInitializeTimerTable @ 0x14079FD34 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
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
  KeInitializeDpc((PRKDPC)(a1 + 33304), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 33305) = 3;
  result = *(_QWORD *)(a1 + 33360);
  if ( !result )
  {
    result = 1280LL;
    *(_WORD *)(a1 + 33306) = *(_DWORD *)(a1 + 36) + 1280;
  }
  return result;
}
