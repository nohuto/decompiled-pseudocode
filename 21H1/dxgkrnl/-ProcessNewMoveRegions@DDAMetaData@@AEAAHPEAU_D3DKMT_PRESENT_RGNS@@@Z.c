/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C029D17C
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C029BD60 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C029CE70 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C029CF18 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  UINT v3; // edi
  __int64 result; // rax
  LONG x; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v14; // [rsp+28h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  v3 = 0;
  result = 1LL;
  v14 = 0LL;
  if ( a2->MoveRectCount )
  {
    while ( 1 )
    {
      x = pMoveRects->SourcePoint.x;
      v13 = 0;
      v14.left = x;
      v14.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
      v14.top = pMoveRects->SourcePoint.y;
      v14.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
      result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v14, &v13);
      if ( !(_DWORD)result )
        break;
      if ( v13 )
      {
        result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v14);
        if ( !(_DWORD)result )
        {
          v12 = WdLogNewEntry5_WdError(v11, v10);
          *(_QWORD *)(v12 + 24) = 679LL;
          goto LABEL_9;
        }
      }
      ++v3;
      ++pMoveRects;
      if ( v3 >= a2->MoveRectCount )
        return result;
    }
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = 666LL;
LABEL_9:
    WdLogEvent5_WdError(v12);
    return 0LL;
  }
  return result;
}
