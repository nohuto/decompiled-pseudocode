/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C01B5B18
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8DFC (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, char a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  unsigned __int8 v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  v10 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v10,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v11);
  v6 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v10 != 0;
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  v8[3] = v6;
  v8[4] = *(unsigned int *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 40);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *(_QWORD *)(a1 + 40);
  }
  v8[5] = v9;
  return 0;
}
