/*
 * XREFs of MiAllocateVirtualMemory @ 0x1405F8650
 * Callers:
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1405FA740 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406944E8 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406B61EC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     MiGetProcessPartition @ 0x14021AD40 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B240 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiIsProcessCfgEnabled @ 0x14025B020 (MiIsProcessCfgEnabled.c)
 *     MiVadDeleted @ 0x14025B330 (MiVadDeleted.c)
 *     MiGetControlAreaPartition @ 0x14025B3A4 (MiGetControlAreaPartition.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiAllowProtectionChange @ 0x14025F698 (MiAllowProtectionChange.c)
 *     MiFlushAcquire @ 0x1402A0C88 (MiFlushAcquire.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiResetVirtualMemory @ 0x1402C538C (MiResetVirtualMemory.c)
 *     MiLocateVadEvent @ 0x1402FE3B4 (MiLocateVadEvent.c)
 *     MiUnlockVad @ 0x140314658 (MiUnlockVad.c)
 *     MiFlushRelease @ 0x140315010 (MiFlushRelease.c)
 *     MiLockVad @ 0x140316758 (MiLockVad.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x14055BDB0 (MiGetVadPageSize.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiCommitVadCfgBits @ 0x14061BCBC (MiCommitVadCfgBits.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     EtwTiLogAllocExecVm @ 0x14062909C (EtwTiLogAllocExecVm.c)
 *     MiCheckSecuredVad @ 0x1406623F8 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x1406894BC (MmExtendSection.c)
 *     MiCommitPagefileBackedSection @ 0x14069BA84 (MiCommitPagefileBackedSection.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiLogMemResetInfo @ 0x1408C6BEC (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937B88 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _WORD **v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  unsigned __int8 v8; // si
  unsigned int v9; // ecx
  _DWORD *v10; // r9
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v12; // rcx
  bool v13; // zf
  int v14; // edx
  int v15; // eax
  __int16 v16; // cx
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  volatile signed __int32 *v20; // rax
  ULONG_PTR v21; // rsi
  unsigned __int64 v22; // r8
  int v23; // ecx
  BOOL v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // edx
  int v32; // r14d
  __int64 v34; // r13
  int v35; // r10d
  int v36; // eax
  unsigned int v37; // edx
  int v38; // r8d
  int v39; // ecx
  int v40; // r10d
  int v41; // eax
  struct _DMA_ADAPTER *v42; // r15
  int v43; // ecx
  unsigned __int64 v44; // rdx
  int v45; // ecx
  unsigned __int64 v46; // r8
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  __int64 VadPageSize; // rax
  unsigned int v51; // r9d
  __int16 *ProcessPartition; // rax
  int v53; // r8d
  int v54; // r9d
  int v55; // [rsp+28h] [rbp-D8h]
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
  unsigned __int64 v67; // [rsp+88h] [rbp-78h] BYREF
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
  v4 = (_WORD **)a2;
  v63 = 0;
  v64 = 0;
  v58[0] = 0;
  *a3 = 0LL;
  memset(v80, 0, sizeof(v80));
  if ( (unsigned __int64)a2 >= 2 && *a2 == MiGetProcessPartition(*(_QWORD *)(a1 + 88)) )
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 2;
  v8 = 1;
  v9 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
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
    *(_DWORD *)(a1 + 44) = v9;
    v56 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  if ( ProtectionMask != -1 )
  {
    v12 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v12 )
    {
      KiStackAttachProcess(v12, 0LL, (__int64)v80, v10);
      v7 |= 1u;
    }
    v13 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
    v59 = 0LL;
    if ( !v13 && v7 < 2 )
      goto LABEL_105;
    v14 = *(_DWORD *)(a1 + 40);
    if ( (v14 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v32 = -1073741811;
      goto LABEL_93;
    }
    v15 = *(_DWORD *)(a1 + 120) & 0x1A;
    if ( v15 )
    {
      if ( (v15 & 2) != 0 )
      {
        v47 = 0xFFFFLL;
      }
      else if ( (v15 & 8) != 0 )
      {
        v47 = 0x1FFFFFLL;
      }
      else
      {
        v47 = -1LL;
        if ( (v15 & 0x10) != 0 )
          v47 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v47) != 0 || (v47 & *(_QWORD *)a1) != 0 )
      {
LABEL_105:
        v32 = -1073741811;
        goto LABEL_93;
      }
      v48 = v7 | 0x10;
      if ( (v14 & 0x20400000) == 0x400000 )
        v48 = v7;
      v7 = v48;
    }
    else if ( (v14 & 0x20400000) == 0x20000000 )
    {
      v7 |= 0x10u;
    }
    if ( v7 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 104)) )
    {
      v32 = -1073741727;
      goto LABEL_93;
    }
    v16 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    v17 = *(_DWORD *)(a1 + 40);
    v58[0] = v16;
    if ( (v17 & 0x2000) != 0 )
    {
      v32 = MiReserveUserMemory(a1, (_DWORD)v4, ProtectionMask, v8, (__int64)&v59, (__int64)v58);
      if ( v32 >= 0 )
        goto LABEL_34;
    }
    else if ( (v17 & 0x40000000) != 0 )
    {
      v32 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        v18 = *(_QWORD *)a1;
        v19 = *(_QWORD *)a1;
        v60 = *(_QWORD *)(a1 + 8);
        v68 = v19 >> 12;
        v69 = v60 >> 12;
        v59 = v18;
        v20 = MiObtainReferencedVadEx(v18, 0, &v61);
        v21 = (ULONG_PTR)v20;
        if ( !v20 )
        {
          v32 = v61;
          if ( v61 == -1073741664 )
            v32 = -1073741800;
          goto LABEL_93;
        }
        if ( v60 >> 12 > (*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32)) )
        {
          v32 = -1073741800;
          goto LABEL_92;
        }
        if ( (v20[12] & 0x1100000) != 0x1100000 && *(_DWORD *)(a1 + 48) )
        {
          v32 = -1073741800;
          goto LABEL_92;
        }
        v22 = v59;
        *a3 = v59;
        v23 = *((_DWORD *)v20 + 12);
        if ( (v23 & 0x3100000) == 0x2100000 )
        {
          v49 = v23 & 0x70;
          if ( (_BYTE)v49 == 48 )
          {
            v36 = MiCommitEnclavePages(v49, (__int64)v20, v22, v60, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_47:
            v32 = v36;
            if ( v36 < 0 )
              goto LABEL_92;
            MiUnlockAndDereferenceVad((char *)v21);
LABEL_34:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v51 = *(_DWORD *)(a1 + 40);
              if ( (v51 & 0x3000) != 0 )
              {
                ProcessPartition = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
                  v54 = 0x2000;
                PerfInfoLogVirtualAlloc(v59, *(_QWORD *)(a1 + 24), v53, v54, *ProcessPartition, v58[0]);
              }
              else if ( (v51 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v59, *(_QWORD *)(a1 + 24), v51);
              }
            }
            if ( (v7 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v80, 0);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                *(_QWORD *)(a1 + 88),
                *(unsigned __int8 *)(a1 + 104),
                v59,
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 40),
                *(_DWORD *)(a1 + 44));
            *a3 = v59;
            return (unsigned int)v32;
          }
          if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
          {
            v32 = -1073741664;
            goto LABEL_92;
          }
        }
        v24 = MiVadSupportsPrivateCommit((__int64)v20);
        v26 = v59;
        if ( v24 )
        {
          v27 = v60;
        }
        else
        {
          if ( (*(_DWORD *)(v21 + 48) & 0x500000) != 0x500000 )
          {
            v32 = -1073741800;
            goto LABEL_92;
          }
          VadPageSize = MiGetVadPageSize(v25);
          v27 = v60;
          if ( (((VadPageSize << 12) - 1) & (v26 | (v60 + 1))) != 0 )
          {
            v32 = -1073741811;
            goto LABEL_92;
          }
        }
        v28 = *(unsigned int *)(v21 + 52);
        LODWORD(v28) = v28 & 0x7FFFFFFF;
        if ( (v28 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31)) >= 0x7FFFFFFFDLL )
        {
          v32 = -1073741800;
          goto LABEL_92;
        }
        if ( (*(_DWORD *)(v21 + 48) & 0x70) != 0x40 )
        {
LABEL_26:
          v29 = *(_DWORD *)(a1 + 40);
          if ( (v29 & 0x1080000) != 0 )
          {
            v36 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v26, v27, v21, v29, *(_BYTE *)(a1 + 104));
          }
          else
          {
            if ( (ProtectionMask & 2) != 0 )
            {
              v32 = MiAllowProtectionChange(
                      *(_QWORD *)(a1 + 88),
                      *(_QWORD *)(a1 + 96),
                      v21,
                      (_DWORD *)ProtectionMask,
                      v26,
                      v27);
              if ( v32 < 0 )
                goto LABEL_92;
              if ( (!v56 || (*(_DWORD *)(v21 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v21 + 48) & 8) != 0 )
                {
                  v32 = MiCheckSecuredVad(v21, v59, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                  if ( v32 < 0 )
                    goto LABEL_92;
                  LOBYTE(v7) = v7 | 4;
                }
                v72[0] = v59;
                v72[1] = v60;
                v32 = MiCommitVadCfgBits(v21, v72, &v56);
                if ( v32 < 0 )
                  goto LABEL_92;
                v57 = 1;
              }
              v26 = v59;
            }
            v30 = *(_DWORD *)(v21 + 48);
            v31 = *(_DWORD *)(a1 + 44);
            if ( (v30 & 0x100000) != 0 )
            {
              if ( (v31 & 0x88) != 0 || (v30 & 0x70) == 0x40 && (v31 & 0xFFFFF9F9) != 0 )
                goto LABEL_61;
              if ( (v30 & 8) == 0 )
              {
LABEL_32:
                v32 = MiCommitExistingVad(
                        v21,
                        v26,
                        *(_QWORD *)(a1 + 24),
                        *(_DWORD *)(a1 + 44),
                        *(_DWORD *)(a1 + 48),
                        *(_QWORD *)(a1 + 120),
                        *(_BYTE *)(a1 + 56),
                        v4,
                        &v64,
                        v58);
                if ( v32 >= 0 )
                {
                  MiUnlockAndDereferenceVad((char *)v21);
                  if ( v64 == 1 )
                  {
                    v71 = v59;
                    v70 = *(_QWORD *)(a1 + 24);
                    v41 = *(_DWORD *)(a1 + 44);
                    v65 = 0;
                    if ( v57 && !v56 )
                      v41 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(a1 + 88),
                      (unsigned int)&v71,
                      (unsigned int)&v70,
                      v41,
                      (__int64)&v65);
                  }
                  goto LABEL_34;
                }
LABEL_92:
                MiUnlockAndDereferenceVad((char *)v21);
                goto LABEL_93;
              }
              if ( !MiLocateVadEvent(v21, 64LL) )
              {
                v32 = MiCheckSecuredVad(v39, v40, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                if ( v32 < 0 )
                  goto LABEL_92;
                v26 = v59;
                goto LABEL_32;
              }
LABEL_61:
              v32 = -1073741755;
              goto LABEL_92;
            }
            if ( (v31 & 0x600) != 0 )
              goto LABEL_61;
            if ( (v30 & 8) != 0 && (v7 & 4) == 0 )
            {
              v32 = MiCheckSecuredVad(v21, v26, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
              if ( v32 < 0 )
                goto LABEL_92;
            }
            v34 = **(_QWORD **)(v21 + 72);
            v58[0] = *(_WORD *)MiGetControlAreaPartition(v34);
            if ( *(_QWORD *)(v34 + 64) )
            {
              if ( *(__int64 *)(v21 + 120) >= 0 )
              {
                v32 = -1073741791;
              }
              else
              {
                v67 = ((unsigned __int64)(*(_DWORD *)(v21 + 64) & 0xFFFFFF) << 16)
                    - ((*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12)
                    + v60
                    + 1;
                if ( (unsigned int)MiFlushAcquire(v34, 0LL, 0LL) )
                {
                  v42 = 0LL;
                  if ( (*(_DWORD *)(v21 + 48) & 0x100000) == 0 && *(_QWORD *)(v21 + 128) )
                  {
                    v42 = *(struct _DMA_ADAPTER **)(v21 + 128);
                    ObfReferenceObject(v42);
                  }
                  MiUnlockVad((__int64)v66, v21);
                  v43 = *(_DWORD *)(v34 + 56);
                  v74 = 0LL;
                  v73[0] = 0LL;
                  v73[1] = 0LL;
                  v75 = 0LL;
                  v77 = 0LL;
                  if ( v42 )
                  {
                    if ( (v43 & 0x20) != 0 )
                      v76 = (unsigned __int64)v42 | 1;
                    else
                      v76 = (unsigned __int64)v42 | 2;
                  }
                  else
                  {
                    v76 = v34;
                  }
                  v78 = v43;
                  v79 = 4;
                  v32 = MmExtendSection(v73, &v67, 0LL);
                  if ( v42 )
                    HalPutDmaAdapter(v42);
                  MiLockVad((__int64)v66, v21);
                  MiFlushRelease(v34, 0LL, 0LL);
                  if ( v32 >= 0
                    && (unsigned int)MiVadDeleted(v21) != 1
                    && v68 >= v46
                    && v68 <= v44
                    && v69 <= v44
                    && v69 >= v46
                    && ((*(_DWORD *)(v21 + 48) & 8) == 0
                     || (int)MiCheckSecuredVad(v45, v59, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104)) >= 0)
                    && *(__int64 *)(v21 + 120) < 0 )
                  {
                    v32 = MiSetProtectionOnSection(
                            *(_QWORD *)(a1 + 88),
                            v21,
                            v59,
                            v60,
                            *(_DWORD *)(a1 + 44),
                            0,
                            &v63,
                            (__int64)&v62);
                  }
                }
                else
                {
                  v32 = -1073741670;
                }
              }
              goto LABEL_92;
            }
            v36 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 88), v21, v35, v60, *(_DWORD *)(a1 + 44), v55);
          }
          goto LABEL_47;
        }
        v37 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
        *(_DWORD *)(a1 + 44) = v37;
        v38 = *(_DWORD *)(v21 + 48) & 0xC00;
        if ( (*(_DWORD *)(v21 + 48) & 0x380) != 0 && v38 == 3072 )
        {
          v37 |= 0x400u;
        }
        else
        {
          if ( v38 != 1024 )
          {
LABEL_60:
            ProtectionMask = MiMakeProtectionMask(v37);
            if ( ProtectionMask == -1 )
              goto LABEL_61;
            goto LABEL_26;
          }
          v37 |= 0x200u;
        }
        *(_DWORD *)(a1 + 44) = v37;
        goto LABEL_60;
      }
      v32 = -1073741811;
    }
LABEL_93:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v32 == -1073740748 )
      MiLogMemResetInfo(v59, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v80, 0);
    return (unsigned int)v32;
  }
  return 3221225541LL;
}
