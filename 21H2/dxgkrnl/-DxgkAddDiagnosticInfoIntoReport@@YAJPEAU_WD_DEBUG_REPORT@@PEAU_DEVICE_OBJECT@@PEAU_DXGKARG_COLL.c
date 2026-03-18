/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0304978
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CE860 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0052318 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // edi
  __int64 v6; // r9
  _QWORD *Pool2; // rax
  unsigned int v8; // eax
  int v9; // ebp
  int *v10; // r15
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  _DWORD *v16; // r14
  void *v17; // rbp
  const wchar_t *v18; // r9
  struct _WD_DEBUG_REPORT *v19; // rbx
  bool v20; // cf
  char *v21; // rbp
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  unsigned int v25; // esi
  __int64 v26; // rax
  unsigned int v27; // esi
  int v28; // ebx
  unsigned int v29; // r10d
  char *v30; // rcx
  int v31; // eax
  unsigned int v32; // r9d
  int v33; // r8d
  signed __int64 v34; // rbp
  int *v35; // rdi
  __int64 v36; // rbx
  unsigned int v38; // [rsp+50h] [rbp-48h]
  unsigned int v39; // [rsp+54h] [rbp-44h]
  _DWORD *Src; // [rsp+60h] [rbp-38h]
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, 1380209782LL, v6);
  Src = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(6LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v8 = TdrCollectBugcheckSecondaryDumpData(Pool2, v5, 1);
  v9 = *((_DWORD *)a3 + 55);
  v42 = v8;
  v10 = 0LL;
  v11 = v9 != 0 ? 32 : 24;
  v12 = (v11 + v9 + 4431) & 0xFFFFF000;
  v14 = ExAllocatePool2(256LL, v12, 1380209782LL, v13);
  v16 = (_DWORD *)v14;
  if ( !v14 )
    goto LABEL_7;
  v20 = v9 != 0;
  v21 = (char *)(v14 + 8);
  v22 = (unsigned int *)(v14 + 16);
  *(_QWORD *)v14 = (unsigned int)v20 + 2;
  v23 = v14 + 16;
  *(_DWORD *)(v14 + 8) = v11;
  *(_DWORD *)(v14 + 12) = 49;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v22 = 0;
    v23 = v14 + 24;
    *(_DWORD *)(v14 + 20) = 1;
  }
  *(_QWORD *)v23 = 0LL;
  v24 = (_DWORD *)(v14 + 8);
  v25 = *(_DWORD *)v21;
  *(_DWORD *)(v23 + 8) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(v23 + 16) = 0LL;
  *(_DWORD *)(v23 + 12) = 0;
  *(_OWORD *)(v23 + 24) = *(_OWORD *)((char *)a3 + 12);
  *(_OWORD *)(v23 + 40) = *(_OWORD *)((char *)a3 + 28);
  *(_OWORD *)(v23 + 56) = *(_OWORD *)((char *)a3 + 44);
  *(_OWORD *)(v23 + 72) = *(_OWORD *)((char *)a3 + 60);
  *(_OWORD *)(v23 + 88) = *(_OWORD *)((char *)a3 + 76);
  *(_OWORD *)(v23 + 104) = *(_OWORD *)((char *)a3 + 92);
  *(_OWORD *)(v23 + 120) = *(_OWORD *)((char *)a3 + 108);
  *(_OWORD *)(v23 + 136) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)(v23 + 152) = *(_OWORD *)((char *)a3 + 140);
  *(_OWORD *)(v23 + 168) = *(_OWORD *)((char *)a3 + 156);
  *(_OWORD *)(v23 + 184) = *(_OWORD *)((char *)a3 + 172);
  *(_OWORD *)(v23 + 200) = *(_OWORD *)((char *)a3 + 188);
  if ( *((_DWORD *)a3 + 2) == 3 )
  {
    v26 = *((_QWORD *)a3 + 26);
    if ( v26 )
    {
      if ( *(_DWORD *)v26 == 16 )
      {
        *(_OWORD *)(v23 + 216) = *(_OWORD *)v26;
        *(_DWORD *)(v23 + 232) = *(_DWORD *)(v26 + 16);
      }
    }
  }
  v27 = v25 + 336;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v22 = v27;
    v24 = v16 + 4;
    memmove((char *)v16 + v27, *((const void **)a3 + 28), *((unsigned int *)a3 + 55));
    v27 += *((_DWORD *)a3 + 55);
  }
  v24[2] = v27;
  v12 = (v27 + v42 + 4095) & 0xFFFFF000;
  v10 = (int *)ExAllocatePool2(256LL, v12, 1380209782LL, v15);
  if ( v10 )
  {
    v39 = Src[2];
    v28 = *Src + 1 + *v16;
    v38 = *(_DWORD *)v21;
    memmove(v10, Src, v39);
    v29 = 2 * v28;
    *v10 = v28;
    v30 = (char *)(v10 + 2);
    v31 = *Src - 1;
    if ( *Src != 1 )
    {
      do
      {
        if ( !*((_DWORD *)v30 + 1) )
          break;
        *(_DWORD *)v30 += 8 * v28 - v39;
        v30 += 8;
        --v31;
      }
      while ( v31 );
    }
    v32 = v42 - v39;
    v33 = *v16 - 1;
    if ( *v16 != 1 )
    {
      v34 = v21 - v30;
      do
      {
        if ( !*(_DWORD *)&v30[v34 + 4] )
          break;
        *(_QWORD *)v30 = *(_QWORD *)&v30[v34];
        *(_DWORD *)v30 += v29 * 4 + v42 - v39 - v38;
        v30 += 8;
        --v33;
      }
      while ( v33 );
    }
    v17 = Src;
    v35 = &v10[v29];
    v36 = v32;
    memmove(v35, (char *)Src + v39, v32);
    memmove((char *)v35 + v36, (char *)v16 + v38, v27 - v38);
    v19 = a1;
    if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v10, (v27 + v42 + 4095) & 0xFFFFF000) )
      goto LABEL_28;
    v12 = 3671LL;
    WdLogSingleEntry1(2LL, 3671LL);
    v18 = L"WdDbgReportSecondaryData returned FALSE for combined blob.";
  }
  else
  {
LABEL_7:
    WdLogSingleEntry1(2LL, v12);
    v17 = Src;
    v18 = L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)";
    v19 = a1;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v12, 0LL, 0LL, 0LL, 0LL);
  v4 = -1073741801;
  if ( !(unsigned __int8)WdDbgReportSecondaryData(v19, v17, v42) )
  {
    WdLogSingleEntry1(2LL, 3682LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WdDbgReportSecondaryData returned FALSE.",
      3682LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_28:
  ExFreePoolWithTag(v17, 0x52445476u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x52445476u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52445476u);
  return v4;
}
