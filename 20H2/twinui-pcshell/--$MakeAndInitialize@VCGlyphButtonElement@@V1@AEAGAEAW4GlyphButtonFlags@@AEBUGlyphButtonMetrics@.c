/*
 * XREFs of ??$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlyphButtonElement@@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803B2048
 * Callers:
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1803B2594 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CGlyphButtonElement@@QEAA@XZ @ 0x1803B2180 (--0CGlyphButtonElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1803B2894 (-RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@I.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGlyphButtonElement,CGlyphButtonElement,unsigned short &,enum GlyphButtonFlags &,GlyphButtonMetrics const &,unsigned int &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
        CGlyphButtonElement **a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  CGlyphButtonElement *v12; // rax
  int v13; // edi
  CGlyphButtonElement *v14; // rax
  __int64 v15; // r8
  CGlyphButtonElement *v16; // rbx
  CGlyphButtonElement *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CGlyphButtonElement *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = CGlyphButtonElement::CGlyphButtonElement(v12);
    v15 = *a3;
    v16 = v14;
    v18 = v14;
    v13 = CGlyphButtonElement::RuntimeClassInitialize(v14, *a2, v15, a4, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
    {
      if ( v16 )
        (*(void (__fastcall **)(CGlyphButtonElement *))(*(_QWORD *)v16 + 8LL))(v16);
      *a1 = v16;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
