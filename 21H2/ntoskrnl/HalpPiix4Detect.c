/*
 * XREFs of HalpPiix4Detect @ 0x14099B3E0
 * Callers:
 *     HaliInitPowerManagement @ 0x1407AE3A0 (HaliInitPowerManagement.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalSetBusDataByOffset @ 0x14039E9B0 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x14039EAD0 (HalGetBusDataByOffset.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalGetBusData @ 0x1403C8540 (HalGetBusData.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFF34 (HalpInterruptSetLineSpecificOverride.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptSetMsiOverride @ 0x1404BCAF0 (HalpInterruptSetMsiOverride.c)
 *     HalpWhackICHUsbSmi @ 0x1404D7564 (HalpWhackICHUsbSmi.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1404D76E8 (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpGetChipHacks @ 0x140A6BD34 (HalpGetChipHacks.c)
 */

char __fastcall HalpPiix4Detect(char a1)
{
  int v1; // edi
  int BusData; // eax
  char CpuInfo; // al
  ULONG v5; // esi
  char v6; // r13
  ULONG v7; // ebx
  unsigned int v8; // r14d
  int v9; // r15d
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  ULONG v13; // edx
  bool v14; // zf
  ULONG v15; // ebx
  __int64 v16; // rcx
  HANDLE v17; // rcx
  __int16 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  char Buffer_2; // [rsp+4Ah] [rbp-BEh]
  int Buffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Disposition[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v26[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-38h] BYREF
  int v30[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 KeyValueInformation; // [rsp+128h] [rbp+20h] BYREF
  int v32; // [rsp+138h] [rbp+30h]

  v1 = 0;
  KeyHandle = 0LL;
  Buffer = 0;
  Disposition[0] = 0;
  Buffer_4 = 0;
  Handle = 0LL;
  Buffer_2 = 0;
  LODWORD(ObjectAttributes[0]) = 0;
  memset(&ObjectAttributes[1], 0, 48);
  memset(v30, 0, sizeof(v30));
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"EnableBXWorkAround";
  v28[0] = 3276848LL;
  v28[1] = L"Services\\ACPI\\Parameters";
  v27[0] = 1572886LL;
  v27[1] = L"Control\\HAL";
  v26[0] = 5636180LL;
  v26[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET";
  LOBYTE(BusData) = 0;
  v32 = 0;
  KeyValueInformation = 0LL;
  if ( a1 )
  {
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v26;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    BusData = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
    if ( BusData < 0 )
      return BusData;
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v27;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    BusData = ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition);
    if ( BusData < 0 )
      goto LABEL_75;
  }
  else if ( !HalpPiix4Present )
  {
    return BusData;
  }
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&Buffer);
  v5 = 0;
  v6 = CpuInfo != 0 ? Buffer : 0;
  LOBYTE(Buffer) = 0;
LABEL_7:
  v7 = 0;
  v8 = 0;
LABEL_8:
  v9 = v8 & 0x1F;
  while ( 1 )
  {
    v10 = v7 & 0xFFFFFF00;
    v7 = v9 | v7 & 0xFFFFFF00 | (32 * (v1 & 7));
    BusData = HalGetBusData(PCIConfiguration, v5, v9 | v10 | (32 * (v1 & 7)), v30, 2u);
    if ( !BusData )
      break;
    LOBYTE(BusData) = LOBYTE(v30[0]) - 1;
    if ( (unsigned __int16)(LOWORD(v30[0]) - 1) > 0xFFFDu )
    {
      v14 = v1 == 0;
LABEL_58:
      if ( v14 )
        goto LABEL_60;
      goto LABEL_59;
    }
    BusData = HalGetBusData(PCIConfiguration, v5, v7, v30, 0x10u);
    if ( BusData )
    {
      v11 = HalpInterruptModel();
      LOBYTE(v12) = v30[2];
      v13 = 1;
      if ( v11 != 1 )
        goto LABEL_20;
      if ( !a1 )
        goto LABEL_52;
      if ( !v5 && !v8 && !v1 && LOWORD(v30[0]) == 4358 && LOBYTE(v30[2]) < 0x80u )
        HalpInterruptSetMsiOverride(0);
LABEL_20:
      if ( !a1 )
        goto LABEL_52;
      if ( LOWORD(v30[0]) == 0x8086 && ((HIWORD(v30[0]) - 29072) & 0xFFFD) == 0 && (unsigned __int8)v12 <= 2u )
      {
        Buffer_2 = v13;
        HalGetBusDataByOffset(PCIConfiguration, v5, v7, (char *)&Buffer + 1, 0x57u, v13);
        LOBYTE(v12) = v30[2];
        if ( ((HIBYTE(Buffer) >> 5) & ((Buffer & 0x1800) != 0)) != 0 )
          HalpBroken440BX = 1;
      }
      if ( (int)HalpGetChipHacks(LOWORD(v30[0]), HIWORD(v30[0]), v12, &Buffer_4) >= 0 )
      {
        if ( (Buffer_4 & 2) != 0 )
          HalpDisableHibernate = 1;
        if ( (Buffer_4 & 8) != 0 )
          HalpWhackICHUsbSmi(v5, v7);
      }
      if ( v6 != 2 || (_BYTE)Buffer )
        goto LABEL_52;
      LOBYTE(BusData) = -122;
      if ( LOWORD(v30[0]) != 0x8086 )
        goto LABEL_55;
      if ( v5 )
        goto LABEL_53;
      LOWORD(BusData) = HIWORD(v30[0]);
      if ( v8 != 17 )
        goto LABEL_40;
      if ( !v1 && HIWORD(v30[0]) == 0x98D0 )
        goto LABEL_51;
      if ( v1 == 1 )
      {
        if ( HIWORD(v30[0]) == 0x98D1 )
          goto LABEL_51;
LABEL_40:
        if ( v8 == 16 )
        {
          if ( v1 == 6 && HIWORD(v30[0]) == 0xA0D0 || v1 == 7 && HIWORD(v30[0]) == 0xA0D1 )
            goto LABEL_51;
          if ( v1 == 6 )
          {
            if ( HIWORD(v30[0]) == 17360 )
            {
              if ( LOBYTE(v30[2]) )
                goto LABEL_48;
LABEL_51:
              LOBYTE(Buffer) = 1;
              HalpInterruptSetLineSpecificOverride(23LL);
              HalpInterruptSetLineSpecificOverride(22LL);
LABEL_52:
              LOBYTE(BusData) = -122;
              if ( LOWORD(v30[0]) == 0x8086 )
              {
LABEL_53:
                LOWORD(BusData) = HIWORD(v30[0]);
                goto LABEL_54;
              }
LABEL_55:
              if ( !v1 )
              {
                v14 = (v30[3] & 0x800000) == 0;
                goto LABEL_58;
              }
              goto LABEL_59;
            }
          }
          else
          {
LABEL_48:
            if ( v1 == 7 && HIWORD(v30[0]) == 17361 )
            {
              if ( LOBYTE(v30[2]) )
                goto LABEL_59;
              goto LABEL_51;
            }
          }
        }
      }
LABEL_54:
      if ( (_WORD)BusData == 28944 )
      {
        HalpPiix4Present = 1;
        v15 = v7 & 0xFFFFFF1F | 0x60;
        HalGetBusData(PCIConfiguration, v5, v15, v30, 0x40u);
        LOBYTE(v16) = v30[2];
        HalpPiix4 = v30[2];
        if ( (HalpWAETDeviceFlags & 2) == 0 )
          KeBugCheckEx(0x5Cu, 0x111uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\xxacpi.c", 0x66DuLL, 0LL);
        if ( LOBYTE(v30[2]) <= 1u )
        {
          HalpPiix4BusNumber = v5;
          HalpPiix4SlotNumber = v15;
          HalGetBusDataByOffset(PCIConfiguration, v5, v15, &HalpPiix4DevActB, 0x58u, 4u);
          HalpPiix4DevActB |= 0x23u;
          HalSetBusDataByOffset(PCIConfiguration, HalpPiix4BusNumber, HalpPiix4SlotNumber, &HalpPiix4DevActB, 0x58u, 4u);
        }
        LOBYTE(BusData) = HalpUsbLegacyStopUhciInterrupt(v16, v5, v15 & 0xFFFFFF5F, 1);
        break;
      }
      goto LABEL_55;
    }
LABEL_59:
    if ( (unsigned int)++v1 >= 8 )
    {
LABEL_60:
      ++v8;
      v1 = 0;
      if ( v8 < 0x20 )
        goto LABEL_8;
      if ( ++v5 >= 0x100 )
        break;
      goto LABEL_7;
    }
  }
  if ( a1 )
  {
    v17 = Handle;
    if ( Handle )
    {
      LOBYTE(BusData) = ZwClose(Handle);
      v17 = 0LL;
      Handle = 0LL;
    }
    if ( Buffer_2 )
    {
      ObjectAttributes[2] = KeyHandle;
      LODWORD(ObjectAttributes[1]) = 48;
      ObjectAttributes[3] = v28;
      LODWORD(ObjectAttributes[4]) = 64;
      *(_OWORD *)&ObjectAttributes[5] = 0LL;
      BusData = ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition);
      if ( BusData >= 0 )
      {
        BusData = ZwQueryValueKey(
                    Handle,
                    &ValueName,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    0x14u,
                    (PULONG)ObjectAttributes);
        if ( BusData >= 0 )
        {
          if ( DWORD2(KeyValueInformation) )
          {
            LOBYTE(BusData) = BYTE12(KeyValueInformation);
            HalpBroken440BX = BYTE12(KeyValueInformation);
          }
        }
      }
LABEL_75:
      v17 = Handle;
    }
    if ( v17 )
      LOBYTE(BusData) = ZwClose(v17);
    if ( KeyHandle )
      LOBYTE(BusData) = ZwClose(KeyHandle);
  }
  return BusData;
}
