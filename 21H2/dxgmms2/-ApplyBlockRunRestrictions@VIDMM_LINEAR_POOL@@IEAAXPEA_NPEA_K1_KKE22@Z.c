/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C009C96C
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C009C670 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00EF5E0 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  char v9; // bl
  unsigned __int64 *v11; // rdi
  bool *v12; // r14
  VIDMM_LINEAR_POOL *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax

  v9 = 0;
  v11 = a3;
  v12 = (bool *)a2;
  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
      goto LABEL_23;
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this, a2, a3, a4);
        v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
        *(_QWORD *)(v18 + 24) = *v11;
        this = *a4;
        *(_QWORD *)(v18 + 32) = *a4;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *v11 )
      goto LABEL_23;
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this, a2, a3, a4);
        v23 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        *(_QWORD *)(v23 + 24) = *v11;
        this = *a4;
        *(_QWORD *)(v23 + 32) = *a4;
      }
    }
  }
  if ( a7 )
  {
    if ( !a6 || (this = (VIDMM_LINEAR_POOL *)a6, (a2 = *v11 % a6) == 0) )
    {
LABEL_8:
      if ( g_IsInternalReleaseOrDbg )
      {
        v24 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
        *(_QWORD *)(v24 + 24) = *v11;
        *(_QWORD *)(v24 + 32) = *a4;
      }
      goto LABEL_10;
    }
    this = (VIDMM_LINEAR_POOL *)(a6 - a2);
    a2 = (unsigned __int64)this + *v11;
    if ( a2 < (unsigned __int64)*a4 )
    {
      *v11 = a2;
      goto LABEL_8;
    }
  }
  else
  {
    a2 = 0LL;
    v13 = *a4;
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      a2 = ((unsigned __int64)v13 - a5) % a6;
    }
    a3 = (unsigned __int64 *)((char *)v13 - a2 - a5);
    if ( (unsigned __int64)a3 >= *v11 )
    {
      *v11 = (unsigned __int64)a3;
      goto LABEL_8;
    }
  }
LABEL_23:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9 = 1;
LABEL_10:
  *v12 = v9;
}
