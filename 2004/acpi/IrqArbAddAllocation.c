/*
 * XREFs of IrqArbAddAllocation @ 0x1C0092500
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000DF5C (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C000F00C (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C000F518 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000F8A4 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C004AD64 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D9FC (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1C0091B18 (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C0091BA4 (IcAddPossibleReference.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00931C8 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C00935CC (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C00938C0 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C0094E68 (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C0094ED8 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     MsiGetTargetInfo @ 0x1C0095554 (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C0095664 (ProcessorGetDestinationMode.c)
 *     IcSetPossibleInput @ 0x1C0096318 (IcSetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C0096758 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B65C4 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B65E8 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  char v4; // bl
  unsigned int v6; // r13d
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // rcx
  char *v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int IsPciDevice; // r15d
  __int16 v14; // di
  unsigned __int8 v15; // di
  bool v16; // zf
  __int64 v17; // rax
  BOOL v18; // ecx
  __int64 v19; // rdx
  __int16 v20; // r8
  unsigned int v21; // r13d
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  POOL_TYPE v26; // r10d
  char *PoolWithTag; // rax
  int v28; // edx
  int v29; // ecx
  __int64 v30; // r9
  unsigned int v31; // edi
  char *v32; // rbx
  int v33; // eax
  __int128 v34; // xmm0
  int v35; // ecx
  int v36; // ebx
  UCHAR v37; // di
  const char *v38; // r9
  const char *v39; // rdx
  const char *v40; // r8
  NTSTATUS v41; // eax
  int PossibleInput; // eax
  int v43; // edx
  BOOL v44; // eax
  char v45; // di
  int v46; // eax
  __int64 v47; // rcx
  int Flags; // [rsp+20h] [rbp-E0h]
  int Flagsa; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  char v52; // [rsp+80h] [rbp-80h] BYREF
  char v53; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned __int8 v54; // [rsp+82h] [rbp-7Eh] BYREF
  char v55; // [rsp+83h] [rbp-7Dh]
  char v56; // [rsp+84h] [rbp-7Ch]
  char v57; // [rsp+85h] [rbp-7Bh]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  int v60; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v61; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp-60h] BYREF
  int v64; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int128 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-30h]
  __int128 v70; // [rsp+E0h] [rbp-20h]
  __int128 v71; // [rsp+F0h] [rbp-10h]

  P = 0LL;
  v64 = 0;
  v4 = 0;
  v63 = 0;
  v60 = 0;
  v68 = 0LL;
  v52 = 0;
  v69 = 0LL;
  v67 = a1;
  v70 = 0LL;
  v53 = 0;
  v71 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Owner = *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL);
    WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0xDu, Flags);
  }
  v6 = *(_DWORD *)a2;
  v62 = 0LL;
  v56 = 0;
  v57 = 0;
  v7 = IrqArbGsivFromIrq(v6);
  v9 = *(_QWORD *)(a2 + 40);
  v10 = 0LL;
  v61 = 0;
  LOBYTE(v3) = 0;
  v11 = v7;
  v58 = v3;
  v55 = 0;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), &v52);
    if ( IsPciDevice < 0 )
      goto LABEL_111;
    v4 = v52;
  }
  if ( (*(_BYTE *)(a2 + 64) & 2) != 0 && v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xEu,
        (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids);
    return;
  }
  LOBYTE(v8) = 0;
  v54 = 0;
  v59 = v8;
  if ( v11 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v11, v12, &v54);
    if ( PossibleInput >= 0 )
    {
      v8 = (unsigned __int8)v8;
      if ( PossibleInput != 263 )
        v8 = 1;
      v59 = v8;
    }
  }
  if ( v4 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 2) == 0 )
  {
    v15 = 3;
    if ( (*(_BYTE *)(a2 + 64) & 2) != 0 )
      goto LABEL_16;
    IsPciDevice = LinkNodeCrackPrt(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), &v62, &v63, 1);
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    if ( v62 )
    {
      IsPciDevice = LinkNodeGetPossibleResources(v62, &P, &v53);
      if ( IsPciDevice < 0 )
        goto LABEL_86;
      ExFreePoolWithTag(P, 0);
      v15 = v53 & 2 | 1;
      if ( (int)LinkNodeGetPossibleGsiv(v62, &v63) < 0 )
      {
        if ( *(_DWORD *)(v47 + 28) )
        {
          IsPciDevice = -1073741823;
          goto LABEL_86;
        }
        *(_DWORD *)(v62 + 36) = v11;
      }
      v56 = 1;
      ++*(_DWORD *)(v62 + 28);
    }
    else
    {
      v11 = v63;
    }
LABEL_82:
    LOBYTE(v8) = v59;
    goto LABEL_16;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v11, &v61) )
  {
    v15 = byte_1C0081374[8 * v61];
    if ( v15 != 0xFF )
      goto LABEL_16;
  }
  v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v11) )
  {
    v55 = 1;
    IsPciDevice = AcpiIrqTranslateSecondaryInterruptToNtResources();
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    v15 = v71 | ((v14 & 1) == 0);
    goto LABEL_82;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v6, &v60) )
  {
    v15 = (v14 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v15 = v60 | ((v14 & 1) == 0);
  }
  LOBYTE(v8) = v59;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 2) != 0 )
    v15 |= 4u;
LABEL_16:
  v16 = (*(_BYTE *)(a2 + 64) & 2) == 0;
  v52 = 0;
  if ( !v16 )
  {
    v52 = 1;
    if ( (_BYTE)v8 )
    {
      if ( ((v15 ^ v54) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x14u,
            0xFu,
            (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids);
        LOBYTE(v3) = v58;
        IsPciDevice = -1073741823;
        goto LABEL_111;
      }
    }
  }
  v17 = *(_QWORD *)(a2 + 40);
  v18 = 0;
  v19 = *(_QWORD *)(v17 + 40);
  v66 = v19;
  v20 = *(_WORD *)(v19 + 4);
  if ( (v20 & 2) != 0 )
  {
    v21 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 8) + 1;
  }
  else
  {
    v21 = 1;
    v18 = (*(_BYTE *)(v17 + 36) & 1) != 0;
  }
  v22 = v18 | 2;
  v16 = (v20 & 8) == 0;
  v23 = *(_QWORD *)(a2 + 72);
  if ( v16 )
    v22 = v18;
  P = *(PVOID *)(a2 + 72);
  v54 = v15 & 8;
  v53 = v15 & 1;
  v61 = v22;
  LODWORD(Owner) = v22;
  v60 = !(v15 & 1) | ((v15 & 8) != 0 ? 2 : 0);
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, unsigned int, int, PVOID, int, __int128 *))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
                  v19,
                  v11,
                  v23,
                  v21,
                  v60,
                  Owner,
                  1,
                  &v68);
  if ( IsPciDevice >= 0 )
    goto LABEL_22;
  v25 = 1LL;
  if ( v21 > 1 )
  {
    v21 = 1;
    IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, int, unsigned int, int, __int128 *))ProcessorReserveIdtEntries)(
                    *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
                    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL),
                    v11,
                    P,
                    1,
                    !(v15 & 1) | (unsigned __int8)((v15 & 8) != 0 ? 2 : 0),
                    v61,
                    1,
                    &v68);
  }
  if ( IsPciDevice >= 0 )
  {
LABEL_22:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 2) != 0 )
    {
      v26 = PagedPool;
    }
    else
    {
      if ( !(_BYTE)v59 )
      {
        LOBYTE(v24) = v15;
        LOBYTE(v25) = (*(_BYTE *)(v66 + 4) & 8) != 0;
        IsPciDevice = IcSetPossibleInput(v11, &v68, v24, v25);
        if ( IsPciDevice < 0 )
          goto LABEL_86;
      }
      IcAddPossibleReference(v11, (*(_BYTE *)(a2 + 64) & 2) != 0);
      v57 = v26;
    }
    v59 = 0;
    if ( (v15 & 4) == 0 )
    {
      v43 = v26;
      if ( ((unsigned __int8)v26 & *(_BYTE *)(*(_QWORD *)(a2 + 40) + 36LL)) != 0 )
        v43 = 3;
      v59 = v43;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(v26, 88LL * (v21 - 1) + 120, 0x49706341u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_86;
    memset(PoolWithTag + 8, 0, 0x70uLL);
    *(_DWORD *)v10 = 1;
    *((_DWORD *)v10 + 1) = 4;
    v28 = 4;
    v29 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL);
    if ( v29 && v29 != 2 )
    {
      v28 = 5;
      *((_DWORD *)v10 + 1) = 5;
    }
    v30 = *(_QWORD *)(a2 + 40);
    if ( (*(_DWORD *)(v30 + 36) & 4) != 0 )
    {
      v28 |= 2u;
      *((_DWORD *)v10 + 1) = v28;
      v30 = *(_QWORD *)(a2 + 40);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 4LL) & 0x20) != 0 )
    {
      *((_DWORD *)v10 + 1) = v28 | 0x10;
      v30 = *(_QWORD *)(a2 + 40);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 4LL) & 2) != 0 )
    {
      *((_DWORD *)v10 + 2) = 3;
      IsPciDevice = MsiGetTargetInfo(&v68, DWORD1(v69), v10 + 16);
      if ( IsPciDevice >= 0 )
      {
        v10[26] = BYTE8(v69);
        ProcessorGetDestinationMode(&v68, &v64);
        v31 = 0;
        if ( v21 )
        {
          v32 = v10 + 56;
          while ( 1 )
          {
            v33 = v64;
            *((_DWORD *)v32 - 6) = 3;
            v34 = v68;
            *((_DWORD *)v32 - 3) = 0;
            *((_DWORD *)v32 - 2) = 1;
            *(_OWORD *)v32 = v34;
            v35 = v31 + DWORD1(v69);
            *((_DWORD *)v32 + 12) = v33;
            *((_DWORD *)v32 - 5) = v35;
            *((_DWORD *)v32 + 8) = v31 + v11;
            IsPciDevice = IrqArbGetDeviceIrql(&v10[88 * v31 + 32], &v10[88 * v31 + 40]);
            if ( IsPciDevice < 0 )
              goto LABEL_86;
            ++v31;
            v32 += 88;
            if ( v31 >= v21 )
              goto LABEL_39;
          }
        }
        goto LABEL_39;
      }
LABEL_86:
      LOBYTE(v3) = v58;
      goto LABEL_111;
    }
    if ( v62 )
    {
      *((_DWORD *)v10 + 2) = 2;
      *((_QWORD *)v10 + 2) = v62;
    }
    else
    {
      *((_DWORD *)v10 + 2) = 1;
    }
    *((_DWORD *)v10 + 8) = 0;
    v16 = v55 == 0;
    *((_DWORD *)v10 + 9) = DWORD1(v69);
    *(_OWORD *)(v10 + 56) = v68;
    v44 = (!v16 || v54) && !v53;
    v45 = v15 & 0xA;
    *((_DWORD *)v10 + 12) = v44;
    switch ( v45 )
    {
      case 10:
        v46 = 3;
        break;
      case 8:
        v46 = 4;
        break;
      case 2:
        v46 = 2;
        break;
      default:
        v46 = v45 == 0;
        break;
    }
    *((_DWORD *)v10 + 11) = v46;
    *((_DWORD *)v10 + 22) = IrqArbGsivFromIrq(*(_QWORD *)a2);
    *((_DWORD *)v10 + 23) ^= (*((_DWORD *)v10 + 23) ^ (*((_DWORD *)v10 + 1) >> 4)) & 1;
    IsPciDevice = IrqArbGetDeviceIrql(v10 + 32, v10 + 40);
    if ( IsPciDevice >= 0 )
    {
LABEL_39:
      v36 = v59;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = v52;
      }
      else
      {
        v37 = v52;
        v38 = "RTL_RANGE_LIST_ADD_SHARED";
        v39 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
        v40 = "ARBITER_RANGE_BOOT_ALLOCATED";
        if ( (v59 & 2) == 0 )
          v38 = " ";
        if ( (v59 & 1) == 0 )
          v39 = " ";
        if ( !v52 )
          v40 = " ";
        WPP_RECORDER_SF_DDDssDssqq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)v39,
          (__int64)v40,
          (__int64)v38,
          Flagsa);
      }
      v41 = RtlAddRange(
              *(PRTL_RANGE_LIST *)(v67 + 48),
              *(_QWORD *)a2,
              *(_QWORD *)(a2 + 8),
              v37,
              v36 | 0x10,
              v10,
              *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
      IsPciDevice = v41;
      if ( v41 < 0 )
      {
        LOBYTE(v3) = v58;
        if ( v41 != -1073741823 )
          LOBYTE(v3) = 1;
        goto LABEL_111;
      }
      return;
    }
    LOBYTE(v3) = v58;
LABEL_111:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(UserData) = IsPciDevice;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x11u,
        (__int64)&WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
        UserData);
    }
    if ( DWORD1(v69) )
      ProcessorDeleteDeviceIdtAssignment(*(void **)(*(_QWORD *)(a2 + 32) + 32LL), v11, DWORD1(v69), 1);
    if ( v56 )
      --*(_DWORD *)(v62 + 28);
    if ( v57 )
    {
      LOBYTE(v12) = (*(_BYTE *)(a2 + 64) & 2) != 0;
      IcRemovePossibleReference(v11, v12);
    }
    if ( v10 )
    {
      if ( !(_BYTE)v3 )
        ExFreePoolWithTag(v10, 0);
    }
  }
}
