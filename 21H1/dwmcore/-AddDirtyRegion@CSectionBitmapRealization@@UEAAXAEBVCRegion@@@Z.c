/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093BA4
 * Callers:
 *     ?AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800EFC40 (-AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z @ 0x1800EFC50 (-AddDirtyRegion@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802639CC (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180017058 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRE.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093B1C (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+44h] [rbp-BCh]
  _BYTE v11[256]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v2 = 0;
  if ( *((_QWORD *)this - 14) )
  {
    v7[0] = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v7);
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this - 14)
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this - 14) + 8LL) + 4LL));
    v6 = (**v5)(v5, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v7);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
    v8[0] = v11;
    v8[1] = v11;
    v9 = 16;
    v10 = 16LL;
    CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(a2, (__int64)v8);
    if ( HIDWORD(v10) )
    {
      do
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7[0] + 40LL))(v7[0], v8[0] + 16LL * v2++);
      while ( v2 < HIDWORD(v10) );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v8);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v7);
  }
  CBitmapRealization::AddDirtyRegion(
    (CSectionBitmapRealization *)((char *)this - 80),
    (const struct FastRegion::Internal::CRgnData **)a2);
}
