/*
 * XREFs of ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0082AE4
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0082C54 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0020AEC (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::CFlipContentToken(
        CFlipContentToken *this,
        __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CToken::CToken(this, a2, a3);
  *((_BYTE *)this + 224) &= ~1u;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  memset((char *)this + 120, 0, 0x68uLL);
  memset((char *)this + 228, 0, 0x48uLL);
  return this;
}
