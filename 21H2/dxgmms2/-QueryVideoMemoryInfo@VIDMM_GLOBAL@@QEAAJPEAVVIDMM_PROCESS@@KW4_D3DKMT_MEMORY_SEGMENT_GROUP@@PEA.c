/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00B2B5C
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C0022F60 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00BA638 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 v9; // rbx
  __int64 v12; // rax
  struct _KTHREAD *v14; // rax
  unsigned int VideoMemoryInfo; // ebx
  _BYTE v16[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+70h] [rbp-18h]

  v9 = a3;
  if ( a3 < *((_DWORD *)this + 1750) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 5130, 0);
    DXGPUSHLOCK::AcquireShared(v17);
    v14 = this[3];
    v18 = 1;
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        (struct VIDMM_GLOBAL *)this,
                        *((_DWORD *)v14 + 58),
                        v9,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        0LL,
                        0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    return VideoMemoryInfo;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
}
