/*
 * XREFs of HvlGetStatsUpdateCounter @ 0x1404F61F0
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x14057AAD0 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x140390828 (HvlpGetLpcbByLpIndex.c)
 */

char __fastcall HvlGetStatsUpdateCounter(unsigned int a1)
{
  int *LpcbByLpIndex; // rax
  _BYTE *v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rcx

  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  if ( LpcbByLpIndex )
  {
    v4 = *((_QWORD *)LpcbByLpIndex + 4);
    LpcbByLpIndex = *(int **)(v4 + 8LL * (unsigned int)dword_140CED288);
    v5 = (unsigned int)dword_140CED28C;
    *v2 = *(_QWORD *)(v4 + 8LL * DWORD2(xmmword_140CED260)) & 1;
    LOBYTE(LpcbByLpIndex) = (unsigned __int8)LpcbByLpIndex & 1;
    *v3 = *(_QWORD *)(v4 + 8 * v5);
  }
  return (char)LpcbByLpIndex;
}
