/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C009C670
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C009C96C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // r14
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r14
  _QWORD *v21; // rbp
  _QWORD *v22; // rdi
  _QWORD *v23; // r12
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  bool v39; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-54h]
  unsigned __int64 v41; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]
  _QWORD *v44; // [rsp+70h] [rbp-38h]

  v12 = a1;
  v13 = 0LL;
  v14 = *(_QWORD **)(v12 + 40);
  v15 = (_QWORD *)(v12 + 40);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( v14 == (_QWORD *)(v12 + 40) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(0LL, a2, a3, v12);
    return 3223191808LL;
  }
  v43 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v40 = (a3 + 4095) & 0xFFFFF000;
  if ( !a4 )
  {
    v14 = *(_QWORD **)(v12 + 48);
    if ( v14 == v15 )
      return 3223191808LL;
  }
  while ( 1 )
  {
    v16 = *(v14 - 3);
    v17 = v14 - 3;
    v18 = (__int64)(v14 - 3);
    v19 = v16 + *(v14 - 2);
    v41 = v16;
    v42 = v19;
    if ( a7 )
      break;
    if ( a4 )
      v14 = (_QWORD *)*v14;
    else
      v14 = (_QWORD *)v14[1];
    if ( *((_BYTE *)v17 + 56) == 2 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, a2, a3, v12) + 24) = v17;
        goto LABEL_35;
      }
      goto LABEL_12;
    }
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_9;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, a2, a3, v12) + 24) = v17;
LABEL_14:
    v12 = a1;
LABEL_9:
    if ( v14 == v15 )
      return 3223191808LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v28 = WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
    v12 = a1;
    *(_QWORD *)(v28 + 24) = v17;
  }
  if ( a4 )
  {
    v14 = (_QWORD *)*v14;
    if ( v14 == v15 )
      goto LABEL_35;
    while ( 1 )
    {
      v13 = v14 - 3;
      v44 = v14 - 3;
      if ( *(v14 - 3) != v19 )
        goto LABEL_35;
      if ( a7 == 2 || *((_BYTE *)v13 + 56) == 2 )
        goto LABEL_58;
      v29 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 32))(v13[2]);
      v12 = a1;
      if ( v29 )
        break;
LABEL_59:
      v14 = (_QWORD *)*v14;
      if ( g_IsInternalReleaseOrDbg )
      {
        v30 = WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
        v13 = v44;
        v12 = a1;
        *(_QWORD *)(v30 + 24) = v44;
      }
      if ( v14 == v15 )
        goto LABEL_35;
    }
    v13 = v44;
LABEL_58:
    v19 += v13[1];
    v18 = (__int64)v13;
    v42 = v19;
    goto LABEL_59;
  }
  v14 = (_QWORD *)v14[1];
  if ( v14 == v15 )
    goto LABEL_34;
  do
  {
    v13 = v14 - 3;
    v26 = *(v14 - 2) + *(v14 - 3);
    v44 = v14 - 3;
    if ( v26 != v16 )
      break;
    if ( a7 == 2 || *((_BYTE *)v13 + 56) == 2 )
      goto LABEL_45;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v13[2]) )
    {
      v13 = v44;
LABEL_45:
      v16 -= v13[1];
      v18 = (__int64)v13;
    }
    v14 = (_QWORD *)v14[1];
    if ( g_IsInternalReleaseOrDbg )
    {
      v31 = WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
      v13 = v44;
      *(_QWORD *)(v31 + 24) = v44;
    }
    v12 = a1;
  }
  while ( v14 != v15 );
  v41 = v16;
LABEL_34:
  v27 = (__int64)v17;
  v17 = (_QWORD *)v18;
  v18 = v27;
LABEL_35:
  if ( g_IsInternalReleaseOrDbg )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
    v32[3] = v19 - v16;
    v32[4] = v17;
    v32[5] = v18;
    v36 = WdLogNewEntry5_WdTrace(v19 - v16, v33, v34, v35);
    *(_QWORD *)(v36 + 24) = v16;
    *(_QWORD *)(v36 + 32) = v19;
  }
LABEL_12:
  if ( v19 - v16 >= v43 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
    v39 = 0;
    VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions((VIDMM_LINEAR_POOL *)v13, &v39, &v41, &v42, v43, v40, a4, a5, a6);
    if ( !v39 )
    {
      v16 = v41;
      v19 = v42;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  if ( v19 - v16 < v43 )
    goto LABEL_14;
  v20 = v16 + v43;
  if ( g_IsInternalReleaseOrDbg )
  {
    v37 = WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
    *(_QWORD *)(v37 + 24) = v16;
    *(_QWORD *)(v37 + 32) = v20;
  }
  v21 = *(_QWORD **)(v18 + 24);
  v22 = v17 + 3;
  if ( v17 + 3 == v21 )
  {
LABEL_25:
    if ( g_IsInternalReleaseOrDbg )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, a2, a3, v12);
      v38[3] = v17;
      v38[4] = v18;
      v38[5] = v16;
      v38[6] = v20;
    }
    goto LABEL_27;
  }
  while ( 2 )
  {
    a2 = *(v22 - 3);
    v23 = v22 - 3;
    v24 = *(v22 - 2);
    v22 = (_QWORD *)*v22;
    v13 = (_QWORD *)(a2 + v24);
    if ( (unsigned __int64)v13 <= v16 )
    {
      v17 = v22 - 3;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, a2, a3, v12) + 24) = v23;
LABEL_24:
      if ( v22 == v21 )
        goto LABEL_25;
      continue;
    }
    break;
  }
  if ( a2 < v20 )
    goto LABEL_24;
  v18 = v23[4] - 24LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, a2, a3, v12) + 24) = v23;
    goto LABEL_25;
  }
LABEL_27:
  *a8 = v17;
  *a9 = v18;
  *a10 = v16;
  *a11 = v20;
  return 0LL;
}
