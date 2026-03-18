/*
 * XREFs of ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ @ 0x1801EFD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSurfaceBrush::HasSwapChainContent(CSurfaceBrush *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 **); // rcx
  bool v2; // bl
  __int64 v3; // rax
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 12);
  v2 = 0;
  v7 = 0LL;
  if ( v1 && (**v1)(v1, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v7) >= 0 )
  {
    v3 = *v7;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v7, &v6) >= 0 )
    {
      v8 = 0LL;
      v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v6 + 8) + 4LL) + v6 + 8);
      v2 = (**v4)(v4, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v8) >= 0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v6);
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v7);
  return v2;
}
