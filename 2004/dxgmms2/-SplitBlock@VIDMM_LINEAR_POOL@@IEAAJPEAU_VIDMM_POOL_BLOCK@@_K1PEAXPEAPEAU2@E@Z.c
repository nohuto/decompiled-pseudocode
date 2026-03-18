/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C0062778
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0062560 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0061AC4 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C008639C (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        struct _VIDMM_POOL_BLOCK **a6)
{
  VIDMM_LINEAR_POOL *v9; // r14
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v30; // rcx
  struct _VIDMM_POOL_BLOCK **v31; // rdx
  struct _VIDMM_POOL_BLOCK *v32; // rcx
  struct _VIDMM_POOL_BLOCK *v33; // rdi
  struct _VIDMM_POOL_BLOCK **v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax

  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v35[3] = a2;
    v35[4] = *(_QWORD *)a2;
    v35[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v35[6] = a3;
    v35[7] = a4;
  }
  v12 = *(_QWORD *)a2;
  v13 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C0051730);
      v37 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v37 + 24) = 1590LL;
      goto LABEL_31;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v10 + 56) = 2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    this = *(VIDMM_LINEAR_POOL **)&g_IsInternalReleaseOrDbg;
    *((_QWORD *)v10 + 1) = v13;
    if ( g_IsInternalReleaseOrDbg )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v36[3] = v10;
      v36[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 1));
      v36[5] = this;
    }
    v12 = *(_QWORD *)a2;
  }
  v14 = v12 + *((_QWORD *)a2 + 1) - a4;
  if ( !v14 )
    goto LABEL_10;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v15 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
  v11 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0x40uLL);
    *((_BYTE *)v11 + 56) = 2;
    *(_QWORD *)v11 = a4;
    *((_QWORD *)v11 + 1) = v14;
    if ( g_IsInternalReleaseOrDbg )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v38[3] = v11;
      v38[4] = *(_QWORD *)v11;
      v38[5] = *(_QWORD *)v11 + *((_QWORD *)v11 + 1);
    }
LABEL_10:
    if ( v10 )
    {
      v31 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 4);
      v32 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 24);
      if ( *v31 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
        goto LABEL_28;
      *(_QWORD *)v32 = (char *)a2 + 24;
      v33 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
      *((_QWORD *)v32 + 1) = v31;
      *v31 = v32;
      *((_QWORD *)a2 + 4) = v32;
      v34 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
      if ( *v34 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        goto LABEL_28;
      *(_QWORD *)v33 = (char *)a2 + 40;
      *((_QWORD *)v33 + 1) = v34;
      *v34 = v33;
      *((_QWORD *)a2 + 6) = v33;
      *((_QWORD *)a2 + 1) -= v13;
      *(_QWORD *)a2 = a3;
    }
    if ( v11 )
    {
      v17 = (_QWORD *)((char *)a2 + 24);
      v18 = *((_QWORD *)a2 + 3);
      v19 = (_QWORD *)((char *)v11 + 24);
      if ( *(struct _VIDMM_POOL_BLOCK **)(v18 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
        goto LABEL_28;
      *((_QWORD *)v11 + 4) = v17;
      v20 = (_QWORD *)((char *)v11 + 40);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = v19;
      v21 = (_QWORD *)((char *)a2 + 40);
      v22 = *((_QWORD *)a2 + 5);
      if ( *(struct _VIDMM_POOL_BLOCK **)(v22 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        goto LABEL_28;
      *v20 = v22;
      v20[1] = v21;
      *(_QWORD *)(v22 + 8) = v20;
      *v21 = v20;
      *((_QWORD *)a2 + 1) -= v14;
    }
    *((_QWORD *)a2 + 2) = a5;
    v23 = (_QWORD *)((char *)a2 + 24);
    *((_BYTE *)a2 + 56) = 3;
    v24 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v24 + 8) == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
    {
      v25 = (_QWORD *)*((_QWORD *)a2 + 4);
      if ( (_QWORD *)*v25 == v23 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        v26 = (_QWORD *)((char *)v9 + 56);
        v27 = *((_QWORD *)v9 + 7);
        if ( *(VIDMM_LINEAR_POOL **)(v27 + 8) == (VIDMM_LINEAR_POOL *)((char *)v9 + 56) )
        {
          *v23 = v27;
          *((_QWORD *)a2 + 4) = v26;
          *(_QWORD *)(v27 + 8) = v23;
          *v26 = v23;
          *a6 = a2;
          return 0LL;
        }
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( v10 )
    VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
  _InterlockedIncrement(&dword_1C0051730);
  v37 = WdLogNewEntry5_WdLowResource(v16);
  *(_QWORD *)(v37 + 24) = 1630LL;
LABEL_31:
  WdLogEvent5_WdLowResource(v37);
  return 3221225495LL;
}
