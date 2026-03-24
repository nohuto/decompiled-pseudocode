/*
 * XREFs of ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1801F103C
 * Callers:
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1801F1220 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CTextVisualContent *__fastcall CTextVisualContent::CTextVisualContent(
        CTextVisualContent *this,
        struct CComposition **a2)
{
  CTextVisualContent *v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CTextVisualContent *result; // rax
  __int64 v7; // r9

  *((_QWORD *)this + 7) = &CParticleEmitter::`vbtable'{for `CContent'};
  *((_QWORD *)this + 13) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 12) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2[2]);
  v3 = *((_QWORD *)v2 + 7);
  *(_QWORD *)v2 = &CTextVisualContent::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v3 + 4) + 56) = &CTextVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CTextVisualContent::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 24;
  v5 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v5 + 52) = v5 - 40;
  *((_QWORD *)v2 + 8) = v7;
  return result;
}
