/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C00D9220
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x1C002D410 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00E0084 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
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
  struct _KTHREAD *v13; // rax
  unsigned int VideoMemoryInfo; // ebx
  _BYTE v15[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+70h] [rbp-18h]

  if ( a3 < *((_DWORD *)this + 1754) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, this + 5130, 0);
    DXGPUSHLOCK::AcquireShared(v16);
    v13 = this[3];
    v17 = 1;
    VideoMemoryInfo = VIDMM_PROCESS::QueryVideoMemoryInfo(
                        a2,
                        (struct VIDMM_GLOBAL *)this,
                        *((_DWORD *)v13 + 60),
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        0LL,
                        0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return VideoMemoryInfo;
  }
  else
  {
    WdLogSingleEntry1(3LL, a3);
    return 3221225485LL;
  }
}
