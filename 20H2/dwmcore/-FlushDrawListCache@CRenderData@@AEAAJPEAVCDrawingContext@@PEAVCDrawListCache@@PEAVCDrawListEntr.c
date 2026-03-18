/*
 * XREFs of ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180073DEC
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800740C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009D34C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18009DAA8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18009DDB0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18009DE78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CRenderData::FlushDrawListCache(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3,
        struct CDrawListEntryBuilder *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  if ( (unsigned int)((__int64)(*((_QWORD *)a4 + 6) - *((_QWORD *)a4 + 5)) >> 3) )
    CDrawListCache::Update(a3, a2, a4);
  CDrawListEntryBuilder::Reset(a4);
  if ( *((_QWORD *)a3 + 3) )
  {
    v8 = CDrawingContext::EmitDrawListCache(a2, a3);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4D7u, 0LL);
  }
  if ( (*((_DWORD *)a3 + 22) & 0x100) != 0 )
    CDrawListCache::Invalidate(a3);
  return v4;
}
