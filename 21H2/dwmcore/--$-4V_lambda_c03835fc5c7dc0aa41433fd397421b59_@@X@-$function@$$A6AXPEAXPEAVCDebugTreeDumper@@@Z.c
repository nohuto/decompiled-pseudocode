/*
 * XREFs of ??$?4V_lambda_c03835fc5c7dc0aa41433fd397421b59_@@X@?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@QEAAAEAV01@$$QEAV_lambda_c03835fc5c7dc0aa41433fd397421b59_@@@Z @ 0x1801964C0
 * Callers:
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x18019692C (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x1801984E8 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x180198540 (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function<void (void *,CDebugTreeDumper *)>::operator=<_lambda_c03835fc5c7dc0aa41433fd397421b59_,void>(
        __int64 a1)
{
  _QWORD v3[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v4[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v5; // [rsp+98h] [rbp-20h]

  v5 = 0LL;
  v3[0] = &std::_Func_impl_no_alloc<_lambda_c03835fc5c7dc0aa41433fd397421b59_,void,void *,CDebugTreeDumper *>::`vftable';
  v3[7] = v3;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v4, v3);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v3, a1);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(a1, v4);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(v4);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(v3);
  return a1;
}
