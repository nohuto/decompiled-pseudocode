/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C006F0E0
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C006EE80 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00CFAFC (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  bool v9; // bl
  unsigned __int64 v13; // rdx
  VIDMM_LINEAR_POOL *v14; // r8
  unsigned __int64 v15; // r8
  char *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  v9 = 0;
  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
      goto LABEL_25;
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v18 = WdLogNewEntry5_WdTrace(v17);
        *(_QWORD *)(v18 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v18 + 32) = *a4;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *a3 )
      goto LABEL_25;
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v20 = WdLogNewEntry5_WdTrace(v19);
        *(_QWORD *)(v20 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v20 + 32) = *a4;
      }
    }
  }
  v13 = 0LL;
  if ( a7 )
  {
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v13 = *a3 % a6;
    }
    else
    {
      this = 0LL;
    }
    if ( !v13 )
      goto LABEL_9;
    this = (VIDMM_LINEAR_POOL *)((char *)this - v13);
    v16 = (char *)this + *a3;
    if ( v16 < (char *)*a4 )
    {
      *a3 = (unsigned __int64)v16;
LABEL_9:
      if ( g_IsInternalReleaseOrDbg )
      {
        v21 = WdLogNewEntry5_WdTrace(this);
        *(_QWORD *)(v21 + 24) = *a3;
        *(_QWORD *)(v21 + 32) = *a4;
      }
      goto LABEL_11;
    }
  }
  else
  {
    v14 = *a4;
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v13 = ((unsigned __int64)v14 - a5) % a6;
    }
    v15 = (unsigned __int64)v14 - v13 - a5;
    if ( v15 >= *a3 )
    {
      *a3 = v15;
      goto LABEL_9;
    }
  }
LABEL_25:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v9 = 1;
LABEL_11:
  *a2 = v9;
}
