/*
 * XREFs of IoWriteCrashDump @ 0x140502C50
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IoFillTriageDumpBuffer @ 0x140501D40 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x140502700 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1405028DC (IoSetBugCheckProgressAndFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140502B60 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140503C80 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140503DD0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x140504764 (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140504B8C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x140504ED0 (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14050B8E0 (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x1405389B0 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x140538EF4 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x1405880E0 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x1405A11C8 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  _QWORD *v8; // r14
  char v9; // bl
  int v10; // edi
  __int64 v11; // r15
  unsigned int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  _OWORD *v19; // rcx
  int v20; // r9d
  __int64 v21; // r10
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  char v30; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  unsigned int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  int v37; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  _QWORD v40[6]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v41[4]; // [rsp+E8h] [rbp-18h] BYREF

  v8 = a7;
  v9 = 0;
  v10 = 0;
  v11 = a2;
  v38 = a7;
  v35 = 0;
  v37 = 0;
  v39 = a2;
  v36 = 3583;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, v11, a3, a4, a5, (__int64)a6, (__int64)a7);
  v41[0] = v11;
  v41[1] = a3;
  v41[2] = a4;
  v41[3] = a5;
  MmSnapTriageDumpInformation(a6, v41);
  if ( CrashdmpDumpBlock )
  {
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      v14 = 0;
      v15 = (_DWORD *)(CrashdmpDumpBlock + 1372);
      while ( *v15 != a1 )
      {
        ++v14;
        ++v15;
        if ( v14 >= 8 )
          goto LABEL_11;
      }
      *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    }
LABEL_11:
    if ( !a8 )
    {
      v35 = 1;
      v36 = 3319;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C50CD0)(1LL, 0LL, v35);
    VfDisableHalVerifier();
    LOBYTE(v16) = 1;
    v30 = ((__int64 (__fastcall *)(__int64))qword_140C50D00)(v16);
    IoSaveBugCheckProgress(32);
    v17 = 9LL;
    v18 = a3;
    v19 = a6;
    v20 = a4;
    v21 = a5;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v22 = (_OWORD *)(CrashdmpDumpBlock + 64);
    do
    {
      *v22 = *v19;
      v22[1] = v19[1];
      v22[2] = v19[2];
      v22[3] = v19[3];
      v22[4] = v19[4];
      v22[5] = v19[5];
      v22[6] = v19[6];
      v22 += 8;
      v23 = v19[7];
      v19 += 8;
      *(v22 - 1) = v23;
      --v17;
    }
    while ( v17 );
    *v22 = *v19;
    v22[1] = v19[1];
    v22[2] = v19[2];
    v22[3] = v19[3];
    v22[4] = v19[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
    if ( a8 )
      v24 = *(_QWORD *)(a7[23] + 40LL);
    else
      v24 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v24 & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) || v30 != 1 || !a8 )
    {
      IopUpdateMinidumpContext(a1, v11, a3, a4, a5, (__int64)a6, (__int64)a7);
      MmSnapTriageDumpInformation(a6, v41);
      v33 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
      v34 = &IopTriageDumpDataBlocks;
      if ( v30 == 1 || (v25 = *(_QWORD *)(CrashdmpDumpBlock + 1360)) == 0 )
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
      }
      else
      {
        *(_QWORD *)(CrashdmpDumpBlock + 1328) = v25 + 12316;
        *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
      }
      v10 = IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(CrashdmpDumpBlock + 1328),
              1,
              v36,
              0LL,
              (__int64)a6,
              a7,
              CmNtCSDVersion,
              65,
              1u,
              (__int64)&v33,
              (__int64)&v33,
              &v37);
      if ( v10 < 0 )
        return v9;
      v18 = a3;
      v20 = a4;
      v21 = a5;
    }
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0
      && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6
      && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v10 = IoAddPagesForPartialKernelDump(a1, v11, v18, v20, v21, (__int64)a6, (__int64)a7);
    }
    else
    {
      v26 = *(_QWORD **)(CrashdmpDumpBlock + 8);
      if ( v26 )
      {
        v40[5] = 0LL;
        v33 = v26[6];
        v34 = v26 + 7;
        v40[2] = &v33;
        v40[0] = IoSetDumpRange;
        v40[1] = IoFreeDumpRange;
        v40[3] = v26;
        v40[4] = 0LL;
        IopDumpCallAddPagesCallbacks(a1);
        IoSaveBugCheckProgress(33);
        MmGetDumpRange((ULONG_PTR)v40);
        IopDumpCallRemovePagesCallbacks(a1);
        IoSaveBugCheckProgress(34);
        v27 = RtlNumberOfSetBitsEx(&v33);
        LODWORD(v11) = v39;
        v26[5] = v27;
      }
      v8 = v38;
    }
    if ( v10 >= 0 )
      v10 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C50CD8)(CrashdmpDumpBlock, a8);
    if ( v10 != -1073741267 )
      goto LABEL_46;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
    {
      IoSaveBugCheckProgress(39);
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
      v10 = IoAddPagesForPartialKernelDump(a1, v11, a3, a4, a5, (__int64)a6, (__int64)v8);
      if ( v10 < 0 )
        goto LABEL_46;
      v28 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C50CD8)(CrashdmpDumpBlock, a8);
      v29 = 38;
    }
    else
    {
      if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
        goto LABEL_46;
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
      IoUpdateBugCheckProgressEnvVariable();
      IopUpdateMinidumpContext(a1, v11, a3, a4, a5, (__int64)a6, (__int64)v8);
      MmSnapTriageDumpInformation(a6, v41);
      v33 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
      v34 = &IopTriageDumpDataBlocks;
      v10 = IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(CrashdmpDumpBlock + 1328),
              1,
              3583,
              0LL,
              (__int64)a6,
              v8,
              CmNtCSDVersion,
              65,
              1u,
              (__int64)&v33,
              (__int64)&v33,
              &v37);
      if ( v10 < 0 )
        goto LABEL_46;
      v28 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C50CD8)(CrashdmpDumpBlock, a8);
      v29 = 35;
    }
    v10 = v28;
    IoSaveBugCheckProgress(v29);
LABEL_46:
    if ( (DumpPolicyAttemptOffline & 1) != 0 && v10 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v30 )
    {
      IoSaveBugCheckProgress(36);
      if ( ((int (__fastcall *)(_QWORD))off_140C008D8[0])(0LL) >= 0 )
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
    else if ( v10 >= 0 )
    {
      if ( v30 != 1 )
      {
        if ( *(_QWORD *)(CrashdmpDumpBlock + 1360) )
        {
          IoSetBugCheckProgressAndFlag();
          v10 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
          if ( CrashdmpDumpBlock )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
            IoUpdateBugCheckProgressEnvVariable();
          }
        }
      }
      return v10 >= 0;
    }
  }
  return v9;
}
