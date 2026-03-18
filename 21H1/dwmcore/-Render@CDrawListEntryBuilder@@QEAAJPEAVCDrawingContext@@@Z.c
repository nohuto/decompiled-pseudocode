/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18004D1E4
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004C834 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18003A34C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18004CAFC (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18004D38C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18004D5B4 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(struct CDrawListEntry ***this, struct CDrawingContext *a2)
{
  CDrawListCache **v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  CDrawListCache *v8; // rbx
  int v10; // eax
  __int64 v11; // rcx

  v2 = (CDrawListCache **)(this + 286);
  if ( this[286] || (*v2 = 0LL, v10 = CDrawListCache::Create((struct CDrawListCache **)this + 286), v7 = v10, v10 >= 0) )
  {
    CDrawListCache::Update(*v2, a2, this);
    v5 = CDrawingContext::EmitDrawListCache(a2, *v2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x527u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x523u, 0LL);
  }
  v8 = *v2;
  if ( v8 && *((_QWORD *)v8 + 3) )
  {
    if ( *((_DWORD *)v8 + 4) == 1 )
    {
      ++dword_180349370;
    }
    else if ( *((_DWORD *)v8 + 4) == 2 )
    {
      ++dword_18034937C;
    }
    *((_QWORD *)v8 + 3) = 0LL;
    *((_DWORD *)v8 + 4) = 0;
    CDrawListCache::ReleaseDrawListEntries(v8);
    *((_BYTE *)v8 + 100) = 0;
    *((_BYTE *)v8 + 102) = 0;
  }
  return v7;
}
