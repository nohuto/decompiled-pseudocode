/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x1800E0D94
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800E0C2C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180234740 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 * Callees:
 *     InitializeInteractionStateInfo @ 0x18004D590 (InitializeInteractionStateInfo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800E0F50 (--0-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Flags.c)
 *     ??0?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800E0FE4 (--0-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEnum@Dw.c)
 *     ??0?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800E1078 (--0-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEn.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  __int64 v2; // r8

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_1802DFA20;
  *(_OWORD *)((char *)this + 36) = xmmword_1802DFA30;
  *(_OWORD *)((char *)this + 52) = xmmword_1802DFA40;
  *(_OWORD *)((char *)this + 68) = xmmword_1802DFA50;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 148) &= 0xCu;
  *((_BYTE *)this + 148) |= 0xC0u;
  *((_BYTE *)this + 136) &= ~1u;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 2;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 1110704128;
  *((_DWORD *)this + 33) = 1110704128;
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>((char *)this + 160);
  CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>((char *)this + 320);
  CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>((char *)this + 480);
  *((_DWORD *)this + 160) = v2;
  *((_QWORD *)this + 82) = v2;
  *((_QWORD *)this + 83) = v2;
  *((_QWORD *)this + 84) = v2;
  *((_DWORD *)this + 170) = v2;
  *((_QWORD *)this + 86) = v2;
  *((_QWORD *)this + 87) = v2;
  *((_QWORD *)this + 88) = v2;
  *((_DWORD *)this + 178) = v2;
  *((_QWORD *)this + 90) = v2;
  *((_QWORD *)this + 91) = v2;
  *((_QWORD *)this + 92) = v2;
  *((_DWORD *)this + 186) = v2;
  *((_QWORD *)this + 94) = v2;
  *((_QWORD *)this + 95) = v2;
  *((_QWORD *)this + 96) = v2;
  *((_DWORD *)this + 194) = v2;
  *((_BYTE *)this + 1264) &= 0xF0u;
  *((_DWORD *)this + 226) = v2;
  *((_DWORD *)this + 243) = v2;
  *((_DWORD *)this + 260) = v2;
  *((_DWORD *)this + 277) = v2;
  *((_DWORD *)this + 294) = v2;
  *((_DWORD *)this + 311) = v2;
  *((_DWORD *)this + 317) = v2;
  `vector constructor iterator'(
    (char *)this + 1272,
    (unsigned int)(v2 + 12),
    (unsigned int)(v2 + 3),
    (void (__fastcall *)(char *))TemporaryConfiguration::TemporaryConfiguration);
  `vector constructor iterator'(
    (char *)this + 1308,
    12LL,
    3LL,
    (void (__fastcall *)(char *))TemporaryConfiguration::TemporaryConfiguration);
  InitializeInteractionStateInfo((__int64)this + 784);
  return this;
}
