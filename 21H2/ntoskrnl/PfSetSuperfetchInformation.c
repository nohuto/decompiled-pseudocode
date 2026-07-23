/*
 * XREFs of PfSetSuperfetchInformation @ 0x1406B3034
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     MmSetTrimWhileAgingState @ 0x140250E2C (MmSetTrimWhileAgingState.c)
 *     PfTSetTraceWorkerPriority @ 0x140382F54 (PfTSetTraceWorkerPriority.c)
 *     PfLockExclusiveAcquire @ 0x1403CF770 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1403D0240 (PfLockExclusiveRelease.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmSetMinimumAgeRate @ 0x1406209E4 (MmSetMinimumAgeRate.c)
 *     PfpPrefetchRequest @ 0x140673EA0 (PfpPrefetchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     PfpRpControlRequest @ 0x1406B3CD0 (PfpRpControlRequest.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 *     PfpLogEventRequest @ 0x14077684C (PfpLogEventRequest.c)
 *     PfGenerateTrace @ 0x140776A34 (PfGenerateTrace.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     PfpProcessScenarioPhase @ 0x14078D158 (PfpProcessScenarioPhase.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfpSetParameter @ 0x1407BF5D4 (PfpSetParameter.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF840 (PfpDeprioritizeOldPagesInWs.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140999C20 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x1409A281C (PfpScenCtxServiceThreadSet.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ebx
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  char *v15; // rcx
  int v16; // esi
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int128 v20; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-A8h]
  PVOID P; // [rsp+58h] [rbp-A0h]
  __int64 v24; // [rsp+60h] [rbp-98h]
  int v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]
  int v27; // [rsp+78h] [rbp-80h]
  void *Src[2]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-68h]
  int v30; // [rsp+94h] [rbp-64h]
  __int64 v31; // [rsp+98h] [rbp-60h]
  __int64 v32; // [rsp+A0h] [rbp-58h]
  __int128 v33; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-40h]
  unsigned int v35; // [rsp+100h] [rbp+8h] BYREF
  KPROCESSOR_MODE v36; // [rsp+118h] [rbp+20h]

  v36 = a4;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v22 = 0;
  v26 = 0LL;
  v27 = 0;
  v24 = 0LL;
  v25 = 0;
  v35 = 0;
  v32 = 0LL;
  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v9 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  v20 = 0LL;
  v21 = 0LL;
  v20 = *a2;
  v21 = a2[1];
  if ( (_QWORD)v20 != 0x6B7568430000002DLL )
    goto LABEL_84;
  if ( DWORD2(v20) == 14 )
  {
    LOBYTE(v7) = a4;
    v8 = PfpRpControlRequest(&v20, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v20) > 14 )
  {
    if ( DWORD2(v20) == 15 )
    {
      if ( DWORD2(v21) != 4 )
        goto LABEL_94;
      if ( a4 && (v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = *(_DWORD *)v21;
      v22 = v30 + dword_140C5031C;
      v9 = PfpSetParameter(KeyHandle, 4u);
      if ( v9 >= 0 )
        dword_140C5031C = v22;
      goto LABEL_12;
    }
    if ( DWORD2(v20) != 18 )
    {
      switch ( DWORD2(v20) )
      {
        case 0x13:
          if ( DWORD2(v21) == 12 )
          {
            v9 = 0;
            if ( a4 && (v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v24 = *(_QWORD *)v21;
            v11 = *(_DWORD *)(v21 + 8);
            v25 = v11;
            if ( (_DWORD)v24 == 2 && SHIDWORD(v24) < 5 && (unsigned __int8)v25 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
            {
              LOBYTE(v35) = BYTE4(v24);
              BYTE1(v35) = v25;
              HIWORD(v35) = BYTE1(v11);
              MmSetTrimWhileAgingState(v35);
              goto LABEL_12;
            }
            goto LABEL_84;
          }
          goto LABEL_94;
        case 0x16:
          goto LABEL_10;
        case 0x19:
          if ( DWORD2(v21) == 8 )
          {
            v9 = 0;
            if ( a4 && (v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v32 = *(_QWORD *)v21;
            if ( (_DWORD)v32 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v32));
              goto LABEL_12;
            }
            goto LABEL_84;
          }
          goto LABEL_94;
        case 0x1A:
          LOBYTE(v7) = a4;
          v8 = PfpDeprioritizeOldPagesInWs(&v20, v7);
          goto LABEL_11;
        case 0x1D:
LABEL_10:
          LOBYTE(v7) = a4;
          v8 = PfpPfnPrioRequest(&v20, v7, &v35);
LABEL_11:
          v9 = v8;
          goto LABEL_12;
      }
      goto LABEL_101;
    }
    if ( DWORD2(v21) != 12 )
      goto LABEL_94;
    if ( a4 && (v21 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = *(_QWORD *)v21;
    v16 = *(_DWORD *)(v21 + 8);
    if ( (_DWORD)v26 == 2 && HIDWORD(v26) < 2 && (v16 & 0xFFFFFFFC) == 0 )
    {
      PfLockExclusiveAcquire((ULONG_PTR)&PfTGlobals);
      if ( HIDWORD(v26) )
      {
        v18 = dword_140C4FC08 & ~v16;
        PfTCleanup(&PfTGlobals);
        PfTInitialize(&PfTGlobals, v19, 1LL);
      }
      else
      {
        v18 = v16 & ~dword_140C4FC08;
      }
      v9 = PfTStart(&PfTGlobals, v17, v18);
      PfLockExclusiveRelease((ULONG_PTR)&PfTGlobals);
      PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_140C50320);
      goto LABEL_12;
    }
LABEL_84:
    v9 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v20) )
  {
    case 3:
      v12 = 16;
      if ( DWORD2(v21) != 16 )
        goto LABEL_94;
      if ( a4 && (v21 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = *(_OWORD *)v21;
      if ( !Src[1] )
        goto LABEL_84;
      v13 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_84;
      v14 = (__int64)Src[0] & 0x1F;
      if ( v14 >= 2 )
      {
        if ( v14 <= 3 )
        {
          v12 = 36;
          goto LABEL_54;
        }
        if ( v14 == 5 )
        {
          v12 = 12;
          goto LABEL_54;
        }
        if ( v14 == 27 )
        {
LABEL_54:
          if ( v13 >= v12 && v13 < 0xFF0 )
          {
            P = ExAllocatePoolWithTag(PagedPool, v13, 0x44456650u);
            if ( P )
            {
              if ( a4 )
              {
                if ( ((__int64)Src[1] & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v15 = (char *)Src[1] + ((unsigned __int64)LODWORD(Src[0]) >> 7);
                if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(P, Src[1], (unsigned __int64)LODWORD(Src[0]) >> 7);
              Src[1] = P;
              v8 = PfpLogEventRequest(Src);
              goto LABEL_11;
            }
            v9 = -1073741670;
            goto LABEL_12;
          }
          goto LABEL_84;
        }
      }
      v9 = -1073741637;
      goto LABEL_12;
    case 4:
      PfGenerateTrace(&Thread, 0LL);
      v9 = 0;
      goto LABEL_12;
    case 5:
      v8 = PfpPrefetchRequest((__int64)&v20, a4);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v21) == 32 )
      {
        if ( a4 && (v21 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v33 = *(_OWORD *)v21;
        v34 = *(_OWORD *)(v21 + 16);
        LOBYTE(v7) = a4;
        v8 = PfpProcessScenarioPhase(&v33, v7);
        goto LABEL_11;
      }
      goto LABEL_94;
  }
  if ( DWORD2(v20) != 11 )
  {
    if ( DWORD2(v20) == 13 )
    {
      if ( DWORD2(v21) == 8 )
      {
        if ( a4 && (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v31 = *(_QWORD *)v21;
        if ( (_WORD)v31 == 1 && (unsigned int)(HIDWORD(v31) - 1) <= 4 )
        {
          v8 = PfpScenCtxPrefetchStateSet((ULONG_PTR)&qword_140C50320);
          goto LABEL_11;
        }
        goto LABEL_84;
      }
LABEL_94:
      v9 = -1073741306;
      goto LABEL_12;
    }
LABEL_101:
    v9 = -1073741821;
    goto LABEL_12;
  }
  if ( DWORD2(v21) != 4 )
    goto LABEL_94;
  if ( a4 && (v21 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v29 = *(_DWORD *)v21;
  v9 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(v29) <= 31 )
    v9 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
