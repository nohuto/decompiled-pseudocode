/*
 * XREFs of ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00A9964
 * Callers:
 *     VidMmInitDmaPool @ 0x1C001AC90 (VidMmInitDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7F70 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C009E81C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C00A9A5C (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00A9AD4 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // r9d
  int v7; // esi
  int v8; // ebp
  VIDMM_DMA_POOL **v9; // rdx
  VIDMM_DMA_POOL *v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(v12 + 24) = this;
      *(_QWORD *)(v12 + 32) = 2LL;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v13[3] = this;
    v13[4] = *((_QWORD *)this + 2);
    v13[5] = 2LL;
  }
  v5 = *((unsigned int *)this + 9);
  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1u, &v15) )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((unsigned int *)this + 16),
             *((unsigned int *)this + 19));
      if ( v8 < 0 )
        break;
      if ( (unsigned int)++v7 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
        v9 = (VIDMM_DMA_POOL **)qword_1C006E8D0;
        v10 = (VIDMM_DMA_POOL *)((char *)this + 112);
        if ( *(struct _LIST_ENTRY **)qword_1C006E8D0 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        *((_QWORD *)this + 15) = v9;
        *v9 = v10;
        qword_1C006E8D0 = (__int64)this + 112;
        _InterlockedIncrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
        VIDMM_DMA_POOL::UpdateFairResourceUsage(v10);
        ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
        *((_DWORD *)this + 8) |= 0xAu;
        return (unsigned int)v8;
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(v6, v5);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
}
