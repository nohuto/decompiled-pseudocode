/*
 * XREFs of ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C02FB2D0
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0121C40 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedPixelRate @ 0x1C02FAE88 (SupportedPixelRate.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInPixelRateRange(__int64 a1, __int64 a2, int a3, char *a4, _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 i; // rax
  int *v14; // rbx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a1 + 264;
  for ( i = *(_QWORD *)(a1 + 264); ; i = *((_QWORD *)v14 + 6) )
  {
    if ( i == v12 )
      goto LABEL_14;
    v14 = (int *)(i - 48);
    if ( !i )
      v14 = 0LL;
    if ( !v14 )
    {
LABEL_14:
      *a4 = 1;
      return 0LL;
    }
    if ( v14[9] == 2 )
      break;
  }
  v16 = SupportedPixelRate(a2, (__int64)v14, a3);
  *a4 = v16;
  if ( v16 )
    return 0LL;
  if ( *v14 == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *v14 == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v18, v17);
  *(_QWORD *)(v19 + 24) = *v14;
  WdLogEvent5_WdError(v19);
  return 3223192348LL;
}
