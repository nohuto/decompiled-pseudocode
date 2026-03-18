/*
 * XREFs of ??$?4V_lambda_cdafab528f206ffe3f245df898126ff3_@@X@?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@QEAAAEAV01@$$QEAV_lambda_cdafab528f206ffe3f245df898126ff3_@@@Z @ 0x1801B87EC
 * Callers:
 *     ??$RegisterNodeForVisit@VCBrush@@@CDebugTreeDumper@@QEAAXPEAVCBrush@@_N@Z @ 0x1801B8994 (--$RegisterNodeForVisit@VCBrush@@@CDebugTreeDumper@@QEAAXPEAVCBrush@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180199748 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x1801997A0 (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function<void (void *,CDebugTreeDumper *)>::operator=<_lambda_cdafab528f206ffe3f245df898126ff3_,void>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v7; // [rsp+98h] [rbp-20h]

  v7 = 0LL;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_cdafab528f206ffe3f245df898126ff3_,void,void *,CDebugTreeDumper *>::`vftable';
  v5[7] = v5;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)v6, (__int64)v5);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)v5, a1);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(a1, (__int64)v6);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v6, v2);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v5, v3);
  return a1;
}
