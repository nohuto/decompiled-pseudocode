/*
 * XREFs of PfpPrivSourceEnum @ 0x1406593DC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14060B800 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14025371C (MmQueryProcessWorkingSetSwapPages.c)
 *     MmGetNextSession @ 0x1402537E0 (MmGetNextSession.c)
 *     RtlStringCbCopyA @ 0x140253AB0 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x140253B60 (SmStoreExistsForProcess.c)
 *     MiFillSessionWorkingSetEntry @ 0x1403289A0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x14032B8A8 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 *     memset @ 0x140411300 (memset.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     MmGetSessionGlobalVA @ 0x14064C654 (MmGetSessionGlobalVA.c)
 *     ExGetNextProcess @ 0x140659A54 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x140659B74 (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x140659BDC (PsGetProcessDeepFreezeStats.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SmProcessQueryStoreStats @ 0x14092C6C0 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  _DWORD *v8; // rdi
  SIZE_T v9; // rax
  int v10; // edi
  int IsAppContainerOrIdentifyLevelContext; // eax
  struct _DMA_ADAPTER *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  struct _DMA_ADAPTER *k; // rcx
  int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  char v28; // [rsp+20h] [rbp-208h]
  char v29; // [rsp+21h] [rbp-207h]
  char v30[2]; // [rsp+22h] [rbp-206h] BYREF
  int v31; // [rsp+24h] [rbp-204h]
  __int128 v32; // [rsp+28h] [rbp-200h] BYREF
  __int64 v33; // [rsp+38h] [rbp-1F0h]
  _QWORD v34[12]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v35; // [rsp+A0h] [rbp-188h] BYREF
  _DWORD *v36; // [rsp+A8h] [rbp-180h]
  _DWORD *v37; // [rsp+B0h] [rbp-178h]
  __int64 v38; // [rsp+B8h] [rbp-170h]
  __int64 v39; // [rsp+C0h] [rbp-168h]
  _DWORD *v40; // [rsp+D0h] [rbp-158h]
  __int128 v41; // [rsp+D8h] [rbp-150h] BYREF
  __int128 v42; // [rsp+E8h] [rbp-140h]
  __int64 v43; // [rsp+F8h] [rbp-130h]
  __int128 v44; // [rsp+100h] [rbp-128h] BYREF
  __int128 v45; // [rsp+110h] [rbp-118h]
  __int128 v46; // [rsp+120h] [rbp-108h] BYREF
  _QWORD SystemInformation[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+180h] [rbp-A8h]

  v36 = a3;
  v38 = a1;
  v40 = a3;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v46 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v28 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v37 = v8;
  v9 = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)v9 < 0x10 )
  {
    v10 = -1073741789;
    goto LABEL_63;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v48 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v48 != 8 || (DWORD1(v48) & 0xFFFFFFF8) != 0 || (BYTE4(v48) & 3) == 3 )
  {
    v10 = -1073741811;
    goto LABEL_63;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    v29 = 1;
  }
  else
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    v10 = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v28 = 1;
    }
    else if ( IsAppContainerOrIdentifyLevelContext < 0 )
    {
      goto LABEL_63;
    }
    v29 = 0;
    v8 = v37;
  }
  if ( !v28 )
  {
    *((_QWORD *)&v32 + 1) = 1LL;
    for ( i = 0LL; ; i = (struct _DMA_ADAPTER *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v5 = NextSession;
      if ( !NextSession )
        break;
      ++*((_QWORD *)&v32 + 1);
    }
  }
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v32 + 1);
  }
  if ( *((_QWORD *)&v32 + 1) > 0xFFFFFFFFuLL || (v16 = 96LL * *((_QWORD *)&v32 + 1) + 16, v16 > 0xFFFFFFFF) )
  {
    v10 = -1073741670;
    goto LABEL_63;
  }
  LODWORD(v7) = 96 * DWORD2(v32) + 16;
  v17 = *(_DWORD *)(v38 + 24);
  if ( (unsigned int)v16 > v17 )
  {
    v10 = -1073741789;
    goto LABEL_63;
  }
  HIDWORD(v33) = (v17 - 16) / 0x60;
  *(_QWORD *)&v32 = v8;
  if ( !v28 )
  {
    memset(v34, 0, sizeof(v34));
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v34[6] + 4, 0x10uLL, "KernelSpace");
    v10 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( v10 < 0 )
      goto LABEL_63;
    v10 = MmQuerySystemMemoryInformation(&v46);
    if ( v10 < 0 )
      goto LABEL_63;
    v34[4] = SystemInformation[0] >> 12;
    v18 = v46;
    if ( (unsigned __int64)v46 <= SystemInformation[0] >> 12 )
      v18 = SystemInformation[0] >> 12;
    v34[5] = v18;
    v10 = PfpPrivSourceAdd(&v32, v34);
    if ( v10 < 0 )
      goto LABEL_63;
    for ( k = 0LL; ; k = (struct _DMA_ADAPTER *)v5 )
    {
      v5 = MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v34, 0, sizeof(v34));
      LODWORD(v34[0]) = 1;
      HIDWORD(v34[0]) = MmGetSessionIdEx(v5);
      if ( v29 )
        v34[3] = MmGetSessionGlobalVA(v5);
      MiFillSessionWorkingSetEntry((__int64)&v41, *(_QWORD *)(v5 + 1368));
      v34[4] = v43;
      v34[10] = *((_QWORD *)&v41 + 1);
      v34[9] = *((_QWORD *)&v42 + 1);
      v34[5] = v42;
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v34[6] + 4, 0x10uLL, "Session");
      v10 = PfpPrivSourceAdd(&v32, v34);
      if ( v10 < 0 )
        goto LABEL_63;
    }
  }
  v6 = ExGetNextProcess(0LL);
  if ( v6 )
  {
    v20 = BYTE4(v48) & 4;
    v31 = v20;
    do
    {
      memset(v34, 0, sizeof(v34));
      if ( !v20 || (*(_DWORD *)(v6 + 2172) & 1) == 0 )
      {
        LODWORD(v34[0]) = 2;
        HIDWORD(v34[0]) = *(_DWORD *)(v6 + 1088);
        LODWORD(v34[1]) = *(_DWORD *)(v6 + 1524);
        v34[2] = (*(_QWORD *)(v6 + 1088) ^ *(_QWORD *)(v6 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        v21 = v34[3];
        if ( v29 )
          v21 = v6;
        v34[3] = v21;
        v22 = *(_QWORD *)(v6 + 1808);
        v34[4] = v22;
        v23 = *(_QWORD *)(v6 + 1800);
        if ( v22 > v23 )
          v23 = v22;
        v34[10] = v23;
        v24 = *(_QWORD *)(v6 + 1272);
        v34[5] = v24;
        if ( v24 <= v34[4] )
          v24 = v34[4];
        v34[5] = v24;
        LODWORD(v34[6]) = MmGetSessionIdEx(v6);
        v30[0] = 0;
        PsQueryProcessAttributes((struct _KPROCESS *)v6, (__int64)v30, 0LL);
        v25 = HIDWORD(v34[11]) & 0xFFFFFFF6 | v30[0] & 1 | (8 * SmStoreExistsForProcess());
        HIDWORD(v34[11]) = v25;
        PsGetProcessDeepFreezeStats(v6, &v44);
        if ( *((_QWORD *)&v45 + 1) )
        {
          v25 |= 2u;
          HIDWORD(v34[11]) = v25;
          LODWORD(v34[11]) = *((_QWORD *)&v45 + 1) / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1850) == 2 )
          HIDWORD(v34[11]) = v25 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v34[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1448));
        if ( (BYTE4(v48) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v6, &v34[9]);
        }
        else if ( (BYTE4(v48) & 2) != 0 && (int)SmProcessQueryStoreStats(v6, &v35, 0LL) >= 0 )
        {
          v34[9] = v35 >> 12;
        }
        v10 = PfpPrivSourceAdd(&v32, v34);
        if ( v10 < 0 )
          goto LABEL_63;
        v20 = v31;
      }
      v6 = ExGetNextProcess((PVOID)v6);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v33 + 16;
  v10 = 0;
LABEL_63:
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( v10 == -1073741789 )
  {
    v26 = *((_QWORD *)&v32 + 1);
    if ( (unsigned __int64)(unsigned int)(v33 + 1) > *((_QWORD *)&v32 + 1) )
      v26 = (unsigned int)(v33 + 1);
    v7 = 96 * v26 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      v10 = -1073741670;
    }
  }
  *v36 = v7;
  return (unsigned int)v10;
}
