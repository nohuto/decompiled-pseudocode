/*
 * XREFs of MiUnmapViewOfSection @ 0x140600DD0
 * Callers:
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x140600D00 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewOfSection @ 0x1406FCC00 (MmUnmapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14075F400 (EtwpCoverageEnsureUserModeView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C6368 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408C98C4 (MiPerformImageHotPatch.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D05FC (MiUnmapImageForEnclaveUse.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x14062F008 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x1406B3AEC (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x1406F90AC (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *BugCheckParameter1, unsigned __int64 a2, unsigned int a3, int a4)
{
  int v4; // r12d
  unsigned __int64 v5; // rbp
  _KPROCESS *v6; // rsi
  _KPROCESS *Process; // rcx
  int v9; // r14d
  volatile signed __int32 *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  int v18; // esi
  __int64 *v20; // r14
  ULONG_PTR v21; // r13
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 VadEvent; // rax
  int v27; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-84h]
  __int64 v29; // [rsp+58h] [rbp-80h]
  _KPROCESS *v30; // [rsp+60h] [rbp-78h]
  _OWORD v31[3]; // [rsp+68h] [rbp-70h] BYREF

  v30 = BugCheckParameter1;
  v27 = 0;
  memset(v31, 0, sizeof(v31));
  v4 = 0;
  v5 = 0LL;
  v29 = 0LL;
  v28 = a3;
  v6 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = a4 & 0x4000000;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != v6 )
  {
    KiStackAttachProcess(v6, 0LL, (__int64)v31);
    v4 = 1;
  }
  v10 = MiObtainReferencedVadEx(a2, 1, &v27);
  v11 = (__int64)v10;
  if ( !v10 )
  {
    v18 = v27;
    if ( v27 == -1073741664 )
      v18 = -1073741799;
    goto LABEL_15;
  }
  v12 = *((_DWORD *)v10 + 12);
  v13 = v12 >> 4;
  if ( (v12 & 0x100000) != 0 && (v13 & 7) != 1 )
  {
    v18 = -1073741799;
    goto LABEL_45;
  }
  v14 = *((unsigned int *)v10 + 6);
  v15 = (v14 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
  if ( (v13 & 7) == 2 && (v12 & 0xF80) == 0x380 )
    v5 = (v14 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
  v16 = ((*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
       - (v14 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
       + 1) << 12;
  if ( (v12 & 8) == 0 || (v6[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
LABEL_8:
    if ( v9 )
    {
      if ( v15 != a2 || (VadEvent = MiLocateVadEvent(v11, 128LL)) == 0 )
      {
        v18 = -1073741800;
        goto LABEL_45;
      }
      v17 = *(_QWORD *)(VadEvent + 8);
      *(_QWORD *)(VadEvent + 8) = 0LL;
      ExAcquirePushLockExclusiveEx(v17 + 40, 0LL);
      *(_DWORD *)(v17 + 24) = *(_DWORD *)(v11 + 24);
      *(_BYTE *)(v17 + 32) = *(_BYTE *)(v11 + 32);
      *(_DWORD *)(v17 + 28) = *(_DWORD *)(v11 + 28);
      *(_BYTE *)(v17 + 33) = *(_BYTE *)(v11 + 33);
    }
    else
    {
      v17 = v29;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v5 )
      {
        if ( v6[1].Header.WaitListHead.Flink )
        {
          if ( (HIDWORD(v6[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            v20 = **(__int64 ***)(v11 + 72);
            if ( v20 )
            {
              if ( v20[8] )
              {
                v29 = *v20;
                v21 = MiReferenceControlAreaFile((__int64)v20);
                if ( (*(_DWORD *)(v11 + 64) & 0x8000000) != 0 )
                {
                  v22 = 0;
                  v23 = 0;
                }
                else
                {
                  v24 = *(unsigned __int8 *)(v29 + 15);
                  v25 = v24 >> 1;
                  v22 = v24 >> 4;
                  v23 = v25 & 7;
                }
                PerfLogImageUnload(v21 + 88, v21, v6, v5, v16, *(_DWORD *)(*(_QWORD *)(v29 + 56) + 60LL), v22, v23, 1);
                MiDereferenceControlAreaFile((__int64)v20, v21);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x70) == 0x10 )
      MiDeleteVad((_DWORD *)v11, v17, v28);
    else
      MiUnmapVad(v11, v17, v28);
    v18 = 0;
    goto LABEL_15;
  }
  v18 = MiCheckSecuredVad(
          (_DWORD)v10,
          (_DWORD)v14 << 12,
          (*((_DWORD *)v10 + 7) - (int)v14 + 1) << 12,
          85,
          KeGetCurrentThread()->PreviousMode);
  if ( v18 >= 0 )
  {
    v6 = v30;
    goto LABEL_8;
  }
LABEL_45:
  MiUnlockAndDereferenceVad((PVOID)v11);
LABEL_15:
  if ( v4 == 1 )
    KiUnstackDetachProcess((__int64)v31, 0LL);
  if ( v5 )
    DbgkUnMapViewOfSection(v30);
  return (unsigned int)v18;
}
