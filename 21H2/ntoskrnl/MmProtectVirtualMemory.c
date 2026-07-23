/*
 * XREFs of MmProtectVirtualMemory @ 0x1406E97C0
 * Callers:
 *     KiTpWriteUmMemory @ 0x14051D864 (KiTpWriteUmMemory.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406E85A0 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiAllowProtectionChange @ 0x14027E54C (MiAllowProtectionChange.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     xHalUnmaskInterrupt @ 0x14036D940 (xHalUnmaskInterrupt.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiGetVadPageSize @ 0x14055BFF0 (MiGetVadPageSize.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiIsRangeFullyCommitted @ 0x1407076A0 (MiIsRangeFullyCommitted.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v6; // r15d
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  int ProtectionMask; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  ULONG_PTR v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // edx
  int v19; // r9d
  int v20; // eax
  int v21; // r12d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rcx
  int v24; // ecx
  char *v25; // rcx
  int v26; // r12d
  unsigned int v28; // ebx
  char v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rcx
  __int16 v34; // cx
  __int64 VadPageSize; // rax
  int v36; // ebx
  int v37; // edx
  int v38; // [rsp+28h] [rbp-100h]
  unsigned int v39; // [rsp+60h] [rbp-C8h]
  int v40; // [rsp+68h] [rbp-C0h] BYREF
  int v41; // [rsp+6Ch] [rbp-BCh] BYREF
  int v42; // [rsp+70h] [rbp-B8h]
  int v43; // [rsp+74h] [rbp-B4h] BYREF
  _QWORD *v44; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+80h] [rbp-A8h]
  int v46; // [rsp+88h] [rbp-A0h]
  int v47; // [rsp+8Ch] [rbp-9Ch]
  PVOID P; // [rsp+90h] [rbp-98h]
  unsigned __int64 v49; // [rsp+98h] [rbp-90h]
  int v50; // [rsp+A0h] [rbp-88h]
  unsigned int v51; // [rsp+A4h] [rbp-84h]
  __int64 v52; // [rsp+A8h] [rbp-80h]
  _QWORD *Teb; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v57; // [rsp+D0h] [rbp-58h]
  _QWORD v58[10]; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v60; // [rsp+138h] [rbp+10h]

  v60 = a2;
  v6 = 0;
  v41 = 0;
  v40 = 0;
  *a6 = 1;
  v43 = 0;
  v47 = 1;
  v7 = *a3;
  v49 = v7;
  v54 = v7;
  v8 = *a4;
  v52 = v8;
  v55 = v8;
  v9 = a5 & 0x7F800;
  v50 = a5 & 0x7F800;
  if ( (a5 & 0x7F800) != 0 )
  {
    v26 = xHalUnmaskInterrupt();
    v41 = v26;
    if ( v26 < 0 )
      return (unsigned int)v26;
  }
  v42 = a5 >> 31;
  LODWORD(P) = a5 >> 31;
  v10 = a5 & 0xB0000000;
  v51 = a5 & 0xB0000000;
  v11 = a5 & 0x4FF807FF;
  if ( (a5 & 0x40000000) != 0 )
  {
    v11 = a5 & 0xFF807FF;
    if ( (a5 & 0xFF8070F) != 0 )
      return 3221225714LL;
    v47 = 0;
  }
  if ( v11 )
  {
    ProtectionMask = MiMakeProtectionMask(v11);
    v39 = ProtectionMask;
    v46 = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      a2 = v60;
      goto LABEL_6;
    }
    return 3221225541LL;
  }
  if ( v10 != 0x80000000 && v10 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v39 = 24;
  v46 = 24;
LABEL_6:
  v13 = (v8 + v7 - 1) | 0xFFF;
  v57 = v13;
  v14 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v56 = v7 & 0xFFFFFFFFFFFFF000uLL;
  Teb = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      || (v30 = *(_QWORD *)(a2 + 1408)) != 0 && ((v34 = *(_WORD *)(v30 + 8), v34 == 332) || v34 == 452) )
    {
      v31 = v45;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v44 = Teb;
      v31 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v45 = v31;
    }
    v44 = (_QWORD *)v31;
  }
  P = 0LL;
  v55 = v13 >> 12;
  v15 = MiObtainReferencedVadEx(v14, 0, &v41);
  v16 = v15;
  v54 = v15;
  if ( !v15 )
  {
    v26 = v41;
    if ( v41 != -1073741664 )
      goto LABEL_117;
    goto LABEL_80;
  }
  P = (PVOID)v15;
  if ( v55 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    v26 = -1073741800;
    goto LABEL_117;
  }
  if ( (*(_DWORD *)(v15 + 48) & 0x1100000) == 0x1100000 )
  {
    if ( !v9 )
    {
      v26 = -1073741755;
      goto LABEL_117;
    }
  }
  else if ( v9 )
  {
    v26 = -1073741755;
    goto LABEL_117;
  }
  v17 = v39;
  if ( (v39 & 2) == 0 )
  {
LABEL_12:
    v18 = *(_DWORD *)(v16 + 48);
    v19 = v18 & 0x100000;
    if ( ((v18 & 0x100000) == 0 || (v18 & 0x400000) == 0 && (v18 & 0xC0000) < 0x80000) && (v18 & 0x70) != 0x50 )
      goto LABEL_14;
    if ( (v18 & 0x500000) == 0x500000 )
    {
      VadPageSize = MiGetVadPageSize(v16);
      if ( ((v49 | (v13 + 1)) & ((VadPageSize << 12) - 1)) != 0 )
      {
        v26 = -1073741800;
        goto LABEL_117;
      }
LABEL_14:
      if ( (v18 & 0x3100000) == 0x2100000 )
      {
        v28 = MiProtectEnclavePages(v60, a1, v16, v14, v13, v11, v17, v10, a6, a3, a4);
        MiUnlockAndDereferenceVad((char *)v16);
        return v28;
      }
      if ( (v10 & 0x5FFFFFFF) != 0 )
      {
        v26 = -1073741755;
        goto LABEL_117;
      }
      if ( !v11 )
      {
        v26 = -1073741755;
        goto LABEL_117;
      }
      v20 = v18 & 0x70;
      if ( v20 == 48 )
      {
        v36 = MiProtectAweRegion(v14, v13, v17, v9, &v40);
        if ( v36 >= 0 )
        {
          MiUnlockAndDereferenceVad((char *)v16);
          *a4 = v13 - v14 + 1;
          *a3 = v14;
          *a6 = v40;
          return (unsigned int)v36;
        }
        v26 = -1073741800;
        goto LABEL_117;
      }
      if ( v20 == 16 )
      {
        v26 = -1073741800;
        goto LABEL_117;
      }
      v21 = v42;
      if ( v42 == 1 && (v19 || (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0x20) != 0) )
        goto LABEL_116;
      if ( (v18 & 8) == 0 || v6 )
      {
        v22 = (unsigned __int64)v44;
      }
      else
      {
        v26 = MiCheckSecuredVad(v16, v49, v52, v17, KeGetCurrentThread()->PreviousMode);
        if ( v26 < 0 )
          goto LABEL_117;
        v22 = v45;
        v21 = v42;
        v17 = v39;
      }
      v23 = *(unsigned int *)(v16 + 48);
      if ( (v23 & 0x100000) != 0 )
      {
        if ( (v11 & 0x88) == 0 && v21 != 1 )
        {
          if ( (v23 & 0x70) == 0x40 )
          {
            if ( (v11 & 0xFFFFF9F9) != 0 )
            {
              v26 = -1073741755;
              goto LABEL_117;
            }
            v11 &= 0x7FFFF9FFu;
            v37 = *(_DWORD *)(v16 + 48) & 0xC00;
            if ( (*(_DWORD *)(v16 + 48) & 0x380) != 0 && v37 == 3072 )
            {
              v11 |= 0x400u;
            }
            else if ( v37 == 1024 )
            {
              v11 |= 0x200u;
            }
            v17 = MiMakeProtectionMask(v11);
          }
          v26 = MiProtectPrivateMemory(v16, v14, v13, v17, v11, v38, &v40, &v43);
          if ( v26 < 0 )
            goto LABEL_117;
          if ( v22 )
          {
            if ( v22 < v13 )
            {
              v32 = v22 >> 12;
              if ( v32 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
              {
                v33 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
                if ( v32 <= v33 && (v13 + 1) >> 12 <= v33 )
                  Teb[2] = v13 + 1;
              }
            }
          }
          goto LABEL_34;
        }
      }
      else if ( (v11 & 0x600) == 0 )
      {
        if ( (v23 & 0x70) == 0x20 )
        {
          if ( (v11 & 4) != 0 )
            v11 = v11 & 0xFFFFFFF3 | 8;
          if ( (v11 & 0x40) != 0 )
            v11 = v11 & 0xFFFFFF3F | 0x80;
        }
        v24 = MmCompatibleProtectionMask[(v23 >> 7) & 7] | 0x700;
        if ( (v11 | v24) != v24 )
        {
          v26 = -1073741746;
          goto LABEL_117;
        }
        if ( (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0xA0) == 0x80 )
        {
LABEL_33:
          v26 = MiSetProtectionOnSection(v60, v16, v14, v13, v11, v21, &v40, (__int64)&v43);
          if ( v26 < 0 )
            goto LABEL_117;
LABEL_34:
          MiUnlockAndDereferenceVad((char *)v16);
          *a4 = v13 - v14 + 1;
          *a3 = v14;
          *a6 = v40;
          if ( v43 == 1 )
            return 1073741847LL;
          return 0LL;
        }
        if ( !MiVadMapsLargeImage(v16) )
        {
          if ( !(unsigned int)MiIsRangeFullyCommitted(v25, v14, v13) )
          {
            v26 = -1073741779;
            goto LABEL_117;
          }
          goto LABEL_33;
        }
        if ( v11 != 128 && v11 != 8 )
        {
          v26 = -1073741746;
          goto LABEL_117;
        }
        MiUnlockAndDereferenceVad(v25);
LABEL_93:
        *a4 = v13 - v14 + 1;
        *a3 = v14;
        *a6 = MmProtectToValue[v39];
        return 0LL;
      }
LABEL_116:
      v26 = -1073741582;
      goto LABEL_117;
    }
    if ( v17 == ((v18 >> 7) & 0x1F) )
    {
      MiUnlockAndDereferenceVad((char *)v16);
      goto LABEL_93;
    }
LABEL_80:
    v26 = -1073741800;
    goto LABEL_117;
  }
  v26 = MiAllowProtectionChange(v60, a1, v15, v39, v14, v13);
  if ( v26 < 0 )
    goto LABEL_117;
  if ( (*(_DWORD *)(v16 + 48) & 0x100) != 0 || !MiIsProcessCfgEnabled() || v47 != 1 )
    goto LABEL_50;
  if ( (v29 & 8) != 0 )
  {
    v26 = MiCheckSecuredVad(v16, v49, v52, v39, KeGetCurrentThread()->PreviousMode);
    if ( v26 < 0 )
      goto LABEL_117;
    v6 = 1;
    v44 = (_QWORD *)v45;
  }
  v58[0] = v14;
  v58[1] = v13;
  v26 = MiCommitVadCfgBits(v16, (__int64)v58, 0LL);
  if ( v26 >= 0 )
  {
LABEL_50:
    v17 = v39;
    v10 = a5 & 0xB0000000;
    goto LABEL_12;
  }
LABEL_117:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  return (unsigned int)v26;
}
