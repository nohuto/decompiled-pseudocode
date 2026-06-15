/*
 * XREFs of unknown_libname_207 @ 0x180037F88
 * Callers:
 *     sub_180026F60 @ 0x180026F60 (sub_180026F60.c)
 *     sub_180052D54 @ 0x180052D54 (sub_180052D54.c)
 *     sub_180052E04 @ 0x180052E04 (sub_180052E04.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     sub_1800671EC @ 0x1800671EC (sub_1800671EC.c)
 *     sub_18006EFB0 @ 0x18006EFB0 (sub_18006EFB0.c)
 *     sub_18006FA04 @ 0x18006FA04 (sub_18006FA04.c)
 *     sub_18006FB4C @ 0x18006FB4C (sub_18006FB4C.c)
 *     j_unknown_libname_207 @ 0x18006FC2C (j_unknown_libname_207.c)
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_1800711F0 @ 0x1800711F0 (sub_1800711F0.c)
 *     sub_1800721CC @ 0x1800721CC (sub_1800721CC.c)
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 *     sub_180077970 @ 0x180077970 (sub_180077970.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA @ 0x180077990 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurrency@@_N@Z@4HA.c)
 *     sub_18007AB95 @ 0x18007AB95 (sub_18007AB95.c)
 *     sub_18007ABA7 @ 0x18007ABA7 (sub_18007ABA7.c)
 *     sub_18007ABB9 @ 0x18007ABB9 (sub_18007ABB9.c)
 *     sub_18007ABE0 @ 0x18007ABE0 (sub_18007ABE0.c)
 *     sub_18007B120 @ 0x18007B120 (sub_18007B120.c)
 *     sub_18007B1A8 @ 0x18007B1A8 (sub_18007B1A8.c)
 *     sub_18007B1BA @ 0x18007B1BA (sub_18007B1BA.c)
 *     sub_18007B1CC @ 0x18007B1CC (sub_18007B1CC.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA @ 0x18007C049 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA.c)
 *     sub_18007C06D @ 0x18007C06D (sub_18007C06D.c)
 *     sub_18007C10F @ 0x18007C10F (sub_18007C10F.c)
 *     sub_18007C145 @ 0x18007C145 (sub_18007C145.c)
 *     sub_18007C157 @ 0x18007C157 (sub_18007C157.c)
 *     sub_18007C18D @ 0x18007C18D (sub_18007C18D.c)
 *     sub_18007C1A0 @ 0x18007C1A0 (sub_18007C1A0.c)
 *     sub_18007C243 @ 0x18007C243 (sub_18007C243.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_2 @ 0x18007C255 (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_18007C255.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_4 @ 0x1800E7C7F (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_1800E7C7F.c)
 *     sub_180107298 @ 0x180107298 (sub_180107298.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x18012156C (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 *     sub_1801215D0 @ 0x1801215D0 (sub_1801215D0.c)
 *     sub_180121DC0 @ 0x180121DC0 (sub_180121DC0.c)
 *     sub_180126553 @ 0x180126553 (sub_180126553.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_207(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
