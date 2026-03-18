/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800CB7D0
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800064F4 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x1802042FC (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64 *); // rcx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
  {
    if ( !*((_BYTE *)this + 120) )
    {
      v4 = *((_QWORD *)this + 4);
      if ( v4 && (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4)) != 0 )
      {
        v6 = (void (__fastcall ***)(_QWORD, __int64 *))(v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL));
        (**v6)(v6, &v9);
        v7 = HIDWORD(v9);
        if ( *((_BYTE *)this + 120) )
          v7 = 3;
        HIDWORD(v9) = v7;
      }
      else
      {
        if ( *((_BYTE *)this + 120) )
          return 1;
        v7 = 0;
      }
      if ( v7 != 3 )
        return v2;
    }
    return 1;
  }
  return v2;
}
