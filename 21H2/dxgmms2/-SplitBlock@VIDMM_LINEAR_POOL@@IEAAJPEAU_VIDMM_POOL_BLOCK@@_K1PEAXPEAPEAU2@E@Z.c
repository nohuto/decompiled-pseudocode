/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C009C43C
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C009CA74 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK ***a2,
        struct _VIDMM_POOL_BLOCK **a3,
        __int64 a4,
        struct _VIDMM_POOL_BLOCK **a5,
        struct _VIDMM_POOL_BLOCK ****a6)
{
  VIDMM_LINEAR_POOL *v9; // r14
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  struct _VIDMM_POOL_BLOCK **v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _VIDMM_POOL_BLOCK ****v19; // rax
  struct _VIDMM_POOL_BLOCK **v20; // rdx
  struct _VIDMM_POOL_BLOCK ***v21; // rcx
  struct _VIDMM_POOL_BLOCK ***v22; // rsi
  struct _VIDMM_POOL_BLOCK ****v23; // rax
  struct _VIDMM_POOL_BLOCK **v24; // rcx
  struct _VIDMM_POOL_BLOCK *v25; // rax
  struct _VIDMM_POOL_BLOCK **v26; // rdx
  struct _VIDMM_POOL_BLOCK **v27; // rcx
  struct _VIDMM_POOL_BLOCK **v28; // rcx
  __int64 v29; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK **v32; // rdx
  struct _VIDMM_POOL_BLOCK *v33; // rcx
  struct _VIDMM_POOL_BLOCK *v34; // rdi
  struct _VIDMM_POOL_BLOCK **v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax

  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v36[3] = a2;
    v36[4] = *a2;
    v36[5] = (char *)a2[1] + (_QWORD)*a2;
    v36[6] = a3;
    v36[7] = a4;
  }
  v12 = *a2;
  v13 = (char *)a3 - (char *)*a2;
  if ( a3 != *a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C006E7F0);
      WdLogSingleEntry1(6LL, 1590LL);
      goto LABEL_31;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v10 + 56) = 2;
    *(_QWORD *)v10 = *a2;
    this = *(VIDMM_LINEAR_POOL **)&g_IsInternalReleaseOrDbg;
    *((_QWORD *)v10 + 1) = v13;
    if ( g_IsInternalReleaseOrDbg )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, a2, a3, a4);
      v37[3] = v10;
      v37[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 1));
      v37[5] = this;
    }
    v12 = *a2;
  }
  v14 = (__int64)a2[1] + (_QWORD)v12 - a4;
  if ( !v14 )
    goto LABEL_10;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
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
      v39 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v16, v17, v18);
      v39[3] = v11;
      v39[4] = *(_QWORD *)v11;
      v39[5] = *((_QWORD *)v11 + 1) + *(_QWORD *)v11;
    }
LABEL_10:
    if ( v10 )
    {
      v32 = a2[4];
      v33 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 24);
      if ( *v32 != (struct _VIDMM_POOL_BLOCK *)(a2 + 3) )
        goto LABEL_28;
      *(_QWORD *)v33 = a2 + 3;
      v34 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
      *((_QWORD *)v33 + 1) = v32;
      *v32 = v33;
      a2[4] = (struct _VIDMM_POOL_BLOCK **)v33;
      v35 = a2[6];
      if ( *v35 != (struct _VIDMM_POOL_BLOCK *)(a2 + 5) )
        goto LABEL_28;
      *(_QWORD *)v34 = a2 + 5;
      *((_QWORD *)v34 + 1) = v35;
      *v35 = v34;
      a2[6] = (struct _VIDMM_POOL_BLOCK **)v34;
      a2[1] = (struct _VIDMM_POOL_BLOCK **)((char *)a2[1] - v13);
      *a2 = a3;
    }
    if ( v11 )
    {
      v19 = (struct _VIDMM_POOL_BLOCK ****)(a2 + 3);
      v20 = a2[3];
      v21 = (struct _VIDMM_POOL_BLOCK ***)((char *)v11 + 24);
      if ( v20[1] != (struct _VIDMM_POOL_BLOCK *)(a2 + 3) )
        goto LABEL_28;
      *((_QWORD *)v11 + 4) = v19;
      v22 = (struct _VIDMM_POOL_BLOCK ***)((char *)v11 + 40);
      *v21 = v20;
      v20[1] = (struct _VIDMM_POOL_BLOCK *)v21;
      *v19 = v21;
      v23 = (struct _VIDMM_POOL_BLOCK ****)(a2 + 5);
      v24 = a2[5];
      if ( v24[1] != (struct _VIDMM_POOL_BLOCK *)(a2 + 5) )
        goto LABEL_28;
      *v22 = v24;
      v22[1] = (struct _VIDMM_POOL_BLOCK **)v23;
      v24[1] = (struct _VIDMM_POOL_BLOCK *)v22;
      *v23 = v22;
      a2[1] = (struct _VIDMM_POOL_BLOCK **)((char *)a2[1] - v14);
    }
    a2[2] = a5;
    v25 = (struct _VIDMM_POOL_BLOCK *)(a2 + 3);
    *((_BYTE *)a2 + 56) = 3;
    v26 = a2[3];
    if ( v26[1] == (struct _VIDMM_POOL_BLOCK *)(a2 + 3) )
    {
      v27 = a2[4];
      if ( *v27 == v25 )
      {
        *v27 = (struct _VIDMM_POOL_BLOCK *)v26;
        v26[1] = (struct _VIDMM_POOL_BLOCK *)v27;
        v28 = (struct _VIDMM_POOL_BLOCK **)((char *)v9 + 56);
        v29 = *((_QWORD *)v9 + 7);
        if ( *(VIDMM_LINEAR_POOL **)(v29 + 8) == (VIDMM_LINEAR_POOL *)((char *)v9 + 56) )
        {
          *(_QWORD *)v25 = v29;
          a2[4] = v28;
          *(_QWORD *)(v29 + 8) = v25;
          *v28 = v25;
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
  _InterlockedIncrement(&dword_1C006E7F0);
  WdLogSingleEntry1(6LL, 1630LL);
LABEL_31:
  DxgkLogInternalTriageEvent(v38, 262145LL);
  return 3221225495LL;
}
