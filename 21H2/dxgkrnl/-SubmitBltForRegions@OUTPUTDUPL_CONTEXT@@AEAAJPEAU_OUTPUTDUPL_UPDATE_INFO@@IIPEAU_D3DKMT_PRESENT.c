/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0328E3C
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C03283C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0pqppqq_EtwWriteTransfer @ 0x1C0056380 (McTemplateK0pqppqq_EtwWriteTransfer.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        __int64 a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  struct _D3DKMT_PRESENT_RGNS *v5; // rbx
  __int64 v7; // r15
  __int64 v9; // r12
  UINT MoveRectCount; // edx
  unsigned int v12; // r13d
  const struct tagRECT *pDirtyRects; // rbp
  UINT v14; // esi
  struct tagRECT *Buffer; // rax
  struct tagRECT *i; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  struct _D3DKMT_PRESENT_RGNS *v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // ebx
  struct DXGCONTEXT **v23; // [rsp+20h] [rbp-58h]
  struct tagRECT *v24; // [rsp+38h] [rbp-40h]
  struct COREDEVICEACCESS *v25; // [rsp+40h] [rbp-38h]

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
                                 *((const void ***)a2 + 6),
                                 v14 + 16 * MoveRectCount,
                                 0,
                                 0LL);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      WdLogSingleEntry1(6LL, 1879LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expand temp buffer for submitting presents.",
        1879LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(Buffer, v5->pDirtyRects, v14);
    a3 = 0LL;
    for ( i = (struct tagRECT *)&pDirtyRects[v5->DirtyRectCount]; (unsigned int)a3 < v5->MoveRectCount; ++i )
    {
      v17 = (unsigned int)a3;
      a3 = (unsigned int)(a3 + 1);
      *i = v5->pMoveRects[v17].DestRect;
    }
  }
  else
  {
    pDirtyRects = a5->pDirtyRects;
  }
  v18 = *((_QWORD *)a2 + 7);
  v19 = 0LL;
  v20 = *((_QWORD *)a2 + 1);
  a5 = 0LL;
  if ( v18 )
  {
    v19 = *(struct _D3DKMT_PRESENT_RGNS **)(v18 + 1504);
  }
  else if ( (*(_DWORD *)(v20 + 404) & 0x10) != 0 )
  {
    v21 = *(_QWORD *)(v20 + 408);
    if ( v21 != v20 + 408 )
      v19 = *(struct _D3DKMT_PRESENT_RGNS **)(v20 + 408);
    a5 = v19;
    v19 = (struct _D3DKMT_PRESENT_RGNS *)&a5;
    if ( *((_DWORD *)a2 + 8) )
    {
      v22 = -1073741811;
      goto LABEL_12;
    }
  }
  v22 = DXGCONTEXT::Blt(
          (DXGCONTEXT *)v20,
          v9,
          v7,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v12,
          pDirtyRects,
          0LL,
          (struct DXGHWQUEUE **)v19);
LABEL_12:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v25) = v22;
    LODWORD(v24) = v12;
    LODWORD(v23) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq_EtwWriteTransfer((unsigned int)v23, v21, a3, this, v23, v9, v7, v24, v25);
  }
  return v22;
}
