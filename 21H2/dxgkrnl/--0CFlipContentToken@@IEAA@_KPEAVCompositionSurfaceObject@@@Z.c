/*
 * XREFs of ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C006FBC0
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C006FCD4 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C001C030 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::CFlipContentToken(
        CFlipContentToken *this,
        __int64 a2,
        struct CompositionSurfaceObject *a3)
{
  CToken::CToken(this, a2, a3);
  *((_BYTE *)this + 224) &= 0xF0u;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  *((_QWORD *)this + 21) = 3LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_WORD *)this + 64) = 0;
  *((_OWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  memset((char *)this + 228, 0, 0x48uLL);
  return this;
}
