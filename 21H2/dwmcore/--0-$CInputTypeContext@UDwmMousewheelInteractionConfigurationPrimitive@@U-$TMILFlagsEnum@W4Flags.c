/*
 * XREFs of ??0?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800E09A0
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800E04DC (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 20) = xmmword_1803647B0;
  *(_OWORD *)(a1 + 36) = xmmword_1803647C0;
  *(_OWORD *)(a1 + 52) = xmmword_1803647D0;
  *(_OWORD *)(a1 + 68) = xmmword_1803647E0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 148) &= 0xCu;
  *(_BYTE *)(a1 + 148) |= 0xC0u;
  *(_BYTE *)(a1 + 136) &= ~1u;
  *(_DWORD *)(a1 + 128) = 1110704128;
  *(_DWORD *)(a1 + 132) = 1110704128;
  result = a1;
  *(_QWORD *)(a1 + 140) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  return result;
}
