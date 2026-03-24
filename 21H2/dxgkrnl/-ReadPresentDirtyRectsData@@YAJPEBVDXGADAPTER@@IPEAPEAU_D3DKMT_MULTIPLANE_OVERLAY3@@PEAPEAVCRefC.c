/*
 * XREFs of ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C02A6028
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C02A62BC (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a3,
        struct CRefCountedBuffer **a4)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // r10d
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v9; // rsi
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdi
  __int64 DirtyRectCount; // rdx
  int v12; // ebp
  struct CRefCountedBuffer *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct CRefCountedBuffer *v18; // rdi
  __int64 v19; // rax
  char *v21; // r15
  char *v22; // rbx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v23; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v24; // rbp
  __int64 v25; // rax

  *a4 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = 0;
  v9 = a3;
  if ( a2 )
  {
    do
    {
      pPlaneAttributes = (*a3)->pPlaneAttributes;
      DirtyRectCount = pPlaneAttributes->DirtyRectCount;
      if ( (unsigned int)DirtyRectCount > 0xFFF )
      {
        v25 = WdLogNewEntry5_WdWarning(v4, DirtyRectCount, a3);
        *(_QWORD *)(v25 + 24) = pPlaneAttributes->DirtyRectCount;
        WdLogEvent5_WdWarning(v25);
        return 3221225485LL;
      }
      if ( ((*a3)->InputFlags.Value & 1) != 0 && (_DWORD)DirtyRectCount )
      {
        v4 = (unsigned int)(DirtyRectCount + v4);
        v5 = (unsigned int)(v5 + 1);
      }
      ++v7;
      ++a3;
    }
    while ( v7 < (unsigned int)v6 );
    if ( (_DWORD)v4 && (_DWORD)v5 )
    {
      v12 = 16 * (v5 + v4) + 8;
      v13 = (struct CRefCountedBuffer *)operator new[]((unsigned int)(16 * (v5 + v4) + 24), 0x4B677844u, (POOL_TYPE)512);
      v18 = v13;
      if ( !v13 )
      {
        v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v19 + 24) = 1446LL;
        WdLogEvent5_WdLowResource(v19);
        return 3221225495LL;
      }
      *(_QWORD *)v13 = 0LL;
      v21 = (char *)v13 + 24;
      *((_DWORD *)v13 + 4) = v5;
      *((_DWORD *)v13 + 2) = v12;
      v22 = (char *)v13 + 16 * v5 + 24;
      *((_DWORD *)v13 + 3) = 1;
      do
      {
        v23 = *v9;
        if ( ((*v9)->InputFlags.Value & 1) != 0 )
        {
          v24 = v23->pPlaneAttributes;
          if ( v24->DirtyRectCount )
          {
            *(_DWORD *)v21 = v23->LayerIndex;
            *((_QWORD *)v21 + 1) = v22;
            *((_DWORD *)v21 + 1) = v24->DirtyRectCount;
            memmove(v22, v24->pDirtyRects, 16LL * v24->DirtyRectCount);
            v22 += 16 * v24->DirtyRectCount;
            v21 += 16;
          }
        }
        ++v9;
        --v6;
      }
      while ( v6 );
      *a4 = v18;
    }
  }
  return 0LL;
}
