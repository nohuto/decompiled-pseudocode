/*
 * XREFs of MiAllocateVirtualMemory @ 0x1405ED060
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x14064D6E4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14064D860 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x14064DB20 (MmAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E17BC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiGetControlAreaPartition @ 0x1402A46F4 (MiGetControlAreaPartition.c)
 *     MiIsProcessCfgEnabled @ 0x1402A5920 (MiIsProcessCfgEnabled.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     MiFlushAcquire @ 0x140313AC8 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x140315D54 (MiResetVirtualMemory.c)
 *     MiAllowProtectionChange @ 0x140357874 (MiAllowProtectionChange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x1405562C0 (MiGetVadPageSize.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiCommitVadCfgBits @ 0x140637020 (MiCommitVadCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x140640EBC (MiCommitPagefileBackedSection.c)
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 *     EtwTiLogAllocExecVm @ 0x14070902C (EtwTiLogAllocExecVm.c)
 *     MiLogMemResetInfo @ 0x1408C229C (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409332E8 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _WORD **v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  unsigned __int8 v8; // si
  unsigned int v9; // ecx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v13; // rcx
  bool v14; // zf
  int v15; // edx
  int v16; // eax
  __int16 v17; // cx
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  volatile signed __int32 *v21; // rax
  ULONG_PTR v22; // rsi
  unsigned __int64 v23; // r8
  int v24; // ecx
  BOOL v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // edx
  int v33; // r14d
  __int64 v35; // r13
  int v36; // r10d
  int v37; // eax
  unsigned int v38; // edx
  int v39; // r8d
  int v40; // ecx
  int v41; // r10d
  int v42; // eax
  struct _DMA_ADAPTER *v43; // r15
  int v44; // ecx
  unsigned __int64 v45; // rdx
  int v46; // ecx
  unsigned __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  __int64 VadPageSize; // rax
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
  v4 = (_WORD **)a2;
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
    v13 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v13 )
    {
      KiStackAttachProcess(v13, 0LL, (__int64)v79, v11);
      v7 |= 1u;
    }
    v14 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
    v58 = 0LL;
    if ( !v14 && v7 < 2 )
      goto LABEL_105;
    v15 = *(_DWORD *)(a1 + 40);
    if ( (v15 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v33 = -1073741811;
      goto LABEL_93;
    }
    v16 = *(_DWORD *)(a1 + 120) & 0x1A;
    if ( v16 )
    {
      if ( (v16 & 2) != 0 )
      {
        v10 = 0xFFFFLL;
      }
      else if ( (v16 & 8) != 0 )
      {
        v10 = 0x1FFFFFLL;
      }
      else
      {
        v10 = -1LL;
        if ( (v16 & 0x10) != 0 )
          v10 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v10) != 0 || (v10 & *(_QWORD *)a1) != 0 )
      {
LABEL_105:
        v33 = -1073741811;
        goto LABEL_93;
      }
      v48 = v7 | 0x10;
      if ( (v15 & 0x20400000) == 0x400000 )
        v48 = v7;
      v7 = v48;
    }
    else if ( (v15 & 0x20400000) == 0x20000000 )
    {
      v7 |= 0x10u;
    }
    if ( v7 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 104)) )
    {
      v33 = -1073741727;
      goto LABEL_93;
    }
    v17 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    v18 = *(_DWORD *)(a1 + 40);
    v57[0] = v17;
    if ( (v18 & 0x2000) != 0 )
    {
      v33 = MiReserveUserMemory(a1, (_DWORD)v4, ProtectionMask, v8, (__int64)&v58, (__int64)v57);
      if ( v33 >= 0 )
        goto LABEL_34;
    }
    else if ( (v18 & 0x40000000) != 0 )
    {
      v33 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        v19 = *(_QWORD *)a1;
        v20 = *(_QWORD *)a1;
        v59 = *(_QWORD *)(a1 + 8);
        v67 = v20 >> 12;
        v68 = v59 >> 12;
        v58 = v19;
        v21 = MiObtainReferencedVadEx(v19, 0, &v60);
        v22 = (ULONG_PTR)v21;
        if ( !v21 )
        {
          v33 = v60;
          if ( v60 == -1073741664 )
            v33 = -1073741800;
          goto LABEL_93;
        }
        if ( v59 >> 12 > (*((unsigned int *)v21 + 7) | ((unsigned __int64)*((unsigned __int8 *)v21 + 33) << 32)) )
        {
          v33 = -1073741800;
          goto LABEL_92;
        }
        if ( (v21[12] & 0x1100000) != 0x1100000 && *(_DWORD *)(a1 + 48) )
        {
          v33 = -1073741800;
          goto LABEL_92;
        }
        v23 = v58;
        *a3 = v58;
        v24 = *((_DWORD *)v21 + 12);
        if ( (v24 & 0x3100000) == 0x2100000 )
        {
          v49 = v24 & 0x70;
          if ( (_BYTE)v49 == 48 )
          {
            v37 = MiCommitEnclavePages(v49, (__int64)v21, v23, v59, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_47:
            v33 = v37;
            if ( v37 < 0 )
              goto LABEL_92;
            MiUnlockAndDereferenceVad((char *)v22);
LABEL_34:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v11 = (_DWORD *)*(unsigned int *)(a1 + 40);
              if ( ((unsigned __int16)v11 & 0x3000) != 0 )
              {
                ProcessPartition = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
                  v53 = 0x2000;
                PerfInfoLogVirtualAlloc(v58, *(_QWORD *)(a1 + 24), v52, v53, *ProcessPartition, v57[0]);
              }
              else if ( ((unsigned int)v11 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v58, *(_QWORD *)(a1 + 24), (unsigned int)v11);
              }
            }
            if ( (v7 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v79, 0LL, v10, v11);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                *(_QWORD *)(a1 + 88),
                *(unsigned __int8 *)(a1 + 104),
                v58,
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 40),
                *(_DWORD *)(a1 + 44));
            *a3 = v58;
            return (unsigned int)v33;
          }
          if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
          {
            v33 = -1073741664;
            goto LABEL_92;
          }
        }
        v25 = MiVadSupportsPrivateCommit((__int64)v21);
        v27 = v58;
        if ( v25 )
        {
          v28 = v59;
        }
        else
        {
          if ( (*(_DWORD *)(v22 + 48) & 0x500000) != 0x500000 )
          {
            v33 = -1073741800;
            goto LABEL_92;
          }
          VadPageSize = MiGetVadPageSize(v26);
          v28 = v59;
          if ( (((VadPageSize << 12) - 1) & (v27 | (v59 + 1))) != 0 )
          {
            v33 = -1073741811;
            goto LABEL_92;
          }
        }
        v29 = *(unsigned int *)(v22 + 52);
        LODWORD(v29) = v29 & 0x7FFFFFFF;
        if ( (v29 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31)) >= 0x7FFFFFFFDLL )
        {
          v33 = -1073741800;
          goto LABEL_92;
        }
        if ( (*(_DWORD *)(v22 + 48) & 0x70) != 0x40 )
        {
LABEL_26:
          v30 = *(_DWORD *)(a1 + 40);
          if ( (v30 & 0x1080000) != 0 )
          {
            v37 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v27, v28, v22, v30, *(_BYTE *)(a1 + 104));
          }
          else
          {
            if ( (ProtectionMask & 2) != 0 )
            {
              v33 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v22, ProtectionMask, v27, v28);
              if ( v33 < 0 )
                goto LABEL_92;
              if ( (!v55 || (*(_DWORD *)(v22 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v22 + 48) & 8) != 0 )
                {
                  v33 = MiCheckSecuredVad(v22, v58, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                  if ( v33 < 0 )
                    goto LABEL_92;
                  LOBYTE(v7) = v7 | 4;
                }
                v71[0] = v58;
                v71[1] = v59;
                v33 = MiCommitVadCfgBits(v22, v71, &v55);
                if ( v33 < 0 )
                  goto LABEL_92;
                v56 = 1;
              }
              v27 = v58;
            }
            v31 = *(_DWORD *)(v22 + 48);
            v32 = *(_DWORD *)(a1 + 44);
            if ( (v31 & 0x100000) != 0 )
            {
              if ( (v32 & 0x88) != 0 || (v31 & 0x70) == 0x40 && (v32 & 0xFFFFF9F9) != 0 )
                goto LABEL_61;
              if ( (v31 & 8) == 0 )
              {
LABEL_32:
                v33 = MiCommitExistingVad(
                        v22,
                        v27,
                        *(_QWORD *)(a1 + 24),
                        *(_DWORD *)(a1 + 44),
                        *(_DWORD *)(a1 + 48),
                        *(_QWORD *)(a1 + 120),
                        *(_BYTE *)(a1 + 56),
                        v4,
                        &v63,
                        v57);
                if ( v33 >= 0 )
                {
                  MiUnlockAndDereferenceVad((char *)v22);
                  if ( v63 == 1 )
                  {
                    v70 = v58;
                    v69 = *(_QWORD *)(a1 + 24);
                    v42 = *(_DWORD *)(a1 + 44);
                    v64 = 0;
                    if ( v56 && !v55 )
                      v42 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(a1 + 88),
                      (unsigned int)&v70,
                      (unsigned int)&v69,
                      v42,
                      (__int64)&v64);
                  }
                  goto LABEL_34;
                }
LABEL_92:
                MiUnlockAndDereferenceVad((char *)v22);
                goto LABEL_93;
              }
              if ( !MiLocateVadEvent(v22, 64LL) )
              {
                v33 = MiCheckSecuredVad(v40, v41, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                if ( v33 < 0 )
                  goto LABEL_92;
                v27 = v58;
                goto LABEL_32;
              }
LABEL_61:
              v33 = -1073741755;
              goto LABEL_92;
            }
            if ( (v32 & 0x600) != 0 )
              goto LABEL_61;
            if ( (v31 & 8) != 0 && (v7 & 4) == 0 )
            {
              v33 = MiCheckSecuredVad(v22, v27, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
              if ( v33 < 0 )
                goto LABEL_92;
            }
            v35 = **(_QWORD **)(v22 + 72);
            v57[0] = *(_WORD *)MiGetControlAreaPartition(v35);
            if ( *(_QWORD *)(v35 + 64) )
            {
              if ( *(__int64 *)(v22 + 120) >= 0 )
              {
                v33 = -1073741791;
              }
              else
              {
                v66 = ((unsigned __int64)(*(_DWORD *)(v22 + 64) & 0xFFFFFF) << 16)
                    - ((*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12)
                    + v59
                    + 1;
                if ( (unsigned int)MiFlushAcquire(v35, 0LL, 0LL) )
                {
                  v43 = 0LL;
                  if ( (*(_DWORD *)(v22 + 48) & 0x100000) == 0 && *(_QWORD *)(v22 + 128) )
                  {
                    v43 = *(struct _DMA_ADAPTER **)(v22 + 128);
                    ObfReferenceObject(v43);
                  }
                  MiUnlockVad((__int64)v65, v22);
                  v44 = *(_DWORD *)(v35 + 56);
                  v73 = 0LL;
                  v72[0] = 0LL;
                  v72[1] = 0LL;
                  v74 = 0LL;
                  v76 = 0LL;
                  if ( v43 )
                  {
                    if ( (v44 & 0x20) != 0 )
                      v75 = (unsigned __int64)v43 | 1;
                    else
                      v75 = (unsigned __int64)v43 | 2;
                  }
                  else
                  {
                    v75 = v35;
                  }
                  v77 = v44;
                  v78 = 4;
                  v33 = MmExtendSection(v72, &v66, 0LL);
                  if ( v43 )
                    HalPutDmaAdapter(v43);
                  MiLockVad((__int64)v65, v22);
                  MiFlushRelease(v35, 0LL, 0LL);
                  if ( v33 >= 0
                    && (unsigned int)MiVadDeleted(v22) != 1
                    && v67 >= v47
                    && v67 <= v45
                    && v68 <= v45
                    && v68 >= v47
                    && ((*(_DWORD *)(v22 + 48) & 8) == 0
                     || (int)MiCheckSecuredVad(v46, v58, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104)) >= 0)
                    && *(__int64 *)(v22 + 120) < 0 )
                  {
                    v33 = MiSetProtectionOnSection(
                            *(_QWORD *)(a1 + 88),
                            v22,
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
                  v33 = -1073741670;
                }
              }
              goto LABEL_92;
            }
            v37 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 88), v22, v36, v59, *(_DWORD *)(a1 + 44), v54);
          }
          goto LABEL_47;
        }
        v38 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
        *(_DWORD *)(a1 + 44) = v38;
        v39 = *(_DWORD *)(v22 + 48) & 0xC00;
        if ( (*(_DWORD *)(v22 + 48) & 0x380) != 0 && v39 == 3072 )
        {
          v38 |= 0x400u;
        }
        else
        {
          if ( v39 != 1024 )
          {
LABEL_60:
            ProtectionMask = MiMakeProtectionMask(v38);
            if ( ProtectionMask == -1 )
              goto LABEL_61;
            goto LABEL_26;
          }
          v38 |= 0x200u;
        }
        *(_DWORD *)(a1 + 44) = v38;
        goto LABEL_60;
      }
      v33 = -1073741811;
    }
LABEL_93:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v33 == -1073740748 )
      MiLogMemResetInfo(v58, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v79, 0LL, v10, v11);
    return (unsigned int)v33;
  }
  return 3221225541LL;
}
