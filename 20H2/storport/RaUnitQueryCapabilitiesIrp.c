/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C00737CC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0005C84 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D54 (RaidUnitPoFxActivateComponent.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitIsSMRDisabled @ 0x1C00192E0 (RaUnitIsSMRDisabled.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004B9B4 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0073BBC (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C0074134 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  bool v4; // zf
  int v5; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int64 DeviceType; // rbx
  SIZE_T v8; // r15
  _DWORD *PoolWithTag; // r14
  int v10; // eax
  char v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rax
  int AccessState; // eax
  int SecurityQos_high; // r8d
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  _BYTE v39[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v40[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v40, 0, sizeof(v40));
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v39[0] = 0;
  if ( v4 || (v5 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v5 - 5) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v13 = -1073741810;
  }
  else
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v39);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
    v8 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 552LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v40);
    *(_OWORD *)&SecurityContext->SecurityQos = v40[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v40[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v40[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v40[3];
    v10 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v10;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v10 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 552LL) + 184LL) & 4) != 0 )
      {
        v15 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 1;
        v16 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 4;
        PoolWithTag[1] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 8;
        PoolWithTag[1] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x10;
        PoolWithTag[1] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x20;
        PoolWithTag[1] = v20;
        v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x40;
        PoolWithTag[1] = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x80;
        PoolWithTag[1] = v22;
        v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x100;
        PoolWithTag[1] = v23;
        v24 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x200;
        PoolWithTag[1] = v24;
        PoolWithTag[1] = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v25 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v25 + 4891) == 1 && *(_BYTE *)(v25 + 4890) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[2] = AccessState;
        PoolWithTag[1] &= ~0x800u;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v11, (__int64)PoolWithTag, v8) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v28 = SecurityQos_high ^ PoolWithTag[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 552LL) + 184LL) & 4) != 0 )
        {
          v29 = SecurityQos_high ^ v28 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = ((unsigned __int8)v29 ^ (unsigned __int8)PoolWithTag[1]) & 2 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = ((unsigned __int8)v30 ^ (unsigned __int8)PoolWithTag[1]) & 4 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = ((unsigned __int8)v31 ^ (unsigned __int8)PoolWithTag[1]) & 8 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = ((unsigned __int8)v32 ^ (unsigned __int8)PoolWithTag[1]) & 0x10 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = ((unsigned __int8)v33 ^ (unsigned __int8)PoolWithTag[1]) & 0x20 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          v35 = ((unsigned __int8)v34 ^ (unsigned __int8)PoolWithTag[1]) & 0x40 ^ v34;
          HIDWORD(SecurityContext->SecurityQos) = v35;
          v36 = ((unsigned __int8)v35 ^ (unsigned __int8)PoolWithTag[1]) & 0x80 ^ v35;
          HIDWORD(SecurityContext->SecurityQos) = v36;
          v37 = ((unsigned __int16)v36 ^ (unsigned __int16)PoolWithTag[1]) & 0x100 ^ v36;
          HIDWORD(SecurityContext->SecurityQos) = v37;
          v38 = ((unsigned __int16)v37 ^ (unsigned __int16)PoolWithTag[1]) & 0x200 ^ v37;
          HIDWORD(SecurityContext->SecurityQos) = v38;
          HIDWORD(SecurityContext->SecurityQos) = v38 ^ (v38 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1824) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v28 & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    v12 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFFBF;
    HIDWORD(SecurityContext->SecurityQos) = v12;
    *(_BYTE *)(a1 + 450) ^= (*(_BYTE *)(a1 + 450) ^ ((unsigned __int8)(v12 >> 4) << 6)) & 0x40;
    *(_BYTE *)(a1 + 450) = *(_BYTE *)(a1 + 450) & 0x7F | ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 9) << 7);
    if ( (unsigned int)RaUnitIsSMRDisabled(a1) )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v39);
    v13 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v13);
}
