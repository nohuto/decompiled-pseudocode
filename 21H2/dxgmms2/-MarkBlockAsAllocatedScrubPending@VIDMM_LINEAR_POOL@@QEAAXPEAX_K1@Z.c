/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00EF788
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C009CA74 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  char *v5; // r13
  char *v7; // r15
  char *v8; // r10
  char *v10; // rsi
  char *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char *v32; // r8
  char v33; // r9
  char *v34; // rcx
  _QWORD *v35; // rax
  char *v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rdx

  v4 = (VIDMM_LINEAR_POOL *)a2[6];
  v5 = (char *)this + 72;
  v7 = (char *)(a2 + 5);
  v8 = (char *)a2[5];
  v10 = (char *)v4 - 40;
  if ( v4 == (VIDMM_LINEAR_POOL *)((char *)this + 72) )
    v10 = 0LL;
  v13 = v8 - 40;
  if ( v8 == v5 )
    v13 = 0LL;
  if ( *a2 > a3 )
  {
    if ( !v10 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( *(_QWORD *)v10 > a3 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( v10[56] != 2 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( a3 == *(_QWORD *)v10 )
    {
      v14 = v10 + 40;
      v15 = *((_QWORD *)v10 + 5);
      if ( *(char **)(v15 + 8) != v10 + 40 )
        goto LABEL_59;
      v16 = (_QWORD *)*((_QWORD *)v10 + 6);
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_59;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      v17 = v10 + 24;
      *((_QWORD *)v10 + 6) = 0LL;
      v18 = *((_QWORD *)v10 + 3);
      if ( *(char **)(v18 + 8) != v10 + 24 )
        goto LABEL_59;
      v19 = (_QWORD *)*((_QWORD *)v10 + 4);
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_59;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v10);
    }
    else
    {
      *((_QWORD *)v10 + 1) = a3 - *(_QWORD *)v10;
    }
  }
  v20 = *a2 + a2[1];
  if ( v20 >= a4 )
  {
    if ( v20 <= a4 )
      goto LABEL_55;
    if ( v13 && v13[56] == 2 )
    {
      v21 = *(_QWORD *)v13 + *((_QWORD *)v13 + 1) - a4;
LABEL_42:
      *(_QWORD *)v13 = a4;
      *((_QWORD *)v13 + 1) = v21;
      goto LABEL_55;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
    v29 = Block;
    if ( !Block )
      goto LABEL_55;
    *((_BYTE *)Block + 56) = 2;
    *((_QWORD *)Block + 2) = 0LL;
    *(_QWORD *)Block = a4;
    *((_QWORD *)Block + 1) = *a2 + a2[1] - a4;
    v30 = (_QWORD *)((char *)Block + 40);
    v31 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      *v30 = v31;
      v32 = 0LL;
      v30[1] = v7;
      v33 = 0;
      *(_QWORD *)(v31 + 8) = v30;
      *(_QWORD *)v7 = v30;
      v34 = (char *)a2[6];
      while ( v34 != v5 && !v33 )
      {
        v32 = v34 - 40;
        if ( ((v34[16] - 2) & 0xFD) != 0 )
          v34 = (char *)*((_QWORD *)v32 + 6);
        else
          v33 = 1;
      }
      v35 = (_QWORD *)((char *)v29 + 24);
      v36 = v32 + 24;
      if ( !v33 )
        v36 = (char *)this + 40;
      v37 = *(_QWORD *)v36;
      if ( *(char **)(*(_QWORD *)v36 + 8LL) == v36 )
      {
        *v35 = v37;
        v35[1] = v36;
        *(_QWORD *)(v37 + 8) = v35;
        *(_QWORD *)v36 = v35;
        goto LABEL_55;
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  if ( !v13 && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  if ( *(_QWORD *)v13 + *((_QWORD *)v13 + 1) < a4 && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  if ( v13[56] != 2 && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  v21 = *(_QWORD *)v13 + *((_QWORD *)v13 + 1) - a4;
  if ( v21 )
    goto LABEL_42;
  v22 = v13 + 40;
  v23 = *((_QWORD *)v13 + 5);
  if ( *(char **)(v23 + 8) != v13 + 40 )
    goto LABEL_59;
  v24 = (_QWORD *)*((_QWORD *)v13 + 6);
  if ( (_QWORD *)*v24 != v22 )
    goto LABEL_59;
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  *v22 = 0LL;
  v25 = v13 + 24;
  *((_QWORD *)v13 + 6) = 0LL;
  v26 = *((_QWORD *)v13 + 3);
  if ( *(char **)(v26 + 8) != v13 + 24 )
    goto LABEL_59;
  v27 = (_QWORD *)*((_QWORD *)v13 + 4);
  if ( (_QWORD *)*v27 != v25 )
    goto LABEL_59;
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  *v25 = 0LL;
  *((_QWORD *)v13 + 4) = 0LL;
  VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v13);
LABEL_55:
  a2[2] |= 1uLL;
  v38 = a2 + 3;
  *a2 = a3;
  a2[1] = a4 - a3;
  *((_BYTE *)a2 + 56) = 5;
  v39 = a2[3];
  if ( *(unsigned __int64 **)(v39 + 8) != a2 + 3 )
    goto LABEL_59;
  v40 = (unsigned __int64 *)a2[4];
  if ( (_QWORD *)*v40 != v38 )
    goto LABEL_59;
  *v40 = v39;
  *(_QWORD *)(v39 + 8) = v40;
  v41 = (_QWORD *)((char *)this + 56);
  v42 = *((_QWORD *)this + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v42 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56) )
    goto LABEL_59;
  *v38 = v42;
  a2[4] = (unsigned __int64)v41;
  *(_QWORD *)(v42 + 8) = v38;
  *v41 = v38;
}
