/*
 * XREFs of ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00D0108
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00C7270 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 * Callees:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00CF1C4 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkMemoryBlocks(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  union _LARGE_INTEGER v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _BYTE *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // r8
  _QWORD *v22; // r8
  _QWORD *v24; // rax
  void *v25; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v25 = 0LL;
    v9 = *(union _LARGE_INTEGER *)(a4 + 16LL * v4);
    if ( v9.QuadPart < *((_QWORD *)a1 + 1) )
      break;
LABEL_15:
    if ( ++v4 >= a3 )
      return 0LL;
  }
  v10 = VIDMM_LINEAR_POOL::AllocateAt(a1, v9, *(_QWORD *)(a4 + 16LL * v4 + 8), 0LL, &v25);
  v14 = v10;
  if ( v10 >= 0 )
  {
    v15 = v25;
    if ( (_DWORD)v5 == 6 )
    {
      v16 = (char *)v25 + 24;
      v20 = *((_QWORD *)v25 + 3);
      if ( *(void **)(v20 + 8) != (char *)v25 + 24 || (v21 = (_QWORD *)*((_QWORD *)v25 + 4), (_QWORD *)*v21 != v16) )
LABEL_17:
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v19 = (_QWORD *)((char *)a1 + 120);
    }
    else
    {
      if ( (_DWORD)v5 != 7 )
      {
LABEL_14:
        v15[56] = v5;
        goto LABEL_15;
      }
      v16 = (char *)v25 + 24;
      v17 = *((_QWORD *)v25 + 3);
      if ( *(void **)(v17 + 8) != (char *)v25 + 24 )
        goto LABEL_17;
      v18 = (_QWORD *)*((_QWORD *)v25 + 4);
      if ( (_QWORD *)*v18 != v16 )
        goto LABEL_17;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = (_QWORD *)((char *)a1 + 136);
    }
    v22 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v22 != v19 )
      goto LABEL_17;
    *v16 = v19;
    v16[1] = v22;
    *v22 = v16;
    v19[1] = v16;
    goto LABEL_14;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13);
  v24[3] = v5;
  v24[4] = *(_QWORD *)(a4 + 16LL * v4);
  v24[5] = *(_QWORD *)(a4 + 16LL * v4 + 8);
  v24[6] = v14;
  WdLogEvent5_WdAssertion(v24);
  return (unsigned int)v14;
}
