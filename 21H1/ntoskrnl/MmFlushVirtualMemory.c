/*
 * XREFs of MmFlushVirtualMemory @ 0x1406DC964
 * Callers:
 *     NtFlushVirtualMemory @ 0x1406DC800 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     KeAreAllApcsDisabled @ 0x1402A5D40 (KeAreAllApcsDisabled.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiFindLastSubsection @ 0x1402BF004 (MiFindLastSubsection.c)
 *     MiFlushAcquire @ 0x140313AC8 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405EE29C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // r9
  char *v14; // rsi
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r13
  __int64 v18; // r15
  int v19; // eax
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // r14
  _QWORD *v22; // r12
  __int64 v23; // r8
  _DWORD *v24; // r9
  struct _FILE_OBJECT *v25; // rsi
  unsigned int *v26; // r15
  int v27; // ebx
  unsigned int *v29; // rax
  BOOLEAN v30; // [rsp+40h] [rbp-69h]
  unsigned int v31; // [rsp+44h] [rbp-65h]
  unsigned __int64 v32; // [rsp+48h] [rbp-61h] BYREF
  __int64 v33; // [rsp+50h] [rbp-59h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-51h]
  _QWORD *v35; // [rsp+60h] [rbp-49h] BYREF
  unsigned int *v36; // [rsp+68h] [rbp-41h]
  _QWORD *v37; // [rsp+70h] [rbp-39h]
  __int64 v38; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v39[3]; // [rsp+80h] [rbp-29h] BYREF

  v4 = *a2;
  v5 = 0;
  v36 = a4;
  v39[0] = 0LL;
  v37 = a3;
  v7 = *a3 + v4 - 1;
  v8 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v35 = 0LL;
  *a2 = v8;
  v9 = v7 | 0xFFF;
  memset(&v39[1], 0, 32);
  v32 = 0LL;
  v10 = 0;
  LODWORD(v33) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v10 = 2;
    KiStackAttachProcess(a1, 0LL, (__int64)v39, a4);
  }
  v31 = 0;
  v30 = KeAreAllApcsDisabled();
  v11 = MiObtainReferencedVadEx(v8, 2, (int *)&v33);
  v14 = (char *)v11;
  if ( !v11 )
  {
    v5 = v33;
    if ( (_DWORD)v33 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_25;
  }
  v15 = *((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32);
  if ( !*a3 )
  {
    v9 = (v15 << 12) | 0xFFF;
    v10 |= 1u;
  }
  v16 = *((_DWORD *)v11 + 12);
  if ( (v16 & 0x100000) != 0 || (v17 = v9 >> 12, v9 >> 12 > v15) )
  {
LABEL_31:
    v5 = -1073741799;
    goto LABEL_24;
  }
  v18 = **((_QWORD **)v11 + 9);
  v33 = v18;
  if ( *(_QWORD *)(v18 + 64) && (v16 & 0x70) != 0x20 )
  {
    *v37 = v9 - v8 + 1;
    if ( !v30 )
    {
      v19 = 0;
      if ( (*(_DWORD *)(v18 + 56) & 0x20000) != 0 )
        v19 = 4;
      v31 = v19;
    }
    MiFlushDirtyBitsToPfn(v8, v9, (__int64)CurrentThread);
    MiGetProtoPteAddress((__int64)v14, v9 >> 12, 0, &v32);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v14, v8 >> 12, 0, &v35);
    LastSubsection = v32;
    v22 = v35;
    CurrentThread = ProtoPteAddress;
    if ( v32 )
    {
      v32 = MiGetProtoPteAddress((__int64)v14, v17, 0, &v38);
LABEL_16:
      if ( (unsigned int)MiFlushAcquire(v18, (ULONG_PTR)v22, LastSubsection) )
      {
        MiUnlockAndDereferenceVadShared(v14);
        if ( v10 >= 2 )
          KiUnstackDetachProcess((__int64)v39, 0LL, v23, v24);
        v25 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v18);
        v26 = v36;
        while ( 1 )
        {
          v27 = FsRtlAcquireFileForCcFlushEx(v25);
          if ( v27 < 0 )
            break;
          v27 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v32, v22, LastSubsection, 0LL, v31, v26);
          FsRtlReleaseFileForCcFlush(v25);
          if ( v27 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MiDereferenceControlAreaFile(v33, (unsigned __int64)v25);
        MiFlushRelease(v33, (ULONG_PTR)v22, LastSubsection);
        return (unsigned int)v27;
      }
      v5 = -1073741670;
      goto LABEL_24;
    }
    if ( v35 )
    {
      if ( (v10 & 1) != 0 )
      {
        LastSubsection = MiFindLastSubsection(v18, 0);
        v32 = *(_QWORD *)(LastSubsection + 8)
            + 8
            * (*(unsigned int *)(LastSubsection + 44)
             - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF)
             - 1);
        goto LABEL_16;
      }
    }
    else if ( (v10 & 1) != 0 )
    {
      v29 = v36;
      *v36 = 0;
      *((_QWORD *)v29 + 1) = 0LL;
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  v5 = -1073741688;
LABEL_24:
  MiUnlockAndDereferenceVadShared(v14);
LABEL_25:
  if ( v10 >= 2 )
    KiUnstackDetachProcess((__int64)v39, 0LL, v12, v13);
  return v5;
}
