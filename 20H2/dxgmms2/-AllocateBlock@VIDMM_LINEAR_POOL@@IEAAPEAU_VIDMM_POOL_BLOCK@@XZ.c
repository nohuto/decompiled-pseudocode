/*
 * XREFs of ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C006D408
 * Callers:
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C006EC58 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C008FC1C (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00CFCA4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00D026C (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0012A2C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0025E5C (ExAllocateFromPagedLookasideList.c)
 */

struct _VIDMM_POOL_BLOCK *__fastcall VIDMM_LINEAR_POOL::AllocateBlock(VIDMM_LINEAR_POOL *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  VIDMM_LINEAR_POOL *v7; // rsi
  char *v8; // rax
  char *v9; // r14
  unsigned int v10; // r8d
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  VIDMM_LINEAR_POOL **v14; // rcx

  v1 = 0LL;
  if ( !*(_BYTE *)this )
    return (struct _VIDMM_POOL_BLOCK *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  v3 = (_QWORD *)((char *)this + 88);
  if ( (_QWORD *)*v3 == v3 )
  {
    v7 = (VIDMM_LINEAR_POOL *)operator new[](0x18uLL, 0x39316956u, PagedPool);
    if ( v7 )
    {
      v8 = (char *)operator new[](0x148uLL, 0x38316956u, PagedPool);
      if ( v8 )
      {
        *(_QWORD *)v8 = 5LL;
        v9 = v8 + 8;
        `vector constructor iterator'(
          v8 + 8,
          64LL,
          5LL,
          (void (__fastcall *)(char *))_VIDMM_POOL_BLOCK::_VIDMM_POOL_BLOCK);
      }
      else
      {
        v9 = 0LL;
      }
      *((_QWORD *)v7 + 2) = v9;
      if ( v9 )
      {
        v10 = 0;
        do
        {
          v11 = (unsigned __int64)v10 << 6;
          *(_BYTE *)(v11 + *((_QWORD *)v7 + 2) + 56) = 1;
          v12 = (_QWORD *)v3[1];
          v13 = (_QWORD *)(v11 + *((_QWORD *)v7 + 2) + 24LL);
          if ( (_QWORD *)*v12 != v3 )
            goto LABEL_18;
          *v13 = v3;
          ++v10;
          v13[1] = v12;
          *v12 = v13;
          v3[1] = v13;
        }
        while ( v10 < 5 );
        v14 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 14);
        if ( *v14 != (VIDMM_LINEAR_POOL *)((char *)this + 104) )
          goto LABEL_18;
        *(_QWORD *)v7 = (char *)this + 104;
        *((_QWORD *)v7 + 1) = v14;
        *v14 = v7;
        *((_QWORD *)this + 14) = v7;
      }
      else
      {
        operator delete(v7);
      }
    }
  }
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] == v3 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) == v4 )
      {
        *v3 = v5;
        v1 = v4 - 3;
        *(_QWORD *)(v5 + 8) = v3;
        *((_BYTE *)v4 + 32) = 2;
        return (struct _VIDMM_POOL_BLOCK *)v1;
      }
    }
LABEL_18:
    __fastfail(3u);
  }
  return (struct _VIDMM_POOL_BLOCK *)v1;
}
