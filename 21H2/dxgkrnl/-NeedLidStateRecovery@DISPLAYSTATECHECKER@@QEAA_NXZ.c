/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F00E8
 * Callers:
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02EFA40 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     DxgkCheckDisplayState @ 0x1C02F0140 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D190 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1C02F0050 (-NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ.c)
 */

char __fastcall DISPLAYSTATECHECKER::NeedLidStateRecovery(DISPLAYSTATECHECKER *this)
{
  unsigned int v1; // ebx
  DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v1 = 0;
  if ( !*((_DWORD *)this + 3522) )
    return 0;
  while ( 1 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v1);
    if ( DISPLAYDIAGNOSTICADAPTERDATA::NeedLidStateRecovery(DisplayAdapterDiagData, v4, v5, v6) )
      break;
    if ( ++v1 >= *((_DWORD *)this + 3522) )
      return 0;
  }
  return 1;
}
