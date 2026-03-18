/*
 * XREFs of ?MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ @ 0x180267EC4
 * Callers:
 *     ?MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x1800EFDE0 (-MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAXXZ @ 0x1800EFDF0 (-MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAXXZ.c)
 *     ?MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAXXZ @ 0x1800EFFD0 (-MarkFullDirty@CSectionBitmapRealization@@$4PPPPPPPM@EA@EAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::MarkFullDirty(CSectionBitmapRealization *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this - 14) )
  {
    v2 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v2);
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(*(int *)(*(_QWORD *)(*((_QWORD *)this - 14) + 8LL) + 4LL)
                                                             + *((_QWORD *)this - 14)
                                                             + 8LL))(
           *(int *)(*(_QWORD *)(*((_QWORD *)this - 14) + 8LL) + 4LL) + *((_QWORD *)this - 14) + 8LL,
           &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
           &v2) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v2);
  }
  CBitmapRealization::MarkFullDirty((CSectionBitmapRealization *)((char *)this - 80));
}
