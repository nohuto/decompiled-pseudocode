/*
 * XREFs of ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800203C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180020438 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18015B12C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x18016117C (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     WPP_SF_q @ 0x1801848E8 (WPP_SF_q.c)
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x180186DA4 (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 *     WPP_SF_lq @ 0x18018721C (WPP_SF_lq.c)
 */

void __fastcall CTaskWindow::SetVisibility(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  bool v5; // zf
  char v6; // cl
  unsigned __int8 v7; // si
  PSRWLOCK v8; // rdi
  char *Ptr; // rdx
  _DWORD *v10; // rdx
  char *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(unsigned __int8 *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 || v4 != ((_DWORD)a2 == 2) )
  {
    v5 = *(_DWORD *)(a1 + 120) == 2;
    *(_DWORD *)(a1 + 120) = a2;
    v6 = v5;
    v7 = (_DWORD)a2 == 2;
    v5 = *(_QWORD *)(a1 + 48) == 0LL;
    *(_BYTE *)(a1 + 56) = (_DWORD)a2 != 2;
    if ( v5 )
    {
      if ( v6 != v7 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, v7, *(_QWORD *)(a1 + 32));
        CTaskWindow::_LogVisibilityTelemetry((CTaskWindow *)(a1 - 8), v7);
        v8 = CApplicationManagerUtility::g_pIAMGlobals;
        Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
          || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                    &CApplicationManagerUtility::g_pIAMGlobals[1],
                    Ptr + 1) >= 0 )
        {
          v10 = (char *)v8[1].Ptr + 4 * (__int64)v8[2].Ptr++;
          if ( v10 )
            *v10 = 1;
        }
        v14 = *(_QWORD *)(a1 + 128);
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          &CApplicationManagerUtility::g_pIAMGlobals[1],
          *(_QWORD *)(a1 + 32),
          13LL);
        v11 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( v11 )
          CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v11 - 1;
      }
    }
    else
    {
      CTaskWindow::_ReconcileViewWithVisibility((CTaskWindow *)(a1 - 8));
    }
    if ( *(_BYTE *)(a1 + 92) && !*(_DWORD *)(a1 + 120) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_57aa434970eb334441637f8eaa75da73_Traceguids, v12);
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 520LL))(
              *(_QWORD *)(a1 + 48),
              (*(_DWORD *)(a1 + 96) & 1u) + 1);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D2,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
          (const char *)(unsigned int)v13,
          v14);
      *(_BYTE *)(a1 + 92) = 0;
    }
  }
}
