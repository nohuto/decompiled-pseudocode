/*
 * XREFs of ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0062CE8
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0062E48 (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0062F04 (-CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C001B4E4 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

CFlipToken *__fastcall CFlipToken::CFlipToken(CFlipToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  CFlipToken *result; // rax

  CToken::CToken(this, a2, a3);
  *((_DWORD *)this + 139) = 0x1000000;
  *((_WORD *)this + 44) = 0;
  *(_QWORD *)this = &CFlipToken::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 280) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
