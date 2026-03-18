/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C029D0B8
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C029BC4C (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C029BD60 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C029CE70 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C029CF18 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C029CBE4 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C029CD88 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  UINT DirtyRectCount; // eax
  UINT v3; // edi
  struct tagRECT *pDirtyRects; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  UINT v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax

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
    v13 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v13 + 24) = 701LL;
  }
  else
  {
LABEL_5:
    v9 = 0;
    if ( !DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, pDirtyRects) )
    {
      ++v9;
      ++pDirtyRects;
      if ( v9 >= a2->DirtyRectCount )
        return 1LL;
    }
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = v9;
    *(_QWORD *)(v13 + 32) = pDirtyRects;
  }
  WdLogEvent5_WdError(v13);
  return 0LL;
}
