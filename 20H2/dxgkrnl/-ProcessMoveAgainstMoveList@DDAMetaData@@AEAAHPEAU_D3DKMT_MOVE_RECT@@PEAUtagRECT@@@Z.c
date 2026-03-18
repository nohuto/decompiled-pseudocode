/*
 * XREFs of ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C02A0428
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A068C (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C029EFF4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C029F15C (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A05C8 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1C02A1400 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstMoveList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r14
  RECT *p_DestRect; // r12
  UINT v8; // r8d
  int v9; // ecx
  UINT v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _D3DKMT_PRESENT_RGNS v28; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v6 = **((_QWORD **)this + 6);
  if ( *((_DWORD *)this + 11) )
  {
    p_DestRect = &a2->DestRect;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = *(_DWORD *)v6 + *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 8);
      v28.DirtyRectCount = *(_DWORD *)v6;
      LODWORD(v28.pDirtyRects) = v9;
      v10 = v8 + *(_DWORD *)(v6 + 20) - *(_DWORD *)(v6 + 12);
      *(&v28.DirtyRectCount + 1) = v8;
      HIDWORD(v28.pDirtyRects) = v10;
      v11 = RectsOverlap(p_DestRect, v6 + 8, 0LL);
      v14 = RectsOverlap(v12, &v28, v13);
      v16 = RectsOverlap(a3, v6 + 8, v15);
      if ( v11 || v14 || v16 )
        break;
      ++v3;
      v6 += 24LL;
      if ( v3 >= *((_DWORD *)this + 11) )
        goto LABEL_7;
    }
    if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, (struct tagRECT *)(v6 + 8)) )
    {
      v19 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v19 + 24) = 897LL;
      goto LABEL_11;
    }
    v23 = (__int64 *)*((_QWORD *)this + 6);
    *(&v28.DirtyRectCount + 1) = 0;
    v28.pDirtyRects = p_DestRect;
    v28.DirtyRectCount = 1;
    v24 = *v23;
    v25 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v6 = *(_OWORD *)(v24 + 24 * v25);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v24 + 24 * v25 + 16);
    *(_OWORD *)&v28.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v28) )
    {
      v19 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v19 + 24) = 905LL;
      goto LABEL_11;
    }
  }
  else
  {
LABEL_7:
    if ( !(unsigned int)DDAMetaData::AddToMoveList(this, a2) )
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = 922LL;
LABEL_11:
      WdLogEvent5_WdError(v19);
      return 0LL;
    }
  }
  return 1LL;
}
