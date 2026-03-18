/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800DFF30
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800DFF00 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180185270 (-SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018A678 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18018D5FC (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x18018F0E4 (-SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800DFFA4 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180111A2C (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18018A118 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsPointerType(CInteractionProcessor *a1, int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1272, &v11, &v12);
  v6 = a2 - 2;
  if ( !v6 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a3,
             v11,
             v12);
  v7 = v6 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 160,
             a3,
             v11,
             v12);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
                 (char *)a1 + 480,
                 a3,
                 v11,
                 v12);
      else
        return 0LL;
    }
    else
    {
      return *((_DWORD *)a1 + 160) != 0;
    }
  }
  else if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
  {
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 320,
             a3,
             v11,
             v12);
  }
  else
  {
    return 1LL;
  }
}
