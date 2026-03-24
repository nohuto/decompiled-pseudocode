/*
 * XREFs of SupportedVideoSignal @ 0x1C02FC254
 * Callers:
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FC3FC (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0006500 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedVideoSignal(_DWORD *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  unsigned int v14; // r9d

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2[9] != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 == 2 )
  {
    if ( a1[3] != a2[10]
      || a1[4] != a2[11]
      || (unsigned int)a1[5] * (unsigned __int64)a2[2] < a2[1] * (unsigned __int64)(unsigned int)a1[6]
      || operator><_D3DDDI_RATIONAL>(a1 + 5, a2 + 3)
      || (unsigned int)a1[7] * (unsigned __int64)a2[6] < a2[5] * (unsigned __int64)(unsigned int)a1[8]
      || operator><_D3DDDI_RATIONAL>(a1 + 7, a2 + 7) )
    {
      return 0;
    }
  }
  else
  {
    v9 = a1[3];
    if ( v9 > a2[10] || v9 == a2[10] && a1[4] > a2[11] )
      return 0;
    v10 = *(_QWORD *)(a1 + 5);
    v11 = 107;
    v12 = a1[4];
    if ( v12 <= 0x258 )
      v11 = 105;
    v13 = a1[5] / a1[6];
    if ( (int)(v13 - a2[1] / a2[2]) < 0 || (int)(v13 - a2[3] / a2[4]) > 0 && v13 - 61 > 0 )
      return 0;
    v14 = (unsigned int)v10 * v12 * v11 / 0x64 / HIDWORD(v10);
    if ( (int)(v14 - a2[5] / a2[6]) < 0 && v13 - 60 < 0 )
      return 0;
    if ( (int)(v14 - a2[7] / a2[8]) > 0 && v13 - 61 > 0 )
      return 0;
  }
  return 1;
}
