/*
 * XREFs of ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801979CC
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d5fd207dc5cfb9af9a78a717bfbf9dd3_@@XPEAXPEAVCDebugTreeDumper@@@std@@EEAAX$$QEAPEAX$$QEAPEAVCDebugTreeDumper@@@Z @ 0x1801C22B0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_d5fd207dc5cfb9af9a78a717bfbf9dd3_@@XPEAXPEAVCDebugTreeD.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8FEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E692C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E6968 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180197A6C (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 */

void __fastcall CDebugTreeDumper::Dump(CDebugTreeDumper *this, struct IBitmapRealization *a2)
{
  void **v2; // rsi
  _QWORD *v5; // rdx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  std::string::string(v6, (__int64)"IBitmapRealization");
  if ( v2 != v6 )
  {
    v5 = v6;
    if ( v6[3] >= 0x10uLL )
      v5 = (_QWORD *)v6[0];
    std::string::assign(v2, v5, v6[2]);
  }
  std::string::_Tidy_deallocate((__int64)v6);
  CDebugTreeDumper::DumpBitmapRealization(this, a2, a2);
}
