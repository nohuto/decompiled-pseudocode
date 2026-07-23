/*
 * XREFs of PfpPrivSourceEnum @ 0x1405EEBC8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405E94F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140239BD8 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x140239C88 (SmStoreExistsForProcess.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402CCAAC (MmQueryProcessWorkingSetSwapPages.c)
 *     MiFillSessionWorkingSetEntry @ 0x14031A7F0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x14031D268 (MmQuerySystemMemoryInformation.c)
 *     MmGetNextSession @ 0x14035D920 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExGetNextProcess @ 0x1405EF224 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1405EF344 (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405EF3AC (PsGetProcessDeepFreezeStats.c)
 *     MmGetSessionGlobalVA @ 0x1406E33EC (MmGetSessionGlobalVA.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SmProcessQueryStoreStats @ 0x1409255E8 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  struct _DMA_ADAPTER *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  struct _DMA_ADAPTER *k; // rcx
  int v19; // ebx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ebx
  __int64 v26; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v28; // [rsp+20h] [rbp-208h]
  char v29[3]; // [rsp+21h] [rbp-207h] BYREF
  int v30; // [rsp+24h] [rbp-204h]
  __int128 v31; // [rsp+28h] [rbp-200h] BYREF
  __int64 v32; // [rsp+38h] [rbp-1F0h]
  _QWORD v33[12]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-188h] BYREF
  _DWORD *v35; // [rsp+A8h] [rbp-180h]
  __int64 v36; // [rsp+B0h] [rbp-178h]
  _DWORD *v37; // [rsp+B8h] [rbp-170h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+C0h] [rbp-168h]
  _DWORD *v39; // [rsp+D0h] [rbp-158h]
  __int128 v40; // [rsp+D8h] [rbp-150h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-140h]
  __int64 v42; // [rsp+F8h] [rbp-130h]
  __int128 v43; // [rsp+100h] [rbp-128h] BYREF
  __int128 v44; // [rsp+110h] [rbp-118h]
  __int128 v45; // [rsp+120h] [rbp-108h] BYREF
  _QWORD SystemInformation[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+180h] [rbp-A8h]

  v35 = a3;
  v36 = a1;
  v39 = a3;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v45 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v28 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  DmaAdapter = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v37 = v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    v16 = -1073741789;
    goto LABEL_46;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v47 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v47 != 8 || (DWORD1(v47) & 0xFFFFFFF8) != 0 || (BYTE4(v47) & 3) == 3 )
  {
    v16 = -1073741811;
    goto LABEL_46;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    v16 = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v28 = 1;
      goto LABEL_11;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_46;
  }
  *((_QWORD *)&v31 + 1) = 1LL;
  for ( i = 0LL; ; i = (struct _DMA_ADAPTER *)NextSession )
  {
    NextSession = MmGetNextSession(i);
    v5 = NextSession;
    if ( !NextSession )
      break;
    ++*((_QWORD *)&v31 + 1);
  }
LABEL_11:
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v31 + 1);
  }
  if ( *((_QWORD *)&v31 + 1) > 0xFFFFFFFFuLL || (v14 = 96LL * *((_QWORD *)&v31 + 1) + 16, v14 > 0xFFFFFFFF) )
  {
    v16 = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v7) = 96 * DWORD2(v31) + 16;
  v15 = *(_DWORD *)(v36 + 24);
  if ( (unsigned int)v14 > v15 )
  {
    v16 = -1073741789;
    goto LABEL_46;
  }
  HIDWORD(v32) = (v15 - 16) / 0x60;
  *(_QWORD *)&v31 = v37;
  if ( !v28 )
  {
    memset(v33, 0, sizeof(v33));
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, "KernelSpace");
    v16 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      goto LABEL_46;
    v16 = MmQuerySystemMemoryInformation(&v45);
    if ( v16 < 0 )
      goto LABEL_46;
    v33[4] = SystemInformation[0] >> 12;
    v17 = v45;
    if ( (unsigned __int64)v45 <= SystemInformation[0] >> 12 )
      v17 = SystemInformation[0] >> 12;
    v33[5] = v17;
    v16 = PfpPrivSourceAdd(&v31, v33);
    if ( v16 < 0 )
      goto LABEL_46;
    for ( k = 0LL; ; k = (struct _DMA_ADAPTER *)v5 )
    {
      v5 = MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v33, 0, sizeof(v33));
      LODWORD(v33[0]) = 1;
      HIDWORD(v33[0]) = MmGetSessionIdEx(v5);
      v33[3] = MmGetSessionGlobalVA(v5);
      MiFillSessionWorkingSetEntry((__int64)&v40, *(_QWORD *)(v5 + 1368));
      v33[4] = v42;
      v33[10] = *((_QWORD *)&v40 + 1);
      v33[9] = *((_QWORD *)&v41 + 1);
      v33[5] = v41;
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, "Session");
      v16 = PfpPrivSourceAdd(&v31, v33);
      if ( v16 < 0 )
        goto LABEL_46;
    }
  }
  v6 = ExGetNextProcess(0LL);
  if ( v6 )
  {
    v19 = BYTE4(v47) & 4;
    v30 = v19;
    do
    {
      memset(v33, 0, sizeof(v33));
      if ( !v19 || (*(_DWORD *)(v6 + 2172) & 1) == 0 )
      {
        LODWORD(v33[0]) = 2;
        HIDWORD(v33[0]) = *(_DWORD *)(v6 + 1088);
        LODWORD(v33[1]) = *(_DWORD *)(v6 + 1524);
        v33[2] = (v6 ^ *(_QWORD *)(v6 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        v20 = v33[3];
        if ( !v28 )
          v20 = v6;
        v33[3] = v20;
        v21 = *(_QWORD *)(v6 + 1808);
        v33[4] = v21;
        v22 = *(_QWORD *)(v6 + 1800);
        if ( v21 > v22 )
          v22 = v21;
        v33[10] = v22;
        v23 = *(_QWORD *)(v6 + 1272);
        v33[5] = v23;
        if ( v23 <= v33[4] )
          v23 = v33[4];
        v33[5] = v23;
        LODWORD(v33[6]) = MmGetSessionIdEx(v6);
        v29[0] = 0;
        PsQueryProcessAttributes((struct _KPROCESS *)v6, (__int64)v29, 0LL);
        v24 = HIDWORD(v33[11]) & 0xFFFFFFF6 | v29[0] & 1 | (8 * SmStoreExistsForProcess());
        HIDWORD(v33[11]) = v24;
        PsGetProcessDeepFreezeStats(v6, &v43);
        if ( *((_QWORD *)&v44 + 1) )
        {
          v24 |= 2u;
          HIDWORD(v33[11]) = v24;
          LODWORD(v33[11]) = *((_QWORD *)&v44 + 1) / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1850) == 2 )
          HIDWORD(v33[11]) = v24 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1448));
        if ( (BYTE4(v47) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v6, &v33[9]);
        }
        else if ( (BYTE4(v47) & 2) != 0 && (int)SmProcessQueryStoreStats(v6, &v34, 0LL) >= 0 )
        {
          v33[9] = v34 >> 12;
        }
        v16 = PfpPrivSourceAdd(&v31, v33);
        if ( v16 < 0 )
          goto LABEL_46;
        v19 = v30;
      }
      v6 = ExGetNextProcess((PVOID)v6);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v32 + 16;
  v16 = 0;
LABEL_46:
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( v16 == -1073741789 )
  {
    v26 = *((_QWORD *)&v31 + 1);
    if ( (unsigned __int64)(unsigned int)(v32 + 1) > *((_QWORD *)&v31 + 1) )
      v26 = (unsigned int)(v32 + 1);
    v7 = 96 * v26 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      v16 = -1073741670;
    }
  }
  *v35 = v7;
  return (unsigned int)v16;
}
