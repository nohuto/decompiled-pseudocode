/*
 * XREFs of HalpApicRegisterIoUnit @ 0x1403ABA00
 * Callers:
 *     HalpApicDiscover @ 0x1403AB950 (HalpApicDiscover.c)
 * Callees:
 *     HalpInterruptRegisterController @ 0x1403AC5D4 (HalpInterruptRegisterController.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403ACDC0 (HalRegisterPermanentAddressUsage.c)
 *     HalpApicGetCpuInfo @ 0x1403CE0A8 (HalpApicGetCpuInfo.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall HalpApicRegisterIoUnit(LARGE_INTEGER PhysicalAddress, int a2, int a3)
{
  int v6; // ebx
  NTSTATUS result; // eax
  _QWORD v8[30]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+110h] [rbp+10h] BYREF
  __int128 v10; // [rsp+120h] [rbp+20h]
  __int128 v11; // [rsp+130h] [rbp+30h]
  char v12; // [rsp+170h] [rbp+70h] BYREF
  char v13; // [rsp+178h] [rbp+78h] BYREF
  char v14; // [rsp+180h] [rbp+80h] BYREF
  char v15; // [rsp+188h] [rbp+88h] BYREF

  v14 = 0;
  v12 = 0;
  v15 = 0;
  v13 = 0;
  memset(v8, 0, 0xE8uLL);
  v6 = HIDWORD(v8[26]);
  v9 = 0LL;
  v8[24] = &v9;
  v10 = 0LL;
  v8[0] = 0xE800000001LL;
  v11 = 0LL;
  v8[25] = 0x200000030LL;
  LODWORD(v8[26]) = a2;
  if ( HalpApicX2Mode )
  {
    v8[15] = HalpApicConvertId;
    HIDWORD(v8[27]) = 16;
    LODWORD(v8[28]) = 0xFFFF;
    if ( !HalpApicGuestX2Mode )
      v6 = HIDWORD(v8[26]) | 0x100;
    if ( (unsigned __int8)HalpApicGetCpuInfo(&v14, &v15, &v12, &v13, v8[0]) )
    {
      if ( v13 == 2 )
      {
        if ( v14 != 6 || v12 != 47 )
          goto LABEL_3;
        LODWORD(v8[28]) = 255;
      }
      if ( v13 == 1 )
      {
        HalpApicDirectedEndOfInterruptModeEnabled = 1;
        v6 |= 0x400u;
        v8[22] = HalpApicDirectedEndOfInterrupt;
      }
    }
  }
  else
  {
    HIDWORD(v8[27]) = 4;
    v8[7] = HalpApicSetLogicalId;
    v6 = HIDWORD(v8[26]) | 4;
    LODWORD(v8[28]) = 15;
  }
LABEL_3:
  HIDWORD(v8[28]) = 96;
  v8[1] = HalpApicInitializeLocalUnit;
  HIDWORD(v8[26]) = v6 | 0xFB;
  v8[18] = HalpApicDeinitializeLocalUnit;
  LODWORD(v8[27]) = 15;
  v8[2] = HalpApicInitializeIoUnit;
  *(LARGE_INTEGER *)&v9 = PhysicalAddress;
  v8[3] = HalpApicSetPriority;
  v8[4] = HalpApicGetLocalUnitError;
  v8[5] = HalpApicClearLocalUnitError;
  v8[9] = HalpApicWriteEndOfInterrupt;
  v8[10] = HalpApicEndOfInterrupt;
  v8[11] = HalpApicSetLineState;
  v8[12] = HalpApicRequestInterrupt;
  v8[13] = HalpApicStartProcessor;
  v8[14] = HalpApicGenerateMessage;
  v8[16] = HalpApicSaveLocalInterrupts;
  v8[17] = HalpApicReplayLocalInterrupts;
  v8[20] = HalpApicQueryAndGetSource;
  DWORD2(v9) = a2;
  HIDWORD(v10) = a3;
  result = HalRegisterPermanentAddressUsage(PhysicalAddress, 0x400u);
  if ( result >= 0 )
    return HalpInterruptRegisterController(v8);
  return result;
}
