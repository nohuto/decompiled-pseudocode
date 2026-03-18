/*
 * XREFs of TtmpDeactivateSessionWorker @ 0x140902110
 * Callers:
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpInitiateModernStandbyTransition @ 0x140902300 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1409027D4 (TtmpSessionPowerControl.c)
 *     TtmiLogSessionDeactivate @ 0x1409060E8 (TtmiLogSessionDeactivate.c)
 */

__int64 __fastcall TtmpDeactivateSessionWorker(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 0x180) == 0 )
  {
    if ( (v2 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFF7;
      TtmiLogSessionDeactivate();
      v2 = *(_DWORD *)(a1 + 4);
    }
    if ( (v2 & 0x400) != 0 )
    {
      if ( (v2 & 0x200) == 0 )
      {
        LOBYTE(a2) = 1;
        TtmpInitiateModernStandbyTransition(a1, a2, *(unsigned int *)(a1 + 16));
        v2 = *(_DWORD *)(a1 + 4) | 0x200;
      }
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFDF;
      return 0LL;
    }
    if ( (v2 & 0x40) == 0 )
    {
      v5 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(a1 + 4) = v2 | 0x40;
      TtmpSessionPowerControl(a1, 0LL, v5);
    }
  }
  return 259LL;
}
