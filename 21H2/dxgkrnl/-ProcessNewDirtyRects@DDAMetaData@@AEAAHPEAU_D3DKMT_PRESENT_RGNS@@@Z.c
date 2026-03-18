/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032772C
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C0325E54 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0325F94 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C03274AC (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C0327554 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0327168 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C032739C (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  UINT DirtyRectCount; // eax
  UINT v3; // ebx
  struct tagRECT *pDirtyRects; // rdi
  __int64 v7; // rbx

  DirtyRectCount = a2->DirtyRectCount;
  v3 = 0;
  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  if ( a2->DirtyRectCount )
  {
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      DirtyRectCount = a2->DirtyRectCount;
      ++v3;
      ++pDirtyRects;
      if ( v3 >= a2->DirtyRectCount )
      {
        pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
        goto LABEL_5;
      }
    }
    WdLogSingleEntry1(2LL, 704LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to process new dirty against move list",
      704LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
LABEL_5:
    v7 = 0LL;
    if ( !DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, pDirtyRects) )
    {
      v7 = (unsigned int)(v7 + 1);
      ++pDirtyRects;
      if ( (unsigned int)v7 >= a2->DirtyRectCount )
        return 1LL;
    }
    WdLogSingleEntry2(2LL, v7, pDirtyRects);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to process dirty rect against dirty list, Idx 0x%I64x, pRect 0x%I64x",
      v7,
      (__int64)pDirtyRects,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
