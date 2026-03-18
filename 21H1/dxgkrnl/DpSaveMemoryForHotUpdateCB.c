/*
 * XREFs of DpSaveMemoryForHotUpdateCB @ 0x1C02CDEB0
 * Callers:
 *     DpiKsrDoKsrSave @ 0x1C02CE1E4 (DpiKsrDoKsrSave.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall DpSaveMemoryForHotUpdateCB(__int64 a1, int *a2)
{
  unsigned int v2; // eax
  void *v3; // r14
  __int64 v4; // rsi
  void *v5; // r12
  char v6; // r13
  unsigned int v7; // r8d
  struct _MDL *v10; // rax
  struct _MDL *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // eax
  struct _MDL *PagesForMdl; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  PVOID v21; // rax
  ULONG v22; // esi
  PVOID PoolWithTag; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  GUID v31; // xmm0
  __int64 v32; // r9
  int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h] BYREF
  GUID v36; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = 0LL;
  v34 = 0;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( v2 )
  {
    v7 = 1;
    v34 = v2;
    v3 = (void *)*((_QWORD *)a2 + 1);
  }
  v10 = (struct _MDL *)*((_QWORD *)a2 + 2);
  v11 = 0LL;
  v12 = v7 + 1;
  if ( v10 )
    v11 = v10;
  else
    v12 = v7;
  v13 = (unsigned int)(v12 + 1);
  if ( !*((_QWORD *)a2 + 4) )
    v13 = (unsigned int)v12;
  if ( (_DWORD)v13 != 1 )
    goto LABEL_9;
  v16 = a2[6];
  if ( v16 )
  {
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v16 + 4095) & 0xFFFFF000, MmCached, 0x24u);
    v11 = PagesForMdl;
    if ( !PagesForMdl
      || (v21 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u), (v5 = v21) == 0LL) )
    {
      LODWORD(v4) = -1073741670;
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = -1073741670LL;
LABEL_28:
      WdLogEvent5_WdError(v20);
      goto LABEL_29;
    }
    memmove(v21, *((const void **)a2 + 4), (unsigned int)a2[6]);
    v6 = 1;
  }
  if ( v11 )
  {
    v22 = v11->ByteCount >> 12;
    if ( !v22 )
    {
LABEL_9:
      v14 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v14 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v14);
      return 3221225485LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v22, 0x74727044u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v26);
      return 3221225495LL;
    }
    v27 = KsrMdlToMemoryRuns(v11, PoolWithTag, v22, &v34);
    v4 = v27;
    if ( v27 < 0 )
    {
LABEL_27:
      v20 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v20 + 24) = v4;
      goto LABEL_28;
    }
  }
  if ( a1 )
  {
    v30 = *(_QWORD *)(a1 + 64);
    if ( v6 )
      v31 = *(GUID *)(v30 + 4856);
    else
      v31 = *(GUID *)(v30 + 4872);
  }
  else
  {
    v31 = GUID_DXGK_KSR_MEMORY;
  }
  v36 = v31;
  if ( v3 )
  {
    v32 = *((_QWORD *)a2 + 6);
    v35 = 0LL;
    v33 = KsrPersistMemoryWithMetadata(&v36, v3, v34, v32, a2[10], &v35);
    v4 = v33;
    if ( v33 >= 0 )
    {
LABEL_29:
      if ( v3 && !*a2 )
        ExFreePoolWithTag(v3, 0);
      goto LABEL_32;
    }
    goto LABEL_27;
  }
LABEL_32:
  if ( v11 )
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      MmUnmapLockedPages(v5, v11);
      ExFreePoolWithTag(v11, 0);
    }
  }
  return (unsigned int)v4;
}
