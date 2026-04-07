/*
 * XREFs of ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180045794
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800456B8 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004C9E4 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045888 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccentAcrylicBlurBehind::ReleaseResources(CAccentAcrylicBlurBehind *this)
{
  __int64 v2; // rbx
  CBaseObject *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  *((_DWORD *)this + 88) = 0;
  v5 = 0LL;
  if ( *((_QWORD *)this + 38)
    && (int)Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
              (char *)this + 304,
              &v5) >= 0 )
  {
    v4 = 0LL;
    v2 = v5;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v4);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 352LL))(v2, &v4);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  v3 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 35) = 0LL;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
}
