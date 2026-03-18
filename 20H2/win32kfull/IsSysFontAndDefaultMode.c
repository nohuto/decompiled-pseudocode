/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025E9A8
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E2E4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C029ED64 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C02B5D84 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int MapMode; // eax
  unsigned int v7; // ecx

  v5 = *(_QWORD *)(GetDPIServerInfo((__int64)a1, a2, a3, a4) + 24);
  if ( GreGetHFONT(a1) != v5 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v7 = 1;
  if ( MapMode != 1 )
    return 0;
  return v7;
}
