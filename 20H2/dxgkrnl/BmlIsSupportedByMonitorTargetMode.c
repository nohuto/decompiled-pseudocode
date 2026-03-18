/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C0136D88
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0136B18 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0121A88 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, __int64 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0;
  v14 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v14,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v15);
  v8 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v14 != 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v11[3] = v8;
  v11[4] = *(unsigned int *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 40);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, v10);
    WdLogEvent5_WdAssertion(v13);
    v12 = *(_QWORD *)(a1 + 40);
  }
  v11[5] = v12;
  return 0;
}
