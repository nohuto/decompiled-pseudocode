/*
 * XREFs of EtwpSetQpcDeltaTracking @ 0x1405A4BE8
 * Callers:
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpSetQpcDeltaTracking(__int64 a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 216) - 3) <= 1 )
    return 3221225659LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x8000000u);
  return 0LL;
}
