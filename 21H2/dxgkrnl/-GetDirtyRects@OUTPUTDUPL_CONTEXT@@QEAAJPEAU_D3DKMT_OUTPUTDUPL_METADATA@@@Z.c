/*
 * XREFs of ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C032672C
 * Callers:
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C03212F8 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 * Callees:
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C03266FC (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::GetDirtyRects(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_METADATA *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  UINT v7; // ebx
  struct tagRECT *DirtyRectData; // rax

  v4 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v4 + 16) == 2 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v7 = *(_DWORD *)(v6 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((const void ***)v6, v7, a3, a4);
    v7 *= 16;
    a2->BufferSizeRequired = v7;
    if ( a2->BufferSizeSupplied < v7 )
      return 3221225507LL;
    a2->pBuffer = DirtyRectData;
  }
  else
  {
    a2->BufferSizeRequired = 0;
  }
  return 0LL;
}
