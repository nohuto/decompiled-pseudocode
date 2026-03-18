/*
 * XREFs of MiAllocateVirtualMemory @ 0x140696560
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1406B66C4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1406B6840 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1406B6B00 (MmAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiLockVad @ 0x140249DF8 (MiLockVad.c)
 *     MiFlushRelease @ 0x14024A218 (MiFlushRelease.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14024B650 (MiVadDeleted.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MiIsProcessCfgEnabled @ 0x14024C8F0 (MiIsProcessCfgEnabled.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402AD6E0 (MiVadSupportsPrivateCommit.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1402FB894 (MiAllowProtectionChange.c)
 *     MiFlushAcquire @ 0x140351918 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x140353AC4 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x140556910 (MiGetVadPageSize.c)
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiCommitVadCfgBits @ 0x140601FE0 (MiCommitVadCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     MiCheckSecuredVad @ 0x14062F008 (MiCheckSecuredVad.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     EtwTiLogAllocExecVm @ 0x1406B31DC (EtwTiLogAllocExecVm.c)
 *     MiLogMemResetInfo @ 0x1408C35EC (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x140934588 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  char v8; // si
  unsigned int v9; // ecx
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v11; // rcx
  bool v12; // zf
  int v13; // edx
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  volatile signed __int32 *v19; // rax
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // r8
  int v22; // ecx
  BOOL v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  int v31; // r14d
  __int64 v33; // r13
  unsigned __int64 v34; // r10
  int v35; // eax
  unsigned int v36; // edx
  int v37; // r8d
  ULONG_PTR v38; // rcx
  unsigned __int64 v39; // r10
  unsigned int v40; // eax
  struct _DMA_ADAPTER *v41; // r15
  int v42; // ecx
  unsigned __int64 v43; // rdx
  ULONG_PTR v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  __int64 VadPageSize; // rax
  unsigned int v50; // r9d
  __int16 *ProcessPartition; // rax
  int v52; // r8d
  int v53; // r9d
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+50h] [rbp-B0h] BYREF
  char v57; // [rsp+51h] [rbp-AFh]
  __int16 v58[2]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ch] [rbp-94h] BYREF
  int v63; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+74h] [rbp-8Ch] BYREF
  int v65; // [rsp+78h] [rbp-88h] BYREF
  struct _KTHREAD *v66; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER v67; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v68; // [rsp+90h] [rbp-70h]
  unsigned __int64 v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v72[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v73[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F8h] [rbp-8h]
  int v79; // [rsp+FCh] [rbp-4h]
  _OWORD v80[3]; // [rsp+100h] [rbp+0h] BYREF

  v62 = 0;
  v61 = 0;
  v4 = a2;
  v63 = 0;
  v64 = 0;
  v58[0] = 0;
  *a3 = 0LL;
  memset(v80, 0, sizeof(v80));
  if ( (unsigned __int64)a2 >= 2 && *a2 == MiGetProcessPartition(a1[11]) )
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 2;
  v8 = 1;
  v9 = *((_DWORD *)a1 + 11);
  if ( a1[1] - *a1 + 1 != a1[3] )
    v7 = 0;
  v66 = CurrentThread;
  v56 = 1;
  v57 = 0;
  if ( (v9 & 0x40000000) != 0 )
  {
    if ( (v9 & 0xF0) == 0 )
      return 3221225541LL;
    v9 &= ~0x40000000u;
    v8 = 0;
    *((_DWORD *)a1 + 11) = v9;
    v56 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  if ( ProtectionMask != -1 )
  {
    v11 = (_KPROCESS *)a1[11];
    if ( (_KPROCESS *)a1[12] != v11 )
    {
      KiStackAttachProcess(v11, 0LL, (__int64)v80);
      v7 |= 1u;
    }
    v12 = (*((_DWORD *)a1 + 15) & 0x4000000) == 0;
    v59 = 0LL;
    if ( !v12 && v7 < 2 )
      goto LABEL_105;
    v13 = *((_DWORD *)a1 + 10);
    if ( (v13 & 0x40000000) != 0 && !*(_QWORD *)(a1[11] + 2240) )
    {
      v31 = -1073741811;
      goto LABEL_93;
    }
    v14 = a1[15] & 0x1A;
    if ( v14 )
    {
      if ( (v14 & 2) != 0 )
      {
        v46 = 0xFFFFLL;
      }
      else if ( (v14 & 8) != 0 )
      {
        v46 = 0x1FFFFFLL;
      }
      else
      {
        v46 = -1LL;
        if ( (v14 & 0x10) != 0 )
          v46 = 0x3FFFFFFFLL;
      }
      if ( ((a1[1] + 1) & v46) != 0 || (v46 & *a1) != 0 )
      {
LABEL_105:
        v31 = -1073741811;
        goto LABEL_93;
      }
      v47 = v7 | 0x10;
      if ( (v13 & 0x20400000) == 0x400000 )
        v47 = v7;
      v7 = v47;
    }
    else if ( (v13 & 0x20400000) == 0x20000000 )
    {
      v7 |= 0x10u;
    }
    if ( v7 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *((_BYTE *)a1 + 104)) )
    {
      v31 = -1073741727;
      goto LABEL_93;
    }
    v15 = *(_WORD *)MiGetProcessPartition(a1[11]);
    v16 = *((_DWORD *)a1 + 10);
    v58[0] = v15;
    if ( (v16 & 0x2000) != 0 )
    {
      v31 = MiReserveUserMemory(a1, v4, ProtectionMask, v8, &v59, v58);
      if ( v31 >= 0 )
        goto LABEL_34;
    }
    else if ( (v16 & 0x40000000) != 0 )
    {
      v31 = -1073741811;
    }
    else
    {
      if ( !a1[10] )
      {
        v17 = *a1;
        v18 = *a1;
        v60 = a1[1];
        v68 = v18 >> 12;
        v69 = v60 >> 12;
        v59 = v17;
        v19 = MiObtainReferencedVadEx(v17, 0, &v61);
        v20 = (ULONG_PTR)v19;
        if ( !v19 )
        {
          v31 = v61;
          if ( v61 == -1073741664 )
            v31 = -1073741800;
          goto LABEL_93;
        }
        if ( v60 >> 12 > (*((unsigned int *)v19 + 7) | ((unsigned __int64)*((unsigned __int8 *)v19 + 33) << 32)) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        if ( (v19[12] & 0x1100000) != 0x1100000 && *((_DWORD *)a1 + 12) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        v21 = v59;
        *a3 = v59;
        v22 = *((_DWORD *)v19 + 12);
        if ( (v22 & 0x3100000) == 0x2100000 )
        {
          v48 = v22 & 0x70;
          if ( (_BYTE)v48 == 48 )
          {
            v35 = MiCommitEnclavePages(v48, (__int64)v19, v21, v60, *((_DWORD *)a1 + 10), ProtectionMask);
LABEL_47:
            v31 = v35;
            if ( v35 < 0 )
              goto LABEL_92;
            MiUnlockAndDereferenceVad((PVOID)v20);
LABEL_34:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v50 = *((_DWORD *)a1 + 10);
              if ( (v50 & 0x3000) != 0 )
              {
                ProcessPartition = (__int16 *)MiGetProcessPartition(a1[11]);
                if ( (*((_BYTE *)a1 + 60) & 1) != 0 )
                  v53 = 0x2000;
                PerfInfoLogVirtualAlloc(v59, a1[3], v52, v53, *ProcessPartition, v58[0]);
              }
              else if ( (v50 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v59, a1[3], v50);
              }
            }
            if ( (v7 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v80, 0LL);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                a1[11],
                *((unsigned __int8 *)a1 + 104),
                v59,
                a1[4],
                *((_DWORD *)a1 + 10),
                *((_DWORD *)a1 + 11));
            *a3 = v59;
            return (unsigned int)v31;
          }
          if ( (*((_DWORD *)a1 + 15) & 0x10000000) == 0 )
          {
            v31 = -1073741664;
            goto LABEL_92;
          }
        }
        v23 = MiVadSupportsPrivateCommit((__int64)v19);
        v25 = v59;
        if ( v23 )
        {
          v26 = v60;
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 48) & 0x500000) != 0x500000 )
          {
            v31 = -1073741800;
            goto LABEL_92;
          }
          VadPageSize = MiGetVadPageSize(v24);
          v26 = v60;
          if ( (((VadPageSize << 12) - 1) & (v25 | (v60 + 1))) != 0 )
          {
            v31 = -1073741811;
            goto LABEL_92;
          }
        }
        v27 = *(unsigned int *)(v20 + 52);
        LODWORD(v27) = v27 & 0x7FFFFFFF;
        if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) << 31)) >= 0x7FFFFFFFDLL )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        if ( (*(_DWORD *)(v20 + 48) & 0x70) != 0x40 )
        {
LABEL_26:
          v28 = *((_DWORD *)a1 + 10);
          if ( (v28 & 0x1080000) != 0 )
          {
            v35 = MiResetVirtualMemory(a1[12], v25, v26, v20, v28, *((_BYTE *)a1 + 104));
          }
          else
          {
            if ( (ProtectionMask & 2) != 0 )
            {
              v31 = MiAllowProtectionChange(a1[11], a1[12], v20, ProtectionMask, v25, v26);
              if ( v31 < 0 )
                goto LABEL_92;
              if ( (!v56 || (*(_DWORD *)(v20 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v20 + 48) & 8) != 0 )
                {
                  v31 = MiCheckSecuredVad(v20, v59, a1[3], ProtectionMask, *((_BYTE *)a1 + 104));
                  if ( v31 < 0 )
                    goto LABEL_92;
                  LOBYTE(v7) = v7 | 4;
                }
                v72[0] = v59;
                v72[1] = v60;
                v31 = MiCommitVadCfgBits(v20, (__int64)v72, &v56);
                if ( v31 < 0 )
                  goto LABEL_92;
                v57 = 1;
              }
              v25 = v59;
            }
            v29 = *(_DWORD *)(v20 + 48);
            v30 = *((_DWORD *)a1 + 11);
            if ( (v29 & 0x100000) != 0 )
            {
              if ( (v30 & 0x88) != 0 || (v29 & 0x70) == 0x40 && (v30 & 0xFFFFF9F9) != 0 )
                goto LABEL_61;
              if ( (v29 & 8) == 0 )
              {
LABEL_32:
                v31 = MiCommitExistingVad(
                        v20,
                        v25,
                        a1[3],
                        *((_DWORD *)a1 + 11),
                        *((_DWORD *)a1 + 12),
                        a1[15],
                        *((_BYTE *)a1 + 56),
                        v4,
                        &v64,
                        v58);
                if ( v31 >= 0 )
                {
                  MiUnlockAndDereferenceVad((PVOID)v20);
                  if ( v64 == 1 )
                  {
                    v71 = v59;
                    v70 = a1[3];
                    v40 = *((_DWORD *)a1 + 11);
                    v65 = 0;
                    if ( v57 && !v56 )
                      v40 |= 0x40000000u;
                    MmProtectVirtualMemory(a1[12], a1[11], &v71, &v70, v40, &v65);
                  }
                  goto LABEL_34;
                }
LABEL_92:
                MiUnlockAndDereferenceVad((PVOID)v20);
                goto LABEL_93;
              }
              if ( !MiLocateVadEvent(v20, 64LL) )
              {
                v31 = MiCheckSecuredVad(v38, v39, a1[3], ProtectionMask, *((_BYTE *)a1 + 104));
                if ( v31 < 0 )
                  goto LABEL_92;
                v25 = v59;
                goto LABEL_32;
              }
LABEL_61:
              v31 = -1073741755;
              goto LABEL_92;
            }
            if ( (v30 & 0x600) != 0 )
              goto LABEL_61;
            if ( (v29 & 8) != 0 && (v7 & 4) == 0 )
            {
              v31 = MiCheckSecuredVad(v20, v25, a1[3], ProtectionMask, *((_BYTE *)a1 + 104));
              if ( v31 < 0 )
                goto LABEL_92;
            }
            v33 = **(_QWORD **)(v20 + 72);
            v58[0] = *(_WORD *)MiGetControlAreaPartition(v33);
            if ( *(_QWORD *)(v33 + 64) )
            {
              if ( *(__int64 *)(v20 + 120) >= 0 )
              {
                v31 = -1073741791;
              }
              else
              {
                v67.QuadPart = ((unsigned __int64)(*(_DWORD *)(v20 + 64) & 0xFFFFFF) << 16)
                             - ((*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12)
                             + v60
                             + 1;
                if ( (unsigned int)MiFlushAcquire(v33, 0LL, 0LL) )
                {
                  v41 = 0LL;
                  if ( (*(_DWORD *)(v20 + 48) & 0x100000) == 0 && *(_QWORD *)(v20 + 128) )
                  {
                    v41 = *(struct _DMA_ADAPTER **)(v20 + 128);
                    ObfReferenceObject(v41);
                  }
                  MiUnlockVad((__int64)v66, v20);
                  v42 = *(_DWORD *)(v33 + 56);
                  v74 = 0LL;
                  v73[0] = 0LL;
                  v73[1] = 0LL;
                  v75 = 0LL;
                  v77 = 0LL;
                  if ( v41 )
                  {
                    if ( (v42 & 0x20) != 0 )
                      v76 = (unsigned __int64)v41 | 1;
                    else
                      v76 = (unsigned __int64)v41 | 2;
                  }
                  else
                  {
                    v76 = v33;
                  }
                  v78 = v42;
                  v79 = 4;
                  v31 = MmExtendSection((__int64)v73, &v67, 0);
                  if ( v41 )
                    HalPutDmaAdapter(v41);
                  MiLockVad((__int64)v66, v20);
                  MiFlushRelease(v33, 0LL, 0LL);
                  if ( v31 >= 0
                    && (unsigned int)MiVadDeleted(v20) != 1
                    && v68 >= v45
                    && v68 <= v43
                    && v69 <= v43
                    && v69 >= v45
                    && ((*(_DWORD *)(v20 + 48) & 8) == 0
                     || (int)MiCheckSecuredVad(v44, v59, a1[3], ProtectionMask, *((_BYTE *)a1 + 104)) >= 0)
                    && *(__int64 *)(v20 + 120) < 0 )
                  {
                    v31 = MiSetProtectionOnSection(a1[11], v20, v59, v60, *((_DWORD *)a1 + 11), 0, &v63, (__int64)&v62);
                  }
                }
                else
                {
                  v31 = -1073741670;
                }
              }
              goto LABEL_92;
            }
            v35 = MiCommitPagefileBackedSection(
                    a1[11],
                    v20,
                    v34,
                    v60,
                    *((_DWORD *)a1 + 11),
                    v54,
                    v55,
                    &v63,
                    (__int64)&v62);
          }
          goto LABEL_47;
        }
        v36 = *((_DWORD *)a1 + 11) & 0xFFFFF9FF;
        *((_DWORD *)a1 + 11) = v36;
        v37 = *(_DWORD *)(v20 + 48) & 0xC00;
        if ( (*(_DWORD *)(v20 + 48) & 0x380) != 0 && v37 == 3072 )
        {
          v36 |= 0x400u;
        }
        else
        {
          if ( v37 != 1024 )
          {
LABEL_60:
            ProtectionMask = MiMakeProtectionMask(v36);
            if ( ProtectionMask == -1 )
              goto LABEL_61;
            goto LABEL_26;
          }
          v36 |= 0x200u;
        }
        *((_DWORD *)a1 + 11) = v36;
        goto LABEL_60;
      }
      v31 = -1073741811;
    }
LABEL_93:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (a1[5] & 0x1000000) != 0 && v31 == -1073740748 )
      MiLogMemResetInfo(v59, a1[3], 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v80, 0LL);
    return (unsigned int)v31;
  }
  return 3221225541LL;
}
