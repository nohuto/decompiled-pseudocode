/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0062DE8
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0062D0C (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0086180 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  char *v4; // rax
  __int64 v6; // rdi
  char *v7; // r8
  char *v8; // rdx
  char v9; // bl
  __int64 v10; // r11
  __int64 v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // r8
  bool v13; // zf
  struct _VIDMM_POOL_BLOCK *v14; // rax
  char v15; // dl
  VIDMM_LINEAR_POOL *v16; // rdx
  struct _VIDMM_POOL_BLOCK *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax

  v4 = (char *)*((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 6);
  v7 = (char *)this + 72;
  while ( v4 != v7 && (char *)v6 != v7 )
  {
    v8 = v4 - 40;
    v4 = *(char **)v4;
    v9 = v8[56];
    v10 = v6 - 40;
    v6 = *(_QWORD *)(v6 + 8);
    if ( v9 != 3 && (unsigned __int8)(v9 - 5) > 2u )
    {
      *a4 = (struct _VIDMM_POOL_BLOCK *)v8;
      v11 = *((_QWORD *)v8 + 4);
      v12 = 0LL;
      v13 = v11 == (_QWORD)this + 40;
      v14 = (struct _VIDMM_POOL_BLOCK *)(v11 - 24);
      goto LABEL_7;
    }
    v15 = *(_BYTE *)(v10 + 56);
    if ( v15 != 3 && (unsigned __int8)(v15 - 5) > 2u )
    {
      v16 = *(VIDMM_LINEAR_POOL **)(v10 + 24);
      v17 = 0LL;
      *a3 = (struct _VIDMM_POOL_BLOCK *)v10;
      if ( v16 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        v17 = (VIDMM_LINEAR_POOL *)((char *)v16 - 24);
      goto LABEL_14;
    }
  }
  v18 = (_QWORD *)((char *)this + 40);
  if ( v4 == v7 )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 6);
    v12 = 0LL;
    *a4 = 0LL;
    v13 = v19 == v18;
    v14 = (struct _VIDMM_POOL_BLOCK *)(v19 - 3);
LABEL_7:
    if ( !v13 )
      v12 = v14;
    *a3 = v12;
  }
  else
  {
    v20 = (_QWORD *)*v18;
    v17 = 0LL;
    *a3 = 0LL;
    if ( v20 == v18 )
    {
LABEL_14:
      *a4 = v17;
      return;
    }
    *a4 = (struct _VIDMM_POOL_BLOCK *)(v20 - 3);
  }
}
