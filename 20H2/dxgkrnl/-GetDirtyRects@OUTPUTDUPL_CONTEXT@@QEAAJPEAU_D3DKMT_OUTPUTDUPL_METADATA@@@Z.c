/*
 * XREFs of ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C029F890
 * Callers:
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C0298D4C (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 * Callees:
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C029F860 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::GetDirtyRects(OUTPUTDUPL_CONTEXT *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  UINT v5; // ebx
  struct tagRECT *DirtyRectData; // rax

  v2 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v2 + 16) == 2 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    v5 = *(_DWORD *)(v4 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((AUTOEXPANDALLOCATION **)v4, v5);
    v5 *= 16;
    a2->BufferSizeRequired = v5;
    if ( a2->BufferSizeSupplied < v5 )
      return 3221225507LL;
    a2->pBuffer = DirtyRectData;
  }
  else
  {
    a2->BufferSizeRequired = 0;
  }
  return 0LL;
}
