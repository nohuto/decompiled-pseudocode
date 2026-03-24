/*
 * XREFs of ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800C09A0
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18001388C (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x1801B278C (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  int v7; // eax
  _BYTE v9[4]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+24h] [rbp-24h]

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
  {
    if ( !*((_BYTE *)this + 128) )
    {
      v4 = *((_QWORD *)this + 4);
      if ( v4 && (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4)) != 0 )
      {
        v6 = (void (__fastcall ***)(_QWORD, _BYTE *))(v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL));
        (**v6)(v6, v9);
        if ( *((_BYTE *)this + 128) )
          v7 = 3;
        else
          v7 = v10;
      }
      else
      {
        if ( *((_BYTE *)this + 128) )
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
