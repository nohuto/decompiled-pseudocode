/*
 * XREFs of IoWriteCrashDump @ 0x140553244
 * Callers:
 *     KiBugCheckWriteCrashDump @ 0x140567588 (KiBugCheckWriteCrashDump.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140222368 (KdCheckForDebugBreak.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlSetSecurePageCollectionMode @ 0x140417674 (HvlSetSecurePageCollectionMode.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140552EE8 (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x140552F34 (IoSetBugCheckProgressFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140553164 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopCollectTriageDumpData @ 0x1405540DC (IopCollectTriageDumpData.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140554390 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405544E0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405554B0 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405557FC (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14055CC5C (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x140593388 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x140593778 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x1405FE548 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  __int64 v10; // r14
  unsigned int v13; // esi
  int v14; // edi
  unsigned int v16; // edx
  _DWORD *v17; // rax
  char v18; // cl
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r10
  __int64 v23; // r8
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rcx
  int v31; // edx
  __int64 v32; // rsi
  unsigned int v33; // r14d
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // edi
  char v38; // [rsp+50h] [rbp-81h]
  char v39; // [rsp+51h] [rbp-80h]
  unsigned int v40; // [rsp+54h] [rbp-7Dh]
  int v42; // [rsp+70h] [rbp-61h]
  _QWORD v43[6]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-21h]
  __int64 v46; // [rsp+B8h] [rbp-19h]
  __int64 v47; // [rsp+C0h] [rbp-11h]

  v9 = 0;
  v10 = a3;
  v39 = a8 == 0;
  v42 = a3;
  v13 = 0;
  v14 = 0;
  v40 = 0;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, a2, v10, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140C4EFD8) && !byte_140C4EFD4 )
  {
    IoSetBugCheckProgressFlag(0x400000);
    return 0;
  }
  v46 = a4;
  v47 = a5;
  v44 = a2;
  v45 = v10;
  MmSnapTriageDumpInformation(a6, &v44);
  if ( !CrashdmpDumpBlock )
    return v9;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
  {
    v16 = 0;
    v17 = (_DWORD *)(CrashdmpDumpBlock + 1372);
    while ( *v17 != a1 )
    {
      ++v16;
      ++v17;
      if ( v16 >= 8 )
        goto LABEL_14;
    }
    *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
  }
LABEL_14:
  if ( !a8 )
  {
    v13 = 1;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
  }
  ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C54E00)(1LL, 0LL, v13);
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v18 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
    v18 = 0;
  HvlSetSecurePageCollectionMode(v18);
  VfDisableHalVerifier();
  LOBYTE(v19) = 1;
  v38 = ((__int64 (__fastcall *)(__int64))qword_140C54E30)(v19);
  IoSaveBugCheckProgress(32);
  v20 = 9LL;
  v21 = a4;
  v22 = a5;
  v23 = (__int64)a6;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
  v24 = a6;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = a2;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = v10;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v25 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v25 = *v24;
    v25[1] = v24[1];
    v25[2] = v24[2];
    v25[3] = v24[3];
    v25[4] = v24[4];
    v25[5] = v24[5];
    v25[6] = v24[6];
    v25 += 8;
    v26 = v24[7];
    v24 += 8;
    *(v25 - 1) = v26;
    --v20;
  }
  while ( v20 );
  *v25 = *v24;
  v25[1] = v24[1];
  v25[2] = v24[2];
  v25[3] = v24[3];
  v25[4] = v24[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
  *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
  if ( a8 )
    v27 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
  else
    v27 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v27 & 0xFFFFFFFFFFFFF000uLL;
  v28 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
  if ( v28 )
    goto LABEL_27;
  if ( v38 == 1 )
  {
    if ( a8 )
      goto LABEL_39;
LABEL_27:
    if ( v38 == 1 )
      goto LABEL_30;
  }
  v29 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
  if ( v29 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = v29 + 12316;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    goto LABEL_33;
  }
LABEL_30:
  if ( !v28 && !a8 )
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
LABEL_33:
  v30 = *(void **)(CrashdmpDumpBlock + 1328);
  if ( IoPreparedTriageDumpData )
  {
    if ( IoPreparedTriageDumpData != v30 )
    {
      memmove(v30, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_38:
      v22 = a5;
      v23 = (__int64)a6;
    }
LABEL_39:
    v31 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
    if ( v31 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v14 = IoAddPagesForPartialKernelDump(a1, a2, v10, a4, v22, v23, a7);
      goto LABEL_52;
    }
    v32 = *(_QWORD *)(CrashdmpDumpBlock + 8);
    if ( !v32 )
    {
LABEL_51:
      v21 = a4;
LABEL_52:
      if ( v14 >= 0 )
        v14 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C54E08)(CrashdmpDumpBlock, a8);
      if ( v14 != -1073741267 )
        goto LABEL_62;
      if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
      {
        IoSaveBugCheckProgress(39);
        *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
        v14 = IoAddPagesForPartialKernelDump(a1, a2, v10, v21, a5, (__int64)a6, a7);
        if ( v14 < 0 )
          goto LABEL_62;
        v35 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C54E08)(CrashdmpDumpBlock, a8);
        v36 = 38;
      }
      else
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
          goto LABEL_62;
        *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
        IoUpdateBugCheckProgressEnvVariable();
        IoPreparedTriageDumpData = 0LL;
        v14 = IopCollectTriageDumpData(a1, a2, v10, v21, a5, (__int64)a6, a7, v39);
        if ( v14 < 0 )
          goto LABEL_62;
        v35 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C54E08)(CrashdmpDumpBlock, a8);
        v36 = 35;
      }
      v14 = v35;
      IoSaveBugCheckProgress(v36);
LABEL_62:
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v14 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v38 )
      {
        IoSaveBugCheckProgress(36);
        if ( ((int (__fastcall *)(_QWORD))off_140C01F28[0])(0LL) >= 0 )
        {
          if ( CrashdmpDumpBlock )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x1000u;
            IoUpdateBugCheckProgressEnvVariable();
          }
          while ( 1 )
          {
            KeStallExecutionProcessor(0xF4240u);
            ++AttemptOfflineStallCount;
          }
        }
      }
      else if ( v14 >= 0 )
      {
        if ( v38 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
          return 1;
        IoSetBugCheckProgressAndFlag();
        v37 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        if ( CrashdmpDumpBlock )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
          IoUpdateBugCheckProgressEnvVariable();
        }
        if ( v37 >= 0 )
          return 1;
      }
      return v9;
    }
    v43[5] = 0LL;
    v33 = 1;
    v44 = *(_QWORD *)(v32 + 48);
    v45 = v32 + 56;
    v43[2] = &v44;
    v43[0] = IoSetDumpRange;
    v43[1] = IoFreeDumpRange;
    v43[3] = v32;
    v43[4] = 0LL;
    v34 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
    if ( v34 == 6 )
    {
      v40 = a9 != 0;
    }
    else
    {
      if ( v34 != 5 || !v31 )
        goto LABEL_50;
      v40 = 2;
    }
    v33 = 0;
LABEL_50:
    IopDumpCallAddPagesCallbacks(a1);
    IoSaveBugCheckProgress(33);
    MmGetDumpRange(v43, v33, v40);
    IopDumpCallRemovePagesCallbacks(a1);
    IoSaveBugCheckProgress(34);
    LODWORD(v10) = v42;
    *(_QWORD *)(v32 + 40) = RtlNumberOfSetBitsEx(&v44);
    goto LABEL_51;
  }
  v14 = IopCollectTriageDumpData(a1, a2, v10, a4, a5, (__int64)a6, a7, v39);
  if ( v14 >= 0 )
    goto LABEL_38;
  return v9;
}
