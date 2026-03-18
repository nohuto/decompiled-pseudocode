/*
 * XREFs of ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00E0D38
 * Callers:
 *     VidMmTrimDmaPoolToMinimum @ 0x1C002D5D0 (VidMmTrimDmaPoolToMinimum.c)
 *     ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C00E059C (-GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z.c)
 * Callees:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0098658 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C00E0614 (-NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ.c)
 */

void __fastcall VIDMM_DMA_POOL::TrimPool(VIDMM_DMA_POOL *this, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  VIDMM_DMA_POOL *v7; // rsi
  VIDMM_DMA_POOL *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  WdLogSingleEntry1(4LL, *((_QWORD *)this + 2));
  v7 = (VIDMM_DMA_POOL *)*((_QWORD *)this + 12);
  while ( (a2 || (unsigned int)VIDMM_DMA_POOL::NeedToBeTrimmed(this, v5, v6))
       && v7 != (VIDMM_DMA_POOL *)((char *)this + 96) )
  {
    v8 = v7;
    v7 = *(VIDMM_DMA_POOL **)v7;
    if ( v4 >= 2 || *((_BYTE *)v8 + 25) )
    {
      v11 = 0;
      LOBYTE(v6) = 1;
      VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, v8, v6, &v11);
      if ( v11 )
      {
        WdLogSingleEntry2(4LL, v8, this);
        return;
      }
      VIDMM_DMA_POOL::RemoveDmaBufferFromPool((struct VIDMM_DEVICE **)this, v8, v9, v10);
    }
    else
    {
      ++v4;
    }
  }
}
