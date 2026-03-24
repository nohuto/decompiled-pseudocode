/*
 * XREFs of ??0CTextObject@@QEAA@PEAVCComposition@@@Z @ 0x18016B520
 * Callers:
 *     ??0CCompositionGlyphRun@@QEAA@PEAVCComposition@@@Z @ 0x18016A4D0 (--0CCompositionGlyphRun@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionTextLine@@QEAA@PEAVCComposition@@@Z @ 0x18016A588 (--0CCompositionTextLine@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CTextObject *__fastcall CTextObject::CTextObject(CTextObject *this, struct CComposition *a2)
{
  CTextObject *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  CTextObject *result; // rax

  CContent::CContent(this, a2);
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *(_QWORD *)v2 = &CTextObject::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 4LL) + 56) = &CD2DPrimitiveProperties::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CTextObject::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 52) = v3 - 40;
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 56;
  return result;
}
