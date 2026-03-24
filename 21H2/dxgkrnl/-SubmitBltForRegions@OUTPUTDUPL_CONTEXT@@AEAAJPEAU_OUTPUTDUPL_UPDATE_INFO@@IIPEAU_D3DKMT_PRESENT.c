/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A2DC8
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2508 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     McTemplateK0pqppqq_EtwWriteTransfer @ 0x1C004AFDC (McTemplateK0pqppqq_EtwWriteTransfer.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016E9EC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027E754 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        __int64 a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  struct _D3DKMT_PRESENT_RGNS *v5; // rbx
  __int64 v7; // r12
  __int64 v9; // r13
  UINT MoveRectCount; // edx
  UINT v12; // r15d
  struct tagRECT *pDirtyRects; // rbp
  UINT v14; // esi
  struct tagRECT *Buffer; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct tagRECT *i; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  struct _D3DKMT_PRESENT_RGNS *v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rdx
  unsigned int v27; // ebx
  struct DXGCONTEXT **v28; // [rsp+20h] [rbp-58h]
  struct tagRECT *v29; // [rsp+38h] [rbp-40h]
  struct COREDEVICEACCESS *v30; // [rsp+40h] [rbp-38h]

  v5 = a5;
  v7 = a4;
  v9 = (unsigned int)a3;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v12 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v14 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(
                                 *((AUTOEXPANDALLOCATION **)a2 + 6),
                                 v14 + 16 * MoveRectCount,
                                 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = 1870LL;
      WdLogEvent5_WdLowResource(v20);
      return 3221225495LL;
    }
    memmove(Buffer, v5->pDirtyRects, v14);
    a3 = 0LL;
    for ( i = &pDirtyRects[v5->DirtyRectCount]; (unsigned int)a3 < v5->MoveRectCount; ++i )
    {
      v22 = (unsigned int)a3;
      a3 = (unsigned int)(a3 + 1);
      *i = v5->pMoveRects[v22].DestRect;
    }
  }
  else
  {
    pDirtyRects = (struct tagRECT *)a5->pDirtyRects;
  }
  v23 = *((_QWORD *)a2 + 7);
  v24 = 0LL;
  v25 = *((_QWORD *)a2 + 1);
  a5 = 0LL;
  if ( v23 )
  {
    v24 = *(struct _D3DKMT_PRESENT_RGNS **)(v23 + 1504);
  }
  else if ( (*(_DWORD *)(v25 + 420) & 0x10) != 0 )
  {
    v26 = *(_QWORD *)(v25 + 424);
    if ( v26 != v25 + 424 )
      v24 = *(struct _D3DKMT_PRESENT_RGNS **)(v25 + 424);
    a5 = v24;
    v24 = (struct _D3DKMT_PRESENT_RGNS *)&a5;
    if ( *((_DWORD *)a2 + 8) )
    {
      v27 = -1073741811;
      goto LABEL_12;
    }
  }
  v27 = DXGCONTEXT::Blt(
          (struct _EX_RUNDOWN_REF *)v25,
          v9,
          v7,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v12,
          pDirtyRects,
          0LL,
          (struct DXGHWQUEUE **)v24);
LABEL_12:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v30) = v27;
    LODWORD(v29) = v12;
    LODWORD(v28) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq_EtwWriteTransfer((unsigned int)v28, v26, a3, this, v28, v9, v7, v29, v30);
  }
  return v27;
}
