/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00AEF34
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x1C00228E0 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C0023188 (-AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C006442C (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C00BD670 (-VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(struct _KEVENT *this, struct DXGALLOCATION *a2)
{
  __int64 v2; // rbp
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 3);
  v5 = 0;
  if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)this) || *(_BYTE *)(v7 + 7080) )
  {
    v13 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdEvent(v13);
    return 3221225473LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(v7 + 44632), 0);
    DXGPUSHLOCK::AcquireExclusive(v15);
    v16 = 2;
    v8 = *(_BYTE *)(v2 + 25);
    if ( (v8 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 25) = v8 & 0xFB;
      DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
      DxgkUnreferenceDxgAllocation(a2);
    }
    else
    {
      v5 = VidMmUnpinAllocAsync((struct VIDMM_GLOBAL *)this, a2);
      if ( v5 >= 0 )
      {
        v11 = WdLogNewEntry5_WdEvent(v10, v9);
        *(_QWORD *)(v11 + 24) = v2;
        *(_QWORD *)(v11 + 32) = a2;
        WdLogEvent5_WdEvent(v11);
        *(_BYTE *)(v2 + 25) = *(_BYTE *)(v2 + 25) & 0xF9 | 2;
        DXGINVERSESEMAPHORE::AcquireInverseSemaphore(this + 1849);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    return (unsigned int)v5;
  }
}
