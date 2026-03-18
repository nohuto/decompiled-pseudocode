/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C006EE80
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C006EA40 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C006F0E0 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        VIDMM_LINEAR_POOL *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  VIDMM_LINEAR_POOL *v13; // r10
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r15
  _QWORD *v20; // r12
  _QWORD *v21; // rbx
  unsigned __int64 *v22; // rsi
  _QWORD *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  bool v32; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-8h]
  VIDMM_LINEAR_POOL *v37; // [rsp+B0h] [rbp+40h]
  char v38; // [rsp+C8h] [rbp+58h]

  v38 = a4;
  v37 = a1;
  v11 = (_QWORD *)((char *)a1 + 40);
  v12 = (_QWORD *)*((_QWORD *)a1 + 5);
  v13 = a1;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( v12 != (_QWORD *)((char *)a1 + 40) )
  {
    v14 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v36 = v14;
    v33 = (a3 + 4095) & 0xFFFFF000;
    if ( !a4 )
      v12 = (_QWORD *)*((_QWORD *)a1 + 6);
    while ( 1 )
    {
      if ( v12 == v11 )
        return 3223191808LL;
      v15 = v12 - 3;
      v16 = *(v12 - 3);
      v17 = (__int64)(v12 - 3);
      v18 = v16 + *(v12 - 2);
      v34 = v16;
      v35 = v18;
      if ( a7 )
        break;
      if ( a4 )
        v12 = (_QWORD *)*v12;
      else
        v12 = (_QWORD *)v12[1];
      if ( *((_BYTE *)v15 + 56) == 2 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_12;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v15;
LABEL_37:
        if ( g_IsInternalReleaseOrDbg )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
          v28[3] = v18 - v16;
          v28[4] = v15;
          v28[5] = v17;
          v29 = WdLogNewEntry5_WdTrace(v18 - v16);
          *(_QWORD *)(v29 + 24) = v16;
          *(_QWORD *)(v29 + 32) = v18;
        }
LABEL_12:
        if ( v18 - v16 >= v14 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(a1);
          v32 = 0;
          VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(a1, &v32, &v34, &v35, v14, v33, v38, a5, a6);
          if ( v32 )
            goto LABEL_14;
          v16 = v34;
          v18 = v35;
        }
        if ( v18 - v16 >= v14 )
        {
          v19 = v16 + v14;
          if ( g_IsInternalReleaseOrDbg )
          {
            v30 = WdLogNewEntry5_WdTrace(a1);
            *(_QWORD *)(v30 + 24) = v16;
            *(_QWORD *)(v30 + 32) = v19;
          }
          v20 = *(_QWORD **)(v17 + 24);
          v21 = v15 + 3;
          while ( v21 != v20 )
          {
            v22 = v21 - 3;
            v21 = (_QWORD *)*v21;
            a1 = (VIDMM_LINEAR_POOL *)(*v22 + v22[1]);
            if ( (unsigned __int64)a1 <= v16 )
            {
              v15 = v21 - 3;
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v22;
            }
            else if ( *v22 >= v19 )
            {
              v17 = v22[4] - 24;
              if ( !g_IsInternalReleaseOrDbg )
                goto LABEL_28;
              *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v22;
              break;
            }
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
            v31[3] = v15;
            v31[4] = v17;
            v31[5] = v16;
            v31[6] = v19;
          }
LABEL_28:
          *a8 = v15;
          *a9 = v17;
          *a10 = v16;
          *a11 = v19;
          return 0LL;
        }
LABEL_14:
        a4 = v38;
        v13 = v37;
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v15;
        goto LABEL_14;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v26 = WdLogNewEntry5_WdTrace(a1);
      a4 = v38;
      v13 = v37;
      *(_QWORD *)(v26 + 24) = v15;
    }
    if ( a4 )
    {
      v12 = (_QWORD *)*v12;
      while ( v12 != v11 )
      {
        v27 = v12 - 3;
        if ( *(v12 - 3) != v18 )
          break;
        if ( a7 == 2 || *((_BYTE *)v27 + 56) == 2 || (*((unsigned int (__fastcall **)(_QWORD))v13 + 4))(v27[2]) )
        {
          v18 += v27[1];
          v17 = (__int64)(v12 - 3);
          v35 = v18;
        }
        v12 = (_QWORD *)*v12;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v27;
        v13 = v37;
      }
    }
    else
    {
      v12 = (_QWORD *)v12[1];
      if ( v12 != v11 )
      {
        do
        {
          v24 = v12 - 3;
          if ( *(v12 - 2) + *(v12 - 3) != v16 )
            break;
          if ( a7 == 2 || *((_BYTE *)v24 + 56) == 2 || (*((unsigned int (__fastcall **)(_QWORD))v13 + 4))(v24[2]) )
          {
            v16 -= v24[1];
            v17 = (__int64)(v12 - 3);
          }
          v12 = (_QWORD *)v12[1];
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v24;
          v13 = v37;
        }
        while ( v12 != v11 );
        v34 = v16;
      }
      v25 = (__int64)v15;
      v15 = (_QWORD *)v17;
      v17 = v25;
    }
    v14 = v36;
    goto LABEL_37;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return 3223191808LL;
}
