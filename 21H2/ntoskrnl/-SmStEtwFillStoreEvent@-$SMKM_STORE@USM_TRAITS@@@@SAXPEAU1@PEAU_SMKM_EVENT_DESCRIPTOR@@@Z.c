/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14059F4AC
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x14092B1CC (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140238150 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

_QWORD *__fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v5; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _DWORD *v15; // rdx
  unsigned int v16; // r8d
  _QWORD *v17; // rax
  _DWORD *v18; // r8
  _QWORD *v19; // rcx
  _DWORD *v20; // rdx
  _QWORD *v21; // rcx
  _DWORD *v22; // r8
  unsigned int v23; // r9d
  _QWORD *v24; // rax
  _DWORD *v25; // r8
  _QWORD *v26; // rcx
  _WORD *v27; // r8
  _QWORD *v28; // rcx
  _WORD *v29; // rdx
  unsigned int v30; // r8d
  _QWORD *v31; // rax
  _DWORD *v32; // r8
  unsigned int v33; // r9d
  _QWORD *v34; // rax
  __int64 v35; // r11
  __int64 v36; // r10
  _DWORD *v37; // rdx
  int v38; // esi
  int v39; // r14d
  int v40; // r9d
  _QWORD *v41; // rcx
  _DWORD *v42; // rdx
  _QWORD *v43; // rcx
  _DWORD *v44; // r8
  _QWORD *v45; // rcx
  _DWORD *v46; // rdx
  unsigned int v47; // r8d
  _QWORD *v48; // rax
  _DWORD *v49; // rdx
  _QWORD *v50; // rcx
  _DWORD *v51; // rdx
  _QWORD *v52; // rcx
  _DWORD *v53; // rdx
  unsigned int v54; // r8d
  _DWORD *v55; // rbx
  _QWORD *result; // rax
  int v57; // [rsp+70h] [rbp+48h] BYREF
  int v58; // [rsp+78h] [rbp+50h] BYREF
  int v59; // [rsp+80h] [rbp+58h] BYREF
  int v60; // [rsp+88h] [rbp+60h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v57 = 0;
  v59 = 0;
  v58 = 0;
  *v2 = a1;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v60 = 0;
  *v5 = v2;
  v5[1] = 8LL;
  v6 = *(_DWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 16);
  v7 = v6 + 8;
  *(_DWORD *)(a2 + 24) = v7;
  if ( *(_BYTE *)(a1 + 6020) == 1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 24LL);
  else
    v8 = 0LL;
  v9 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v7);
  *v9 = v8;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v10[1] = 8LL;
  *v10 = v9;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v11 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v11 = a1 + 80;
  v12 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v12[1] = 8LL;
  *v12 = v11;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v13 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v13 = a1 + 2016;
  v14 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v14[1] = 8LL;
  *v14 = v13;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v15 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v16 = *(_DWORD *)(a2 + 16);
  if ( a1 != -6208 )
  {
    *v15 = *(_DWORD *)(a1 + 6208);
    v16 = *(_DWORD *)(a2 + 16);
  }
  v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v16);
  *v17 = v15;
  v17[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v18 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v18 = *(_DWORD *)(a1 + 2872) + *(_DWORD *)(a1 + 936);
  v19 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v19 = v18;
  v19[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v20 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v20 = 4096;
  v21 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v21 = v20;
  v21[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v22 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v23 = *(_DWORD *)(a2 + 16);
  if ( a1 != -16 )
  {
    *v22 = *(_DWORD *)(a1 + 16);
    v23 = *(_DWORD *)(a2 + 16);
  }
  v24 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v23);
  *v24 = v22;
  v24[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v25 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v25 = 8 * *(_DWORD *)(a1 + 4088);
  v26 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v26 = v25;
  v26[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v27 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v27 = *(unsigned __int8 *)(a1 + 6020);
  v28 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v28 = v27;
  v28[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  ++*(_DWORD *)(a2 + 16);
  v29 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v30 = *(_DWORD *)(a2 + 16);
  if ( a1 != -6016 )
  {
    *v29 = *(_WORD *)(a1 + 6016);
    v30 = *(_DWORD *)(a2 + 16);
  }
  v31 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v30);
  *v31 = v29;
  v31[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  ++*(_DWORD *)(a2 + 16);
  v32 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v33 = *(_DWORD *)(a2 + 16);
  if ( a1 != -88 )
  {
    *v32 = *(_DWORD *)(a1 + 88);
    v33 = *(_DWORD *)(a2 + 16);
  }
  v34 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v33);
  *v34 = v32;
  v34[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v57, &v59);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2016, &v58, &v60);
  v37 = (_DWORD *)(v36 + *(_QWORD *)(v35 + 8));
  v38 = v58;
  v39 = v60;
  v40 = v60 + v59;
  *v37 = v58 + v57;
  v41 = (_QWORD *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 16));
  *v41 = v37;
  v41[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v42 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  *v42 = v40;
  v43 = (_QWORD *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 16));
  *v43 = v42;
  v43[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v44 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  *v44 = *(_DWORD *)(a1 + 856);
  v45 = (_QWORD *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 16));
  *v45 = v44;
  v45[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v46 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  v47 = *(_DWORD *)(v35 + 16);
  if ( a1 != -2872 )
  {
    *v46 = *(_DWORD *)(a1 + 2872);
    v47 = *(_DWORD *)(v35 + 16);
  }
  v48 = (_QWORD *)(*(_QWORD *)v35 + 16LL * v47);
  *v48 = v46;
  v48[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v49 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  *v49 = v38;
  v50 = (_QWORD *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 16));
  *v50 = v49;
  v50[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v51 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  *v51 = v39;
  v52 = (_QWORD *)(*(_QWORD *)v35 + 16LL * *(unsigned int *)(v35 + 16));
  *v52 = v51;
  v52[1] = 4LL;
  *(_DWORD *)(v35 + 24) += 4;
  ++*(_DWORD *)(v35 + 16);
  v53 = (_DWORD *)(*(_QWORD *)(v35 + 8) + *(unsigned int *)(v35 + 24));
  v54 = *(_DWORD *)(v35 + 16);
  v55 = (_DWORD *)(a1 + 1180);
  if ( v55 )
  {
    *v53 = *v55;
    v54 = *(_DWORD *)(v35 + 16);
  }
  result = (_QWORD *)(*(_QWORD *)v35 + 16LL * v54);
  *result = v53;
  result[1] = 4LL;
  ++*(_DWORD *)(v35 + 16);
  *(_DWORD *)(v35 + 24) += 4;
  return result;
}
