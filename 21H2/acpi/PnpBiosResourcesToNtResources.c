/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C009CF00
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0016B88 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C00501BC (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C009A244 (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AFF8C (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1730 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6908 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0016F28 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C00170AC (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00199A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C00302A4 (WPP_RECORDER_SF_dqLD.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005DB8C (WPP_RECORDER_SF_d.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E6AC (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009BA54 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C009CA80 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C009CBF8 (PnpiGrowResourceList.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C009D5A0 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D6AC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C009D8C8 (PnpiClearAllocatedMemory.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A26F8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00A3360 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B35FC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3A44 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B3E58 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3EC0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B4020 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B4084 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B4108 (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, _BYTE *a2, __int64 a3, unsigned int **a4)
{
  unsigned int v4; // r14d
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  ULONG_PTR v8; // r10
  int v9; // edx
  PVOID v10; // r13
  int v11; // ecx
  unsigned __int8 v12; // di
  int v13; // esi
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r9
  int v16; // eax
  unsigned __int16 v17; // r9
  unsigned int v18; // edi
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  char *v28; // rsi
  unsigned int k; // r14d
  unsigned __int16 v31; // di
  unsigned __int16 v32; // r14
  unsigned __int16 i; // si
  unsigned __int16 v34; // r9
  unsigned int v35; // eax
  unsigned __int8 v36; // di
  char j; // si
  unsigned int v38; // edi
  int v39; // esi
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  size_t v44; // rbx
  int v45; // eax
  unsigned __int8 v46; // di
  int DeviceExtension; // esi
  unsigned __int8 v48; // r14
  unsigned __int8 v49; // al
  char v50; // di
  unsigned __int16 v51; // r9
  int v52; // [rsp+28h] [rbp-49h]
  __int64 v53; // [rsp+30h] [rbp-41h]
  __int64 v54; // [rsp+38h] [rbp-39h]
  unsigned int v55; // [rsp+58h] [rbp-19h]
  char v56[4]; // [rsp+5Ch] [rbp-15h] BYREF
  int v57; // [rsp+60h] [rbp-11h]
  int v58; // [rsp+64h] [rbp-Dh] BYREF
  int v59; // [rsp+68h] [rbp-9h]
  unsigned __int16 v60; // [rsp+6Ch] [rbp-5h]
  unsigned int v61; // [rsp+70h] [rbp-1h]
  int v62; // [rsp+74h] [rbp+3h]
  int v63; // [rsp+78h] [rbp+7h]
  PVOID P[9]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v67; // [rsp+E8h] [rbp+77h]

  v67 = a3;
  P[0] = 0LL;
  v58 = 0;
  v4 = 0;
  v55 = 0;
  v61 = 0;
  v56[0] = 0;
  v57 = 0;
  v59 = 0;
  v5 = PnpiGrowResourceList((const void **)P, &v58, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        v5);
    return (unsigned int)v7;
  }
  v8 = (ULONG_PTR)a2;
  v9 = 32;
  v10 = P[0];
  v63 = 32;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_BYTE *)v8;
    v13 = v11;
    if ( *(char *)v8 >= 0 )
    {
      v14 = (v12 & 7) + 1;
      v60 = v14;
      v12 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v15 = 34;
      goto LABEL_6;
    }
    v14 = *(_WORD *)(v8 + 1) + 3;
    v60 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 35;
LABEL_6:
      LODWORD(v54) = v14;
      LODWORD(v53) = v12;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v15,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        v53,
        v54);
      v11 = v57;
      v8 = (ULONG_PTR)a2;
      v9 = 32;
    }
LABEL_7:
    if ( v12 == 120 )
      break;
    v57 = v11 + 1;
    v62 = v12;
    if ( v12 > 0x84u )
    {
      if ( v12 <= 0x8Au )
      {
        if ( v12 == 138 )
        {
          v16 = PnpiBiosAddressQuadToIoDescriptor(v8);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 48;
            goto LABEL_17;
          }
          goto LABEL_19;
        }
        if ( v12 <= 0x86u )
        {
LABEL_51:
          v16 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)v8, (__int64)v10, v4);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 45;
            goto LABEL_17;
          }
          goto LABEL_19;
        }
        if ( v12 == 135 )
        {
          v16 = PnpiBiosAddressDoubleToIoDescriptor(v8);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 47;
            goto LABEL_17;
          }
LABEL_19:
          if ( v7 < 0 )
            goto LABEL_157;
LABEL_20:
          v8 = (ULONG_PTR)a2;
          v9 = 32;
LABEL_21:
          v11 = v57;
          goto LABEL_22;
        }
        if ( v12 == 136 )
        {
          v16 = PnpiBiosAddressToIoDescriptor(v8);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 46;
            goto LABEL_17;
          }
          goto LABEL_19;
        }
        v46 = *(_BYTE *)(v8 + 4);
        DeviceExtension = 0;
        v48 = 0;
        v49 = 4 * v46 + 5;
        if ( AcpiInterruptCombiningSupported == 1 )
        {
          LOBYTE(v6) = *(_BYTE *)(v8 + 1) + 3;
          if ( (unsigned __int8)v6 > v49 )
          {
            if ( !a1 )
            {
              v7 = -1073741637;
LABEL_157:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 0xDu, 0x38u, v52);
LABEL_49:
              PnpiClearAllocatedMemory(v10);
              return (unsigned int)v7;
            }
            v4 = v55;
            v7 = PnpiBiosInterruptCombineToIoDescriptor(a1, v8, (unsigned __int8)v6 - v49 - 1, (int)v10, v55, v67);
            goto LABEL_19;
          }
        }
        if ( gAcpiHonorBiosPolarities && a1 )
          DeviceExtension = ACPIInternalGetDeviceExtension(a1);
        if ( v46 )
        {
          do
          {
            if ( v7 < 0 )
              break;
            LOBYTE(v6) = v48++;
            v7 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, (_DWORD)a2, v6, (_DWORD)v10, v55);
          }
          while ( v48 < v46 );
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
        v35 = v48;
        v34 = 38;
LABEL_61:
        LODWORD(v54) = v7;
        LODWORD(v53) = v35;
        WPP_RECORDER_SF_LL(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          v34,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
          v53,
          v54);
        goto LABEL_62;
      }
      switch ( v12 )
      {
        case 0x8Bu:
          v16 = PnpiBiosAddressExtendedToIoDescriptor(v8);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 49;
            goto LABEL_17;
          }
          goto LABEL_19;
        case 0x8Cu:
          v50 = 0;
          if ( a1 )
          {
            do
            {
              if ( v7 < 0 )
                break;
              v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, (_DWORD)a2, v6, (_DWORD)v10, v4, v67);
              ++v50;
            }
            while ( !v50 );
          }
          else
          {
            v7 = -1073741637;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_LL(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x33u,
              (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
          goto LABEL_19;
        case 0x8Du:
          if ( a1 )
            v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v8, v6, (_DWORD)v10, v4, v67);
          else
            v7 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 50;
LABEL_147:
            LODWORD(v53) = v7;
LABEL_18:
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              v17,
              (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
              v53);
          }
          goto LABEL_19;
        case 0x8Eu:
          if ( a1 )
            v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v8, v6, (_DWORD)v10, v4, v67);
          else
            v7 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 52;
            goto LABEL_147;
          }
          goto LABEL_19;
      }
    }
    else
    {
      switch ( v12 )
      {
        case 0x84u:
          v7 = 0;
          if ( a1 )
          {
            if ( (int)PnpiBiosVendorToNtIoDescriptor(a1, v8, v6, (_DWORD)v10, v4, v67, (__int64)v56) < 0 || !v56[0] )
              ++v59;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_L(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                0x35u,
                (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
          }
          else
          {
            ++v59;
          }
          goto LABEL_20;
        case 0x20u:
          v31 = *(_WORD *)(v8 + 1);
          v32 = 0;
          for ( i = 0; v31; v31 >>= 1 )
          {
            if ( v7 < 0 )
              break;
            if ( (v31 & 1) != 0 )
              v7 = PnpiBiosIrqToIoDescriptor(a2, i, (__int64)v10, v55, v32++);
            ++i;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = 37;
            goto LABEL_60;
          }
LABEL_62:
          v4 = v55;
          goto LABEL_19;
        case 0x28u:
          v36 = *(_BYTE *)(v8 + 1);
          v32 = 0;
          for ( j = 0; v36; v36 >>= 1 )
          {
            if ( v7 < 0 )
              break;
            if ( (v36 & 1) != 0 )
            {
              LOBYTE(v9) = j;
              v7 = PnpiBiosDmaToIoDescriptor((_DWORD)a2, v9, (_DWORD)v10, v55, v32++);
            }
            ++j;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_62;
          v34 = 39;
LABEL_60:
          v35 = v32;
          goto LABEL_61;
        case 0x30u:
          v38 = v61 + 1;
          v61 = v38;
          v4 = v38;
          v55 = v38;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x29u,
              (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
          if ( v38 == v58 )
          {
            v45 = PnpiGrowResourceList((const void **)P, &v58, v6);
            v10 = P[0];
            v7 = v45;
          }
          goto LABEL_19;
        case 0x38u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x2Au,
              (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
          v4 = 0;
          v55 = 0;
          goto LABEL_19;
        case 0x40u:
          v16 = PnpiBiosPortToIoDescriptor(v8, v10, v4, v67);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 43;
LABEL_17:
            LODWORD(v53) = v16;
            goto LABEL_18;
          }
          goto LABEL_19;
        case 0x48u:
          v16 = PnpiBiosPortFixedToIoDescriptor(v8, v10, v4, v67);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 44;
            goto LABEL_17;
          }
          goto LABEL_19;
        case 0x50u:
          v16 = PnpiBiosDmaToIoDescriptorV3(v8, v10, v4, 1LL);
          v7 = v16;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 40;
            goto LABEL_17;
          }
          goto LABEL_19;
        case 0x70u:
          ++v59;
          v7 = 0;
          goto LABEL_21;
        case 0x81u:
          goto LABEL_51;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xDu,
        0x36u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
    v8 = (ULONG_PTR)a2;
    v11 = v13;
    v7 = 0;
    v57 = v13;
    v9 = 32;
LABEL_22:
    v8 += v60;
    a2 = (_BYTE *)v8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0x24u,
      (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
  if ( !v57 || v59 == v57 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        0x37u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
    PnpiClearAllocatedMemory(v10);
    *a4 = 0LL;
    return (unsigned int)v7;
  }
  if ( *(_QWORD *)v10 )
    v18 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
  else
    v18 = 0;
  v19 = v61;
  v20 = 1;
  if ( v61 )
  {
    v39 = 32;
    while ( 1 )
    {
      v40 = *((_QWORD *)v10 + v20);
      if ( !v40 )
        break;
      v41 = *(_DWORD *)(v40 + 4);
      if ( v41 )
      {
        v39 += 32 * (v18 + v41) + 8;
        v63 = v39;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x3Au, v52);
      }
      if ( ++v20 > v19 )
        goto LABEL_38;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v53) = v20;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x39u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        v53);
    }
  }
  else
  {
LABEL_38:
    if ( v19 )
    {
      v22 = v63;
LABEL_42:
      if ( v22 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v22, 0x52706341u);
        *a4 = PoolWithTag;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v54) = v22;
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            0x3Du,
            (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
            PoolWithTag,
            v54);
        }
        v24 = *a4;
        if ( *a4 )
        {
          memset(v24, 0, v22);
          v27 = v61;
          v7 = 0;
          *(_QWORD *)(v24 + 1) = 15LL;
          *v24 = v22;
          v28 = (char *)(v24 + 8);
          for ( k = 1; k <= (unsigned int)v27; ++k )
          {
            v42 = *((_QWORD *)v10 + k);
            v43 = *(_DWORD *)(v42 + 4);
            if ( v43 )
            {
              v44 = (unsigned int)(32 * v43 + 8);
              *(_DWORD *)(v42 + 4) = v18 + v43;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, v27, v25, v26, v52);
              memmove(v28, *((const void **)v10 + k), v44);
              v28 += v44;
              v7 = 0;
              if ( v18 )
              {
                memmove(v28, (const void *)(*(_QWORD *)v10 + 8LL), 32LL * v18);
                v28 += 32 * v18;
                v7 = 0;
              }
              v27 = v61;
              ++(*a4)[7];
            }
          }
          if ( !(_DWORD)v27 )
          {
            memmove(v28, *(const void **)v10, 32 * v18 + 8);
            ++(*a4)[7];
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xDu,
              0x3Eu,
              (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
          v7 = -1073741670;
        }
        goto LABEL_49;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = 60;
LABEL_161:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          v51,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
      }
    }
    else
    {
      if ( *(_QWORD *)v10 )
      {
        v21 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
        if ( v21 )
        {
          v22 = 32 * v21 + v63 + 8;
          goto LABEL_42;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = 59;
        goto LABEL_161;
      }
    }
  }
  PnpiClearAllocatedMemory(v10);
  *a4 = 0LL;
  return 3221225473LL;
}
