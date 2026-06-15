/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$45 @ 0x180077150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 */

__int64 __fastcall CVADServer::Initialize_::_1_::catch_45(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 256);
  *(_DWORD *)(a2 + 136) = v2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, v2);
  }
  return 0LL;
}
