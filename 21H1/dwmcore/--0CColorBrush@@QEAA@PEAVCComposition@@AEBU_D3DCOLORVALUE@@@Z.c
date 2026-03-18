/*
 * XREFs of ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AE334
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800ADF90 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18007C8D4 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorBrush *__fastcall CColorBrush::CColorBrush(
        CColorBrush *this,
        struct CComposition *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CColorBrush *result; // rax
  _OWORD *v8; // r10

  *((_QWORD *)this + 7) = &CMaskBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 16) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 15) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 16) + 4LL) + 128) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)v3 = &CColorBrush::`vftable';
  v4 = *(_QWORD *)(v3 + 56);
  *(_BYTE *)(v3 + 72) = 0;
  *(_QWORD *)(*(int *)(v4 + 4) + v3 + 56) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 56) + 8LL) + v3 + 56) = &CColorBrush::`vftable'{for `IContent'};
  v5 = *(int *)(*(_QWORD *)(v3 + 56) + 4LL);
  *(_DWORD *)(v5 + v3 + 52) = v5 - 48;
  v6 = *(int *)(*(_QWORD *)(v3 + 56) + 8LL);
  result = (CColorBrush *)v3;
  *(_DWORD *)(v6 + v3 + 52) = v6 - 64;
  *(_OWORD *)(v3 + 80) = *v8;
  return result;
}
