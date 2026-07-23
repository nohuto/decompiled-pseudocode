/*
 * XREFs of MiAllocateVirtualMemory @ 0x1406E7DB0
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1405F3A38 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1406E9EA0 (NtAllocateVirtualMemory.c)
 * Callees:
 *     MiFlushAcquire @ 0x14021E208 (MiFlushAcquire.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiResetVirtualMemory @ 0x140243BEC (MiResetVirtualMemory.c)
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiAllowProtectionChange @ 0x14027E54C (MiAllowProtectionChange.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     MiFlushRelease @ 0x14031FD60 (MiFlushRelease.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x14055BFF0 (MiGetVadPageSize.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     MiCommitPagefileBackedSection @ 0x1405FAC44 (MiCommitPagefileBackedSection.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     EtwTiLogAllocExecVm @ 0x140690504 (EtwTiLogAllocExecVm.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiLogMemResetInfo @ 0x1408C6D4C (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937D58 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _WORD **v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  unsigned __int8 v8; // si
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
  __int64 v19; // rax
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
  __int64 v38; // rcx
  unsigned __int64 v39; // r10
  int v40; // eax
  struct _DMA_ADAPTER *v41; // r15
  int v42; // ecx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  __int64 VadPageSize; // rax
  unsigned int v50; // r9d
  __int16 *ProcessPartition; // rax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-D8h]
  __int64 v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+30h] [rbp-D0h]
  char v58; // [rsp+50h] [rbp-B0h] BYREF
  char v59; // [rsp+51h] [rbp-AFh]
  __int16 v60[2]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+68h] [rbp-98h] BYREF
  int v64; // [rsp+6Ch] [rbp-94h] BYREF
  int v65; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+74h] [rbp-8Ch] BYREF
  int v67; // [rsp+78h] [rbp-88h] BYREF
  struct _KTHREAD *v68; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER v69; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-70h]
  unsigned __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v74[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  _OWORD v82[3]; // [rsp+100h] [rbp+0h] BYREF

  v64 = 0;
  v63 = 0;
  v4 = (_WORD **)a2;
  v65 = 0;
  v66 = 0;
  v60[0] = 0;
  *a3 = 0LL;
  memset(v82, 0, sizeof(v82));
  if ( (unsigned __int64)a2 >= 2 && *a2 == MiGetProcessPartition(*(_QWORD *)(a1 + 88)) )
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 2;
  v8 = 1;
  v9 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v7 = 0;
  v68 = CurrentThread;
  v58 = 1;
  v59 = 0;
  if ( (v9 & 0x40000000) != 0 )
  {
    if ( (v9 & 0xF0) == 0 )
      return 3221225541LL;
    v9 &= ~0x40000000u;
    v8 = 0;
    *(_DWORD *)(a1 + 44) = v9;
    v58 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  if ( ProtectionMask != -1 )
  {
    v11 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v11 )
    {
      KiStackAttachProcess(v11, 0, (__int64)v82);
      v7 |= 1u;
    }
    v12 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
    v61 = 0LL;
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
    v60[0] = v15;
    if ( (v16 & 0x2000) != 0 )
    {
      v31 = MiReserveUserMemory(a1, (_DWORD)v4, ProtectionMask, v8, (__int64)&v61, (__int64)v60);
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
        v62 = *(_QWORD *)(a1 + 8);
        v70 = v18 >> 12;
        v71 = v62 >> 12;
        v61 = v17;
        v19 = MiObtainReferencedVadEx(v17, 0, &v63);
        v20 = v19;
        if ( !v19 )
        {
          v31 = v63;
          if ( v63 == -1073741664 )
            v31 = -1073741800;
          goto LABEL_93;
        }
        if ( v62 >> 12 > (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        if ( (*(_DWORD *)(v19 + 48) & 0x1100000) != 0x1100000 && *(_DWORD *)(a1 + 48) )
        {
          v31 = -1073741800;
          goto LABEL_92;
        }
        v21 = v61;
        *a3 = v61;
        v22 = *(_DWORD *)(v19 + 48);
        if ( (v22 & 0x3100000) == 0x2100000 )
        {
          v48 = v22 & 0x70;
          if ( (_BYTE)v48 == 48 )
          {
            v35 = MiCommitEnclavePages(v48, v19, v21, v62, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_47:
            v31 = v35;
            if ( v35 < 0 )
              goto LABEL_92;
            MiUnlockAndDereferenceVad((char *)v20);
LABEL_34:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v50 = *(_DWORD *)(a1 + 40);
              if ( (v50 & 0x3000) != 0 )
              {
                ProcessPartition = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
                  v53 = 0x2000;
                PerfInfoLogVirtualAlloc(v61, *(_QWORD *)(a1 + 24), v52, v53, *ProcessPartition, v60[0]);
              }
              else if ( (v50 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v61, *(_QWORD *)(a1 + 24), v50);
              }
            }
            if ( (v7 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v82, 0LL);
            if ( (ProtectionMask & 2) != 0 )
            {
              LODWORD(v56) = *(_DWORD *)(a1 + 44);
              LODWORD(v54) = *(_DWORD *)(a1 + 40);
              EtwTiLogAllocExecVm(*(_QWORD *)(a1 + 88), *(_BYTE *)(a1 + 104), v61, *(_QWORD *)(a1 + 32), v54, v56);
            }
            *a3 = v61;
            return (unsigned int)v31;
          }
          if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
          {
            v31 = -1073741664;
            goto LABEL_92;
          }
        }
        v23 = MiVadSupportsPrivateCommit(v19);
        v25 = v61;
        if ( v23 )
        {
          v26 = v62;
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 48) & 0x500000) != 0x500000 )
          {
            v31 = -1073741800;
            goto LABEL_92;
          }
          VadPageSize = MiGetVadPageSize(v24);
          v26 = v62;
          if ( (((VadPageSize << 12) - 1) & (v25 | (v62 + 1))) != 0 )
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
              if ( (!v58 || (*(_DWORD *)(v20 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v20 + 48) & 8) != 0 )
                {
                  v31 = MiCheckSecuredVad(v20, v61, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                  if ( v31 < 0 )
                    goto LABEL_92;
                  LOBYTE(v7) = v7 | 4;
                }
                v74[0] = v61;
                v74[1] = v62;
                v31 = MiCommitVadCfgBits(v20, (__int64)v74, &v58);
                if ( v31 < 0 )
                  goto LABEL_92;
                v59 = 1;
              }
              v25 = v61;
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
                        &v66,
                        v60);
                if ( v31 >= 0 )
                {
                  MiUnlockAndDereferenceVad((char *)v20);
                  if ( v66 == 1 )
                  {
                    v73 = v61;
                    v72 = *(_QWORD *)(a1 + 24);
                    v40 = *(_DWORD *)(a1 + 44);
                    v67 = 0;
                    if ( v59 && !v58 )
                      v40 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(a1 + 88),
                      (unsigned int)&v73,
                      (unsigned int)&v72,
                      v40,
                      (__int64)&v67);
                  }
                  goto LABEL_34;
                }
LABEL_92:
                MiUnlockAndDereferenceVad((char *)v20);
                goto LABEL_93;
              }
              if ( !MiLocateVadEvent(v20) )
              {
                v31 = MiCheckSecuredVad(v38, v39, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                if ( v31 < 0 )
                  goto LABEL_92;
                v25 = v61;
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
            v60[0] = *(_WORD *)MiGetControlAreaPartition(v33);
            if ( *(_QWORD *)(v33 + 64) )
            {
              if ( *(__int64 *)(v20 + 120) >= 0 )
              {
                v31 = -1073741791;
              }
              else
              {
                v69.QuadPart = ((unsigned __int64)(*(_DWORD *)(v20 + 64) & 0xFFFFFF) << 16)
                             - ((*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12)
                             + v62
                             + 1;
                if ( (unsigned int)MiFlushAcquire(v33, 0LL, 0LL) )
                {
                  v41 = 0LL;
                  if ( (*(_DWORD *)(v20 + 48) & 0x100000) == 0 && *(_QWORD *)(v20 + 128) )
                  {
                    v41 = *(struct _DMA_ADAPTER **)(v20 + 128);
                    ObfReferenceObject(v41);
                  }
                  MiUnlockVad((__int64)v68, v20);
                  v42 = *(_DWORD *)(v33 + 56);
                  v76 = 0LL;
                  v75[0] = 0LL;
                  v75[1] = 0LL;
                  v77 = 0LL;
                  v79 = 0LL;
                  if ( v41 )
                  {
                    if ( (v42 & 0x20) != 0 )
                      v78 = (unsigned __int64)v41 | 1;
                    else
                      v78 = (unsigned __int64)v41 | 2;
                  }
                  else
                  {
                    v78 = v33;
                  }
                  v80 = v42;
                  v81 = 4;
                  v31 = MmExtendSection((__int64)v75, &v69, 0);
                  if ( v41 )
                    HalPutDmaAdapter(v41);
                  MiLockVad((__int64)v68, v20);
                  MiFlushRelease(v33, 0LL, 0LL);
                  if ( v31 >= 0
                    && (unsigned int)MiVadDeleted(v20) != 1
                    && v70 >= v45
                    && v70 <= v43
                    && v71 <= v43
                    && v71 >= v45
                    && ((*(_DWORD *)(v20 + 48) & 8) == 0
                     || (int)MiCheckSecuredVad(v44, v61, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104)) >= 0)
                    && *(__int64 *)(v20 + 120) < 0 )
                  {
                    v31 = MiSetProtectionOnSection(
                            *(_QWORD *)(a1 + 88),
                            v20,
                            v61,
                            v62,
                            *(_DWORD *)(a1 + 44),
                            0,
                            &v65,
                            (__int64)&v64);
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
                    *(_QWORD *)(a1 + 88),
                    v20,
                    v34,
                    v62,
                    *(_DWORD *)(a1 + 44),
                    v55,
                    v57,
                    &v65,
                    (__int64)&v64);
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
      MiLogMemResetInfo(v61, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v82, 0LL);
    return (unsigned int)v31;
  }
  return 3221225541LL;
}
