/*
 * XREFs of ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00CAF74
 * Callers:
 *     ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C00B5620 (-UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00879B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00CB27C (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UnblockMemoryRanges(
        VIDMM_SEGMENT *a1,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_MEMORYRANGE *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _DXGK_MEMORYRANGE v14; // xmm0
  VIDMM_GLOBAL *v15; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v17[12]; // [rsp+30h] [rbp-68h] BYREF

  v16 = 0LL;
  v7 = VIDMM_SEGMENT::ValidateMemoryRanges(a1, a3, a4, &v16);
  v11 = v7;
  if ( v7 >= 0 )
  {
    memset(v17, 0, 0x58uLL);
    v14 = *a4;
    v15 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
    LODWORD(v17[0]) = 216;
    *(struct _DXGK_MEMORYRANGE *)&v17[7] = v14;
    v17[5] = a1;
    LOBYTE(v17[6]) = 7;
    HIDWORD(v17[6]) = a3;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v15, (struct _VIDMM_SYSTEM_COMMAND *)v17, 0);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = 579LL;
    WdLogEvent5_WdAssertion(v12);
    return (unsigned int)v11;
  }
}
