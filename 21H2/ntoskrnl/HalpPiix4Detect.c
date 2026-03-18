/*
 * XREFs of HalpPiix4Detect @ 0x140A53294
 * Callers:
 *     HaliInitPowerManagement @ 0x14081E1F0 (HaliInitPowerManagement.c)
 *     HalpAcpiDetectPiix4Work @ 0x140865300 (HalpAcpiDetectPiix4Work.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpGetCpuInfo @ 0x1403AAE80 (HalpGetCpuInfo.c)
 *     HalSetBusDataByOffset @ 0x1403ADD00 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x1403ADE20 (HalGetBusDataByOffset.c)
 *     HalGetBusData @ 0x1403D9110 (HalGetBusData.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x140509344 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptSetMsiOverride @ 0x140509464 (HalpInterruptSetMsiOverride.c)
 *     HalpWhackICHUsbSmi @ 0x140524434 (HalpWhackICHUsbSmi.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405245B8 (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpGetChipHacks @ 0x140B2460C (HalpGetChipHacks.c)
 */

__int16 __fastcall HalpPiix4Detect(unsigned __int8 a1)
{
  int v1; // edi
  int BusData; // eax
  char CpuInfo; // al
  char v5; // r13
  ULONG v6; // esi
  char v7; // r12
  ULONG v8; // ebx
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r8
  ULONG v15; // edx
  unsigned __int16 v16; // r10
  HANDLE v17; // rcx
  ULONG v18; // ebx
  __int64 v19; // rcx
  __int16 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int16 Buffer_2; // [rsp+4Ah] [rbp-BEh]
  int Buffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Disposition[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v30[2]; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-38h] BYREF
  int v32[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 KeyValueInformation; // [rsp+128h] [rbp+20h] BYREF
  int v34; // [rsp+138h] [rbp+30h]

  v1 = 0;
  Buffer_2 = a1;
  KeyHandle = 0LL;
  Buffer = 0;
  Disposition[0] = 0;
  Buffer_4 = 0;
  Handle = 0LL;
  LODWORD(ObjectAttributes[0]) = 0;
  memset(&ObjectAttributes[1], 0, 44);
  memset(v32, 0, sizeof(v32));
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"EnableBXWorkAround";
  v30[0] = 3276848LL;
  v30[1] = L"Services\\ACPI\\Parameters";
  v29[0] = 1572886LL;
  v29[1] = L"Control\\HAL";
  v28[0] = 5636180LL;
  v28[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET";
  LOWORD(BusData) = 0;
  v34 = 0;
  KeyValueInformation = 0LL;
  if ( a1 )
  {
    BusData = _InterlockedIncrement(&HalpPiix4Initialized);
    if ( BusData != 1 )
      return BusData;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v28;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    BusData = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
    if ( BusData < 0 )
      return BusData;
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v29;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) < 0 )
    {
LABEL_84:
      v17 = Handle;
      goto LABEL_43;
    }
  }
  else if ( !HalpPiix4Present )
  {
    return BusData;
  }
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&Buffer);
  v5 = 0;
  v6 = 0;
  v7 = CpuInfo != 0 ? Buffer : 0;
LABEL_6:
  v8 = 0;
  v9 = 0;
LABEL_7:
  v10 = v9 & 0x1F;
  while ( 1 )
  {
    v11 = v8 & 0xFFFFFF00;
    v8 = v10 | v8 & 0xFFFFFF00 | (32 * (v1 & 7));
    BusData = HalGetBusData(PCIConfiguration, v6, v10 | v11 | (32 * (v1 & 7)), v32, 2u);
    if ( !BusData )
      break;
    LOWORD(BusData) = LOWORD(v32[0]) - 1;
    if ( (unsigned __int16)(LOWORD(v32[0]) - 1) > 0xFFFDu )
    {
      v12 = v1 == 0;
      goto LABEL_11;
    }
    BusData = HalGetBusData(PCIConfiguration, v6, v8, v32, 0x10u);
    if ( BusData )
    {
      v13 = HalpInterruptModel();
      if ( !(_BYTE)Buffer_2 )
        goto LABEL_73;
      LOBYTE(v14) = v32[2];
      v15 = 1;
      v16 = v32[0];
      if ( v13 == 1 && !v6 && !v9 && !v1 && LOWORD(v32[0]) == 4358 && LOBYTE(v32[2]) < 0x80u )
        HalpInterruptSetMsiOverride(0);
      if ( v16 == 0x8086 && ((HIWORD(v32[0]) - 29072) & 0xFFFD) == 0 && (unsigned __int8)v14 <= 2u )
      {
        HIBYTE(Buffer_2) = v15;
        HalGetBusDataByOffset(PCIConfiguration, v6, v8, (char *)&Buffer + 1, 0x57u, v15);
        LOBYTE(v14) = v32[2];
        v16 = v32[0];
        if ( ((HIBYTE(Buffer) >> 5) & ((Buffer & 0x1800) != 0)) != 0 )
          HalpBroken440BX = 1;
      }
      if ( (int)HalpGetChipHacks(v16, HIWORD(v32[0]), v14, &Buffer_4) >= 0 )
      {
        if ( (Buffer_4 & 2) != 0 )
          HalpDisableHibernate = 1;
        if ( (Buffer_4 & 8) != 0 )
          HalpWhackICHUsbSmi(v6, v8);
      }
      if ( v7 != 2 || v5 )
        goto LABEL_73;
      LOWORD(BusData) = -32634;
      if ( LOWORD(v32[0]) != 0x8086 )
        goto LABEL_34;
      if ( !v6 )
      {
        LOWORD(BusData) = HIWORD(v32[0]);
        if ( v9 != 17 )
          goto LABEL_32;
        if ( v1 || HIWORD(v32[0]) != 0x98D0 )
        {
          if ( v1 != 1 )
            goto LABEL_33;
          if ( HIWORD(v32[0]) != 0x98D1 )
          {
LABEL_32:
            if ( v9 != 16 )
            {
LABEL_33:
              if ( (_WORD)BusData == 28944 )
              {
                HalpPiix4Present = 1;
                v18 = v8 & 0xFFFFFF1F | 0x60;
                HalGetBusData(PCIConfiguration, v6, v18, v32, 0x40u);
                LOBYTE(v19) = v32[2];
                HalpPiix4 = v32[2];
                if ( (HalpWAETDeviceFlags & 2) == 0 )
                  KeBugCheckEx(0x5Cu, 0x111uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\xxacpi.c", 0x67BuLL, 0LL);
                if ( LOBYTE(v32[2]) <= 1u )
                {
                  HalpPiix4BusNumber = v6;
                  HalpPiix4SlotNumber = v18;
                  HalGetBusDataByOffset(PCIConfiguration, v6, v18, &HalpPiix4DevActB, 0x58u, 4u);
                  HalpPiix4DevActB |= 0x23u;
                  HalSetBusDataByOffset(
                    PCIConfiguration,
                    HalpPiix4BusNumber,
                    HalpPiix4SlotNumber,
                    &HalpPiix4DevActB,
                    0x58u,
                    4u);
                }
                LOWORD(BusData) = HalpUsbLegacyStopUhciInterrupt(v19, v6, v18 & 0xFFFFFF5F, 1);
                break;
              }
LABEL_34:
              if ( !v1 )
              {
                v12 = (v32[3] & 0x800000) == 0;
LABEL_11:
                if ( v12 )
                  goto LABEL_12;
                goto LABEL_17;
              }
              goto LABEL_17;
            }
            if ( (v1 != 6 || HIWORD(v32[0]) != 0xA0D0) && (v1 != 7 || HIWORD(v32[0]) != 0xA0D1) )
            {
              if ( v1 != 6 )
                goto LABEL_70;
              if ( HIWORD(v32[0]) != 17360 )
                goto LABEL_33;
              if ( LOBYTE(v32[2]) )
              {
LABEL_70:
                if ( v1 != 7 || HIWORD(v32[0]) != 17361 )
                  goto LABEL_33;
                if ( LOBYTE(v32[2]) )
                  goto LABEL_17;
              }
            }
          }
        }
        v5 = 1;
        HalpInterruptSetLineSpecificOverride(23LL);
        HalpInterruptSetLineSpecificOverride(22LL);
LABEL_73:
        LOWORD(BusData) = -32634;
        if ( LOWORD(v32[0]) != 0x8086 )
          goto LABEL_34;
      }
      LOWORD(BusData) = HIWORD(v32[0]);
      goto LABEL_33;
    }
LABEL_17:
    if ( (unsigned int)++v1 >= 8 )
    {
LABEL_12:
      ++v9;
      v1 = 0;
      if ( v9 < 0x20 )
        goto LABEL_7;
      if ( ++v6 < 0x100 )
        goto LABEL_6;
      break;
    }
  }
  if ( !(_BYTE)Buffer_2 )
    return BusData;
  v17 = Handle;
  if ( Handle )
  {
    ZwClose(Handle);
    v17 = 0LL;
    Handle = 0LL;
  }
  if ( HIBYTE(Buffer_2) )
  {
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v30;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) >= 0
      && ZwQueryValueKey(
           Handle,
           &ValueName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           (PULONG)ObjectAttributes) >= 0
      && DWORD2(KeyValueInformation) )
    {
      HalpBroken440BX = BYTE12(KeyValueInformation);
    }
    goto LABEL_84;
  }
LABEL_43:
  if ( v17 )
    ZwClose(v17);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LOWORD(BusData) = KeSetEvent(&HalpPiix4Detected, 0, 0);
  return BusData;
}
