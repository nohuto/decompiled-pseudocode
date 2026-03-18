/*
 * XREFs of ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008AD58
 * Callers:
 *     VidMmInitDmaPool @ 0x1C0015130 (VidMmInitDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0095B44 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0086D08 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C008B4E0 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C008B518 (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // edi
  int v6; // esi
  VIDMM_DMA_POOL **v7; // rdx
  VIDMM_DMA_POOL *v8; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = 2LL;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 2);
    v11[5] = 2LL;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1, &v13) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19));
      if ( v6 < 0 )
        break;
      if ( (unsigned int)++v5 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1u);
        v7 = (VIDMM_DMA_POOL **)qword_1C0051830;
        v8 = (VIDMM_DMA_POOL *)((char *)this + 112);
        if ( *(struct _LIST_ENTRY **)qword_1C0051830 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *(_QWORD *)v8 = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        *((_QWORD *)this + 15) = v7;
        *v7 = v8;
        qword_1C0051830 = (__int64)this + 112;
        _InterlockedIncrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
        VIDMM_DMA_POOL::UpdateFairResourceUsage(v8);
        ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
        *((_DWORD *)this + 8) |= 0xAu;
        return (unsigned int)v6;
      }
    }
    return (unsigned int)v6;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v3, v2, v4);
    *(_QWORD *)(v12 + 24) = *((unsigned int *)this + 9);
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
}
