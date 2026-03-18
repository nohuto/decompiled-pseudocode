/*
 * XREFs of ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00C7270
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C008F970 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00175DC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00CAC5C (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 *     ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00D0108 (-MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v9; // rdi
  SIZE_T v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // rax
  __int64 v12; // rcx
  struct _DXGK_MEMORYRANGE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _WORD v30[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-3Ch]
  struct _DXGK_MEMORYRANGE *v32; // [rsp+28h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v33; // [rsp+30h] [rbp-30h] BYREF

  LODWORD(v5) = 0;
  v7 = a3;
  v9 = a2;
  if ( a4 )
  {
    v10 = 16LL * a4;
    if ( !is_mul_ok(a4, 0x10uLL) )
      v10 = -1LL;
    v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, PagedPool);
    v13 = v11;
    if ( !v11 )
    {
      _InterlockedIncrement(&dword_1C0051664);
      v14 = WdLogNewEntry5_WdLowResource(v12);
      LODWORD(v5) = -1073741801;
      *(_QWORD *)(v14 + 24) = v9;
      *(_QWORD *)(v14 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v14);
      return (unsigned int)v5;
    }
    memset(v11, 0, 16LL * a4);
    v30[0] = *(_WORD *)(a1 + 16);
    v30[1] = *(_WORD *)(a1 + 380);
    *(_QWORD *)&v33.Type = 0LL;
    v33.pInputData = v30;
    v15 = *(_QWORD *)(a1 + 8);
    memset(&v33.InputDataSize, 0, 32);
    v31 = a4;
    v32 = v13;
    v33.InputDataSize = 16;
    v33.Type = v7;
    v16 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v15 + 24), &v33);
    v5 = v16;
    if ( v16 >= 0 )
    {
      v21 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v13, a5);
      v5 = v21;
      if ( v21 >= 0 )
      {
        LOBYTE(v22) = v9;
        v25 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 152), v22, a4, v13);
        v5 = v25;
        if ( v25 >= 0 )
        {
LABEL_14:
          operator delete(v13);
          return (unsigned int)v5;
        }
        v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27, v26, v28);
        v20[5] = 525LL;
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22, v24);
        v20[5] = 515LL;
      }
      v20[3] = v9;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17, v19);
      v20[3] = v7;
      v20[5] = 505LL;
    }
    v20[4] = v5;
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
