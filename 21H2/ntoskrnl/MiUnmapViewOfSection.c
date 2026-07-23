/*
 * XREFs of MiUnmapViewOfSection @ 0x140687D60
 * Callers:
 *     MmUnmapViewOfSection @ 0x14060CD00 (MmUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x140687C90 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140771E04 (EtwpCoverageEnsureUserModeView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C9AC8 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D3D5C (MiUnmapImageForEnclaveUse.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PerfLogImageUnload @ 0x1405FE2D4 (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x140606948 (DbgkUnMapViewOfSection.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *BugCheckParameter1, unsigned __int64 a2, unsigned int a3, int a4)
{
  int v4; // r12d
  void *v5; // rbp
  _KPROCESS *v6; // rsi
  _KPROCESS *Process; // rcx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rdi
  int v18; // esi
  __int64 *v20; // r14
  ULONG_PTR v21; // r13
  int v22; // r8d
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
    KiStackAttachProcess(v6, 0, (__int64)v31);
    v4 = 1;
  }
  v10 = MiObtainReferencedVadEx(a2, 1, &v27);
  v11 = v10;
  if ( !v10 )
  {
    v18 = v27;
    if ( v27 == -1073741664 )
      v18 = -1073741799;
    goto LABEL_15;
  }
  v12 = *(_DWORD *)(v10 + 48);
  v13 = v12 >> 4;
  if ( (v12 & 0x100000) != 0 && (v13 & 7) != 1 )
  {
    v18 = -1073741799;
    goto LABEL_45;
  }
  v14 = *(unsigned int *)(v10 + 24);
  v15 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  if ( (v13 & 7) == 2 && (v12 & 0xF80) == 0x380 )
    v5 = (void *)((v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12);
  v16 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
       - (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
       + 1) << 12;
  if ( (v12 & 8) == 0 || (v6[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
LABEL_8:
    if ( v9 )
    {
      if ( v15 != a2 || (VadEvent = MiLocateVadEvent(v11)) == 0 )
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
                PerfLogImageUnload(
                  (unsigned __int16 *)(v21 + 88),
                  (struct _DMA_ADAPTER *)v21,
                  (__int64)v6,
                  v5,
                  v16,
                  *(_DWORD *)(*(_QWORD *)(v29 + 56) + 60LL),
                  v22,
                  v23,
                  1u);
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
  v18 = MiCheckSecuredVad(v10, v15, v16, 0x55u, KeGetCurrentThread()->PreviousMode);
  if ( v18 >= 0 )
  {
    v6 = v30;
    goto LABEL_8;
  }
LABEL_45:
  MiUnlockAndDereferenceVad((char *)v11);
LABEL_15:
  if ( v4 == 1 )
    KiUnstackDetachProcess((__int64)v31, 0LL);
  if ( v5 )
    DbgkUnMapViewOfSection(v30, (__int64)v5);
  return (unsigned int)v18;
}
