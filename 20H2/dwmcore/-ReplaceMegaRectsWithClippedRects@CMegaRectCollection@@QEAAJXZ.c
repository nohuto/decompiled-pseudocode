/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180071D8C
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180071390 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180046FC4 (-OccludeRegions@CMegaRectCollection@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180072350 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800753AC (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  unsigned int v1; // ebx
  bool v2; // cf
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  CMegaRect *v9; // rcx
  int updated; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+38h] [rbp-9h] BYREF
  __int128 v13; // [rsp+48h] [rbp+7h]
  __int128 v14; // [rsp+58h] [rbp+17h]
  __int128 v15; // [rsp+68h] [rbp+27h]
  __int128 v16; // [rsp+78h] [rbp+37h]
  __int128 v17; // [rsp+88h] [rbp+47h]

  v1 = 0;
  v12 = 0LL;
  v2 = *((_QWORD *)this + 4) < 2uLL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v2 )
  {
    v5 = CMegaRectCollection::PrepMegaRectData(this);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1D3u, 0LL);
    }
    else
    {
      CMegaRectCollection::OccludeRegions(this);
      v7 = *((_QWORD *)this + 3);
      v8 = v7 + *((_QWORD *)this + 4);
      while ( v7 != v8 )
      {
        v9 = *(CMegaRect **)(*((_QWORD *)this + 1) + 8 * (v7 & (*((_QWORD *)this + 2) - 1LL)));
        if ( *((_QWORD *)v9 + 1) )
        {
          updated = CMegaRect::UpdatePrimitive(v9, (struct CMegaRect::UpdatePrimitiveWorkingBuffers *)&v12);
          v1 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x1DEu, 0LL);
            break;
          }
        }
        ++v7;
      }
    }
    if ( *((_QWORD *)&v16 + 1) )
    {
      std::_Deallocate<16,0>(*((_QWORD *)&v16 + 1), 2 * ((__int64)(*((_QWORD *)&v17 + 1) - *((_QWORD *)&v16 + 1)) >> 1));
      *((_QWORD *)&v16 + 1) = 0LL;
      v17 = 0LL;
    }
    if ( (_QWORD)v15 )
    {
      std::_Deallocate<16,0>(v15, v16 - v15);
      *(_QWORD *)&v16 = 0LL;
      v15 = 0LL;
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      std::_Deallocate<16,0>(*((_QWORD *)&v13 + 1), *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1));
      *((_QWORD *)&v13 + 1) = 0LL;
      v14 = 0LL;
    }
    if ( (_QWORD)v12 )
      std::_Deallocate<16,0>(v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v1;
}
