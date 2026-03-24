/*
 * XREFs of SupportedPixelRate @ 0x1C02FC0E0
 * Callers:
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FC528 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0006500 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedPixelRate(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // r10d
  int v10; // r9d
  int v11; // r8d
  unsigned int v12; // r10d

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *(_DWORD *)(a2 + 36) != 2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) > *(_QWORD *)(a2 + 40)
      || *(unsigned int *)(a1 + 20) * (unsigned __int64)*(unsigned int *)(a2 + 8) < *(unsigned int *)(a2 + 4)
                                                                                  * (unsigned __int64)*(unsigned int *)(a1 + 24)
      || operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 20), (unsigned int *)(a2 + 12))
      || *(unsigned int *)(a1 + 28) * (unsigned __int64)*(unsigned int *)(a2 + 24) < *(unsigned int *)(a2 + 20)
                                                                                   * (unsigned __int64)*(unsigned int *)(a1 + 32)
      || operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 28), (unsigned int *)(a2 + 28)) )
    {
      return 0;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24);
    if ( (unsigned __int64)(unsigned int)(v9 * v10 * *(_DWORD *)(a1 + 12)) > *(_QWORD *)(a2 + 40) )
      return 0;
    if ( v10 - *(_DWORD *)(a2 + 4) / *(_DWORD *)(a2 + 8) < 0 )
      return 0;
    v11 = v10 - 61;
    if ( v10 - *(_DWORD *)(a2 + 12) / *(_DWORD *)(a2 + 16) > 0 && v11 > 0 )
      return 0;
    v12 = v9 * (unsigned int)*(_QWORD *)(a1 + 20) / (unsigned int)HIDWORD(*(_QWORD *)(a1 + 20));
    if ( (int)(v12 - *(_DWORD *)(a2 + 20) / *(_DWORD *)(a2 + 24)) < 0 && v10 - 60 < 0 )
      return 0;
    if ( (int)(v12 - *(_DWORD *)(a2 + 28) / *(_DWORD *)(a2 + 32)) > 0 && v11 > 0 )
      return 0;
  }
  return 1;
}
