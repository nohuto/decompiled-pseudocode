/*
 * XREFs of MiAllocateVirtualMemory @ 0x14067B2A0
 * Callers:
 *     MmAllocateVirtualMemory @ 0x14067C130 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x14067D390 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14069A68C (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406D7768 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     MiFlushRelease @ 0x14022BDC4 (MiFlushRelease.c)
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x14023300C (MiIsProcessCfgEnabled.c)
 *     MiLocateVadEvent @ 0x1402506D4 (MiLocateVadEvent.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14027CA20 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiAllowProtectionChange @ 0x1402EBE64 (MiAllowProtectionChange.c)
 *     MiFlushAcquire @ 0x1403225B4 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x140324634 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x14055A2E0 (MiGetVadPageSize.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiCommitVadCfgBits @ 0x140627A50 (MiCommitVadCfgBits.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14068337C (MiCheckSecuredVad.c)
 *     EtwTiLogAllocExecVm @ 0x140699E68 (EtwTiLogAllocExecVm.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     MiLogMemResetInfo @ 0x1408C942C (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x14093A3B8 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, __int64 *a2, _QWORD *a3)
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
  int v34; // r10d
  int v35; // eax
  unsigned int v36; // edx
  int v37; // r8d
  int v38; // ecx
  int v39; // r10d
  int v40; // eax
  struct _DMA_ADAPTER *v41; // r15
  int v42; // ecx
  unsigned __int64 v43; // rdx
  int v44; // ecx
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
  char v55; // [rsp+50h] [rbp-B0h] BYREF
  char v56; // [rsp+51h] [rbp-AFh]
  __int16 v57[2]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-A0h]
  int v60; // [rsp+68h] [rbp-98h] BYREF
  int v61; // [rsp+6Ch] [rbp-94h] BYREF
  int v62; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+74h] [rbp-8Ch] BYREF
  int v64; // [rsp+78h] [rbp-88h] BYREF
  struct _KTHREAD *v65; // [rsp+80h] [rbp-80h]
  unsigned __int64 v66; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v67; // [rsp+90h] [rbp-70h]
  unsigned __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v70; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v71[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v72[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  int v78; // [rsp+FCh] [rbp-4h]
  _OWORD v79[3]; // [rsp+100h] [rbp+0h] BYREF

  v61 = 0;
  v60 = 0;
  v4 = a2;
  v62 = 0;
  v63 = 0;
  v57[0] = 0;
  *a3 = 0LL;
  memset(v79, 0, sizeof(v79));
  if ( (unsigned __int64)a2 >= 2 && *a2 == MiGetProcessPartition(*(_QWORD *)(a1 + 88)) )
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 2;
  v8 = 1;
  v9 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v7 = 0;
  v65 = CurrentThread;
  v55 = 1;
  v56 = 0;
  if ( (v9 & 0x40000000) != 0 )
  {
    if ( (v9 & 0xF0) == 0 )
      return 3221225541LL;
    v9 &= ~0x40000000u;
    v8 = 0;
    *(_DWORD *)(a1 + 44) = v9;
    v55 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  if ( ProtectionMask != -1 )
  {
    v11 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v11 )
    {
      KiStackAttachProcess(v11, 0, (__int64)v79);
      v7 |= 1u;
    }
    v12 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
    v58 = 0LL;
    if ( !v12 && v7 < 2 )
      goto LABEL_105;
    v13 = *(_DWORD *)(a1 + 40);
    if ( (v13 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v31 = -1073741811;
      goto LABEL_93;
    }
    v14 = *(_DWORD *)(a1 + 120) & 0x1A;
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
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v46) != 0 || (v46 & *(_QWORD *)a1) != 0 )
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
    if ( v7 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 104)) )
    {
      v31 = -1073741727;
      goto LABEL_93;
    }
    v15 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    v16 = *(_DWORD *)(a1 + 40);
    v57[0] = v15;
    if ( (v16 & 0x2000) != 0 )
    {
      v31 = MiReserveUserMemory(a1, v4, ProtectionMask, v8, &v58, v57);
      if ( v31 >= 0 )
        goto LABEL_34;
    }
    else if ( (v16 & 0x40000000) != 0 )
    {
      v31 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        v17 = *(_QWORD *)a1;
        v18 = *(_QWORD *)a1;
        v59 = *(_QWORD *)(a1 + 8);
        v67 = v18 >> 12;
        v68 = v59 >> 12;
        v58 = v17;
        v19 = MiObtainReferencedVadEx(v17, 0, &v60);
        v20 = (ULONG_PTR)v19;
        if ( !v19 )
        {
          v31 = v60;
          if ( v60 == -1073741664 )
            v31 = -1073741800;
          goto LABEL_93;
        }
        if ( v59 >> 12 > (*((unsigned int *)v19 + 7) | ((unsigned __int64)*((unsigned __int8 *)v19 + 33) << 32)) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        if ( (v19[12] & 0x1100000) != 0x1100000 && *(_DWORD *)(a1 + 48) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        v21 = v58;
        *a3 = v58;
        v22 = *((_DWORD *)v19 + 12);
        if ( (v22 & 0x3100000) == 0x2100000 )
        {
          v48 = v22 & 0x70;
          if ( (_BYTE)v48 == 48 )
          {
            v35 = MiCommitEnclavePages(v48, (__int64)v19, v21, v59, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_47:
            v31 = v35;
            if ( v35 < 0 )
              goto LABEL_92;
            MiUnlockAndDereferenceVad((PVOID)v20);
LABEL_34:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v50 = *(_DWORD *)(a1 + 40);
              if ( (v50 & 0x3000) != 0 )
              {
                ProcessPartition = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
                  v53 = 0x2000;
                PerfInfoLogVirtualAlloc(v58, *(_QWORD *)(a1 + 24), v52, v53, *ProcessPartition, v57[0]);
              }
              else if ( (v50 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v58, *(_QWORD *)(a1 + 24), v50);
              }
            }
            if ( (v7 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v79, 0);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                *(_QWORD *)(a1 + 88),
                *(unsigned __int8 *)(a1 + 104),
                v58,
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 40),
                *(_DWORD *)(a1 + 44));
            *a3 = v58;
            return (unsigned int)v31;
          }
          if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
          {
            v31 = -1073741664;
            goto LABEL_92;
          }
        }
        v23 = MiVadSupportsPrivateCommit((__int64)v19);
        v25 = v58;
        if ( v23 )
        {
          v26 = v59;
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 48) & 0x500000) != 0x500000 )
          {
            v31 = -1073741800;
            goto LABEL_92;
          }
          VadPageSize = MiGetVadPageSize(v24);
          v26 = v59;
          if ( (((VadPageSize << 12) - 1) & (v25 | (v59 + 1))) != 0 )
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
          v28 = *(_DWORD *)(a1 + 40);
          if ( (v28 & 0x1080000) != 0 )
          {
            v35 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v25, v26, v20, v28, *(_BYTE *)(a1 + 104));
          }
          else
          {
            if ( (ProtectionMask & 2) != 0 )
            {
              v31 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v20, ProtectionMask, v25, v26);
              if ( v31 < 0 )
                goto LABEL_92;
              if ( (!v55 || (*(_DWORD *)(v20 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v20 + 48) & 8) != 0 )
                {
                  v31 = MiCheckSecuredVad(v20, v58, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                  if ( v31 < 0 )
                    goto LABEL_92;
                  LOBYTE(v7) = v7 | 4;
                }
                v71[0] = v58;
                v71[1] = v59;
                v31 = MiCommitVadCfgBits(v20, (__int64)v71, &v55);
                if ( v31 < 0 )
                  goto LABEL_92;
                v56 = 1;
              }
              v25 = v58;
            }
            v29 = *(_DWORD *)(v20 + 48);
            v30 = *(_DWORD *)(a1 + 44);
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
                        *(_QWORD *)(a1 + 24),
                        *(_DWORD *)(a1 + 44),
                        *(_DWORD *)(a1 + 48),
                        *(_QWORD *)(a1 + 120),
                        *(_BYTE *)(a1 + 56),
                        v4,
                        &v63,
                        v57);
                if ( v31 >= 0 )
                {
                  MiUnlockAndDereferenceVad((PVOID)v20);
                  if ( v63 == 1 )
                  {
                    v70 = v58;
                    v69 = *(_QWORD *)(a1 + 24);
                    v40 = *(_DWORD *)(a1 + 44);
                    v64 = 0;
                    if ( v56 && !v55 )
                      v40 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(a1 + 88),
                      (unsigned int)&v70,
                      (unsigned int)&v69,
                      v40,
                      (__int64)&v64);
                  }
                  goto LABEL_34;
                }
LABEL_92:
                MiUnlockAndDereferenceVad((PVOID)v20);
                goto LABEL_93;
              }
              if ( !MiLocateVadEvent(v20, 64LL) )
              {
                v31 = MiCheckSecuredVad(v38, v39, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                if ( v31 < 0 )
                  goto LABEL_92;
                v25 = v58;
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
              v31 = MiCheckSecuredVad(v20, v25, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
              if ( v31 < 0 )
                goto LABEL_92;
            }
            v33 = **(_QWORD **)(v20 + 72);
            v57[0] = *(_WORD *)MiGetControlAreaPartition(v33);
            if ( *(_QWORD *)(v33 + 64) )
            {
              if ( *(__int64 *)(v20 + 120) >= 0 )
              {
                v31 = -1073741791;
              }
              else
              {
                v66 = ((unsigned __int64)(*(_DWORD *)(v20 + 64) & 0xFFFFFF) << 16)
                    - ((*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12)
                    + v59
                    + 1;
                if ( (unsigned int)MiFlushAcquire(v33, 0LL, 0LL) )
                {
                  v41 = 0LL;
                  if ( (*(_DWORD *)(v20 + 48) & 0x100000) == 0 && *(_QWORD *)(v20 + 128) )
                  {
                    v41 = *(struct _DMA_ADAPTER **)(v20 + 128);
                    ObfReferenceObject(v41);
                  }
                  MiUnlockVad((__int64)v65, v20);
                  v42 = *(_DWORD *)(v33 + 56);
                  v73 = 0LL;
                  v72[0] = 0LL;
                  v72[1] = 0LL;
                  v74 = 0LL;
                  v76 = 0LL;
                  if ( v41 )
                  {
                    if ( (v42 & 0x20) != 0 )
                      v75 = (unsigned __int64)v41 | 1;
                    else
                      v75 = (unsigned __int64)v41 | 2;
                  }
                  else
                  {
                    v75 = v33;
                  }
                  v77 = v42;
                  v78 = 4;
                  v31 = MmExtendSection(v72, &v66, 0LL);
                  if ( v41 )
                    HalPutDmaAdapter(v41);
                  MiLockVad((__int64)v65, v20);
                  MiFlushRelease(v33, 0LL, 0LL);
                  if ( v31 >= 0
                    && (unsigned int)MiVadDeleted(v20) != 1
                    && v67 >= v45
                    && v67 <= v43
                    && v68 <= v43
                    && v68 >= v45
                    && ((*(_DWORD *)(v20 + 48) & 8) == 0
                     || (int)MiCheckSecuredVad(v44, v58, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104)) >= 0)
                    && *(__int64 *)(v20 + 120) < 0 )
                  {
                    v31 = MiSetProtectionOnSection(
                            *(_QWORD *)(a1 + 88),
                            v20,
                            v58,
                            v59,
                            *(_DWORD *)(a1 + 44),
                            0,
                            &v62,
                            (__int64)&v61);
                  }
                }
                else
                {
                  v31 = -1073741670;
                }
              }
              goto LABEL_92;
            }
            v35 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 88), v20, v34, v59, *(_DWORD *)(a1 + 44), v54);
          }
          goto LABEL_47;
        }
        v36 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
        *(_DWORD *)(a1 + 44) = v36;
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
        *(_DWORD *)(a1 + 44) = v36;
        goto LABEL_60;
      }
      v31 = -1073741811;
    }
LABEL_93:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v31 == -1073740748 )
      MiLogMemResetInfo(v58, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v79, 0);
    return (unsigned int)v31;
  }
  return 3221225541LL;
}
