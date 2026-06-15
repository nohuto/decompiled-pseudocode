/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x18002AF48
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000609C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     WPP_SF_D @ 0x180025690 (WPP_SF_D.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180027B9C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void TS_ServiceStart(void)
{
  DWORD LastError; // eax
  __int64 v1; // r8
  char v2; // [rsp+40h] [rbp+8h] BYREF
  struct TSSession *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids);
  }
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, &v2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LastError = GetLastError();
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, v1, LastError);
    }
    g_MaxSessions = 1;
  }
  TsSessionCreate(0, 0LL, &v3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
      g_MaxSessions);
  }
}
