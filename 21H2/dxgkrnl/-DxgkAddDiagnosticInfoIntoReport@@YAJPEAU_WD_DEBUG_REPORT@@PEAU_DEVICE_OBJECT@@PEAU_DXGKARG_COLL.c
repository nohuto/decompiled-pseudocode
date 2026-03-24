/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0264018
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220BE8 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0044E2C (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0264760 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  _QWORD *Pool; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r12
  unsigned int v12; // eax
  int v13; // r13d
  int *v14; // r15
  int v15; // esi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // r14
  __int64 v20; // rax
  struct _WD_DEBUG_REPORT *v21; // rbx
  char *v22; // rdi
  unsigned int *v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // r15
  unsigned int v26; // esi
  __int64 v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebx
  char *v33; // rcx
  unsigned int v34; // r10d
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // r8d
  signed __int64 v38; // rdi
  int *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v48; // rax
  unsigned int v49; // [rsp+20h] [rbp-48h]
  unsigned int v50; // [rsp+24h] [rbp-44h]
  unsigned int v52; // [rsp+88h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
  Pool = TdrAllocatePool(v5, PagedPool);
  v11 = Pool;
  if ( !Pool )
  {
    v48 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v48 + 24) = v5;
    WdLogEvent5_WdLowResource(v48);
    return 3221225495LL;
  }
  v12 = TdrCollectBugcheckSecondaryDumpData(Pool, v5, 1);
  v13 = *((_DWORD *)a3 + 55);
  v52 = v12;
  v14 = 0LL;
  v15 = v13 != 0 ? 32 : 24;
  v16 = TdrAllocatePool((v15 + v13 + 4431) & 0xFFFFF000, PagedPool);
  v19 = v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = (v15 + v13 + 4431) & 0xFFFFF000;
LABEL_8:
    WdLogEvent5_WdError(v20);
    v21 = a1;
    goto LABEL_28;
  }
  v22 = (char *)(v16 + 2);
  v16[1] = 0;
  v23 = v16 + 4;
  v24 = v16 + 4;
  *v16 = (v13 != 0) + 2;
  v16[2] = v15;
  v16[3] = 49;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v23 = 0;
    v24 = v16 + 6;
    v16[5] = 1;
  }
  *(_QWORD *)v24 = 0LL;
  v25 = v16 + 2;
  v26 = *(_DWORD *)v22;
  v24[2] = *((_DWORD *)a3 + 2);
  *((_QWORD *)v24 + 2) = 0LL;
  v24[3] = 0;
  *(_OWORD *)(v24 + 6) = *(_OWORD *)((char *)a3 + 12);
  *(_OWORD *)(v24 + 10) = *(_OWORD *)((char *)a3 + 28);
  *(_OWORD *)(v24 + 14) = *(_OWORD *)((char *)a3 + 44);
  *(_OWORD *)(v24 + 18) = *(_OWORD *)((char *)a3 + 60);
  *(_OWORD *)(v24 + 22) = *(_OWORD *)((char *)a3 + 76);
  *(_OWORD *)(v24 + 26) = *(_OWORD *)((char *)a3 + 92);
  *(_OWORD *)(v24 + 30) = *(_OWORD *)((char *)a3 + 108);
  *(_OWORD *)(v24 + 34) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)(v24 + 38) = *(_OWORD *)((char *)a3 + 140);
  *(_OWORD *)(v24 + 42) = *(_OWORD *)((char *)a3 + 156);
  *(_OWORD *)(v24 + 46) = *(_OWORD *)((char *)a3 + 172);
  *(_OWORD *)(v24 + 50) = *(_OWORD *)((char *)a3 + 188);
  if ( *((_DWORD *)a3 + 2) == 3 )
  {
    v27 = *((_QWORD *)a3 + 26);
    if ( v27 )
    {
      if ( *(_DWORD *)v27 == 16 )
      {
        *(_OWORD *)(v24 + 54) = *(_OWORD *)v27;
        v24[58] = *(_DWORD *)(v27 + 16);
      }
    }
  }
  v28 = v26 + 336;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v23 = v28;
    v25 = v19 + 4;
    memmove((char *)v19 + v28, *((const void **)a3 + 28), *((unsigned int *)a3 + 55));
    v28 += *((_DWORD *)a3 + 55);
  }
  v25[2] = v28;
  v29 = (v28 + v52 + 4095) & 0xFFFFF000;
  v14 = (int *)TdrAllocatePool(v29, PagedPool);
  if ( !v14 )
  {
    v20 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v20 + 24) = v29;
    goto LABEL_8;
  }
  v32 = *v11 + 1 + *v19;
  v50 = v11[2];
  v49 = *(_DWORD *)v22;
  memmove(v14, v11, v50);
  v33 = (char *)(v14 + 2);
  *v14 = v32;
  v34 = 2 * v32;
  v35 = *v11 - 1;
  if ( *v11 != 1 )
  {
    do
    {
      if ( !*((_DWORD *)v33 + 1) )
        break;
      *(_DWORD *)v33 += 8 * v32 - v50;
      v33 += 8;
      --v35;
    }
    while ( v35 );
  }
  v36 = v52 - v50;
  v37 = *v19 - 1;
  if ( *v19 != 1 )
  {
    v38 = v22 - v33;
    do
    {
      if ( !*(_DWORD *)&v33[v38 + 4] )
        break;
      *(_QWORD *)v33 = *(_QWORD *)&v33[v38];
      *(_DWORD *)v33 += v34 * 4 + v52 - v50 - v49;
      v33 += 8;
      --v37;
    }
    while ( v37 );
  }
  v39 = &v14[v34];
  v40 = v36;
  memmove(v39, (char *)v11 + v50, v36);
  memmove((char *)v39 + v40, (char *)v19 + v49, v28 - v49);
  v21 = a1;
  if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v14, v29) )
    goto LABEL_30;
  v43 = WdLogNewEntry5_WdError(v42, v41);
  *(_QWORD *)(v43 + 24) = 3682LL;
  WdLogEvent5_WdError(v43);
LABEL_28:
  v4 = -1073741801;
  if ( !(unsigned __int8)WdDbgReportSecondaryData(v21, v11, v52) )
  {
    v46 = WdLogNewEntry5_WdError(v45, v44);
    *(_QWORD *)(v46 + 24) = 3693LL;
    WdLogEvent5_WdError(v46);
  }
LABEL_30:
  ExFreePoolWithTag(v11, 0x52445476u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x52445476u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x52445476u);
  return v4;
}
