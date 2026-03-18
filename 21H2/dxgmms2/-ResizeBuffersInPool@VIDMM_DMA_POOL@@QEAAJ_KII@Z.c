/*
 * XREFs of ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00E0B7C
 * Callers:
 *     VidMmResizeBuffersInPool @ 0x1C002D4F0 (VidMmResizeBuffersInPool.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::ResizeBuffersInPool(
        struct _VIDMM_DMA_BUFFER **this,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  struct _VIDMM_DMA_BUFFER *v13; // rsi
  struct _VIDMM_DMA_BUFFER *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx

  if ( a2 < (unsigned __int64)this[6] || a3 < *((_DWORD *)this + 17) || a4 < *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1889LL);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
  else if ( (struct _VIDMM_DMA_BUFFER *)a2 == this[5] && a3 == *((_DWORD *)this + 16) && a4 == *((_DWORD *)this + 19) )
  {
    return 0LL;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      v12 = VIDMM_DMA_POOL::AddDmaBufferToPool((VIDMM_DMA_POOL *)this, a2, a3, a4);
      if ( v12 < 0 )
        break;
      if ( ++v9 >= 2 )
      {
        v13 = this[13];
        this[5] = (struct _VIDMM_DMA_BUFFER *)a2;
        *((_DWORD *)this + 16) = a3;
        *((_DWORD *)this + 19) = a4;
        do
        {
          while ( 1 )
          {
            v14 = v13;
            v13 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v13 + 1);
            if ( *((struct _VIDMM_DMA_BUFFER **)v14 + 5) == this[5]
              && *((_DWORD *)v14 + 12) == *((_DWORD *)this + 16)
              && *((_DWORD *)v14 + 13) == *((_DWORD *)this + 19) )
            {
              break;
            }
            if ( *((_BYTE *)v14 + 24) )
              *((_BYTE *)v14 + 25) = 1;
            else
              VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v14, v10, v11);
          }
        }
        while ( *((_BYTE *)v14 + 25) );
        return (unsigned int)v12;
      }
    }
    if ( v9 )
    {
      v15 = v9;
      do
      {
        VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, this[12], v10, v11);
        --v15;
      }
      while ( v15 );
    }
    return (unsigned int)v12;
  }
}
