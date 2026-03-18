/*
 * XREFs of MiUnmapViewOfSection @ 0x140635E10
 * Callers:
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x140635D40 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewOfSection @ 0x1406D9510 (MmUnmapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14075CE64 (EtwpCoverageEnsureUserModeView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C5018 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408CF2AC (MiUnmapImageForEnclaveUse.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x140636140 (MiUnmapVad.c)
 *     DbgkUnMapViewOfSection @ 0x1406D5C2C (DbgkUnMapViewOfSection.c)
 *     PerfLogImageUnload @ 0x14070993C (PerfLogImageUnload.c)
 */

__int64 __fastcall MiUnmapViewOfSection(
        _KPROCESS *BugCheckParameter1,
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  int v4; // r12d
  unsigned __int64 v5; // rbp
  _KPROCESS *v6; // rsi
  _KPROCESS *Process; // rcx
  unsigned int v9; // r14d
  volatile signed __int32 *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rdi
  int v20; // esi
  __int64 *v22; // r14
  ULONG_PTR v23; // r13
  unsigned int v24; // r8d
  int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 VadEvent; // rax
  int v29; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-84h]
  __int64 v31; // [rsp+58h] [rbp-80h]
  _KPROCESS *v32; // [rsp+60h] [rbp-78h]
  _OWORD v33[3]; // [rsp+68h] [rbp-70h] BYREF

  v32 = BugCheckParameter1;
  v29 = 0;
  memset(v33, 0, sizeof(v33));
  v4 = 0;
  v5 = 0LL;
  v31 = 0LL;
  v30 = a3;
  v6 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (unsigned int)a4 & 0x4000000;
  if ( ((unsigned int)a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != v6 )
  {
    KiStackAttachProcess(v6, 0LL, (__int64)v33, a4);
    v4 = 1;
  }
  v10 = MiObtainReferencedVadEx(a2, 1, &v29);
  v13 = (__int64)v10;
  if ( !v10 )
  {
    v20 = v29;
    if ( v29 == -1073741664 )
      v20 = -1073741799;
    goto LABEL_15;
  }
  v14 = *((_DWORD *)v10 + 12);
  v15 = v14 >> 4;
  if ( (v14 & 0x100000) != 0 && (v15 & 7) != 1 )
  {
    v20 = -1073741799;
    goto LABEL_45;
  }
  v16 = *((unsigned int *)v10 + 6);
  v17 = (v16 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
  if ( (v15 & 7) == 2 && (v14 & 0xF80) == 0x380 )
    v5 = (v16 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
  v18 = ((*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
       - (v16 | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
       + 1) << 12;
  if ( (v14 & 8) == 0 || (v6[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
LABEL_8:
    if ( v9 )
    {
      if ( v17 != a2 || (VadEvent = MiLocateVadEvent(v13, 128LL)) == 0 )
      {
        v20 = -1073741800;
        goto LABEL_45;
      }
      v19 = *(_QWORD *)(VadEvent + 8);
      *(_QWORD *)(VadEvent + 8) = 0LL;
      ExAcquirePushLockExclusiveEx(v19 + 40, 0LL);
      *(_DWORD *)(v19 + 24) = *(_DWORD *)(v13 + 24);
      *(_BYTE *)(v19 + 32) = *(_BYTE *)(v13 + 32);
      *(_DWORD *)(v19 + 28) = *(_DWORD *)(v13 + 28);
      *(_BYTE *)(v19 + 33) = *(_BYTE *)(v13 + 33);
    }
    else
    {
      v19 = v31;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v5 )
      {
        if ( v6[1].Header.WaitListHead.Flink )
        {
          if ( (HIDWORD(v6[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            v22 = **(__int64 ***)(v13 + 72);
            if ( v22 )
            {
              if ( v22[8] )
              {
                v31 = *v22;
                v23 = MiReferenceControlAreaFile((__int64)v22);
                if ( (*(_DWORD *)(v13 + 64) & 0x8000000) != 0 )
                {
                  v24 = 0;
                  v25 = 0;
                }
                else
                {
                  v26 = *(unsigned __int8 *)(v31 + 15);
                  v27 = v26 >> 1;
                  v24 = v26 >> 4;
                  v25 = v27 & 7;
                }
                PerfLogImageUnload(v23 + 88, v23, v6, v5, v18, *(_DWORD *)(*(_QWORD *)(v31 + 56) + 60LL), v24, v25, 1);
                MiDereferenceControlAreaFile((__int64)v22, v23);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v13 + 48) & 0x70) == 0x10 )
      MiDeleteVad((_DWORD *)v13, v19, v30);
    else
      MiUnmapVad(v13, v19, v30);
    v20 = 0;
    goto LABEL_15;
  }
  v20 = MiCheckSecuredVad((ULONG_PTR)v10, v17, v18, 0x55u, KeGetCurrentThread()->PreviousMode);
  if ( v20 >= 0 )
  {
    v6 = v32;
    goto LABEL_8;
  }
LABEL_45:
  MiUnlockAndDereferenceVad((char *)v13);
LABEL_15:
  if ( v4 == 1 )
    KiUnstackDetachProcess((__int64)v33, 0LL, v11, v12);
  if ( v5 )
    DbgkUnMapViewOfSection(v32);
  return (unsigned int)v20;
}
