/*
 * XREFs of ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18022B0C8
 * Callers:
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x1800C8F7C (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180229D98 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v4; // r10
  int v5; // r8d

  v4 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    return 0LL;
  v5 = a4 & a3;
  while ( ((v5 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12 * v4 + 8)) & a2) == 0 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 112) )
      return 0LL;
  }
  return 1LL;
}
