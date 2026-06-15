/*
 * XREFs of unknown_libname_37 @ 0x18000A574
 * Callers:
 *     sub_18003B7D4 @ 0x18003B7D4 (sub_18003B7D4.c)
 *     sub_18003B7E6 @ 0x18003B7E6 (sub_18003B7E6.c)
 *     sub_18003B80A @ 0x18003B80A (sub_18003B80A.c)
 *     unknown_libname_6 @ 0x18003B82E (unknown_libname_6.c)
 *     ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA @ 0x18003C7F3 (-dtor$27@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0 @ 0x18003C82E (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0.c)
 *     sub_18003C87F @ 0x18003C87F (sub_18003C87F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_37(__int64 a1, __int64 a2)
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
