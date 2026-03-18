/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800BF724
 * Callers:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017C9C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800BF6B0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x1800C20DC (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022C758 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18022C80C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18022D638 (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18022ECC0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigWithMask(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  *a2 = 0;
  v3 = (_DWORD *)(a1 + 8);
  *a3 = 0;
  v4 = 3LL;
  do
  {
    if ( *((_BYTE *)v3 - 8) )
    {
      *a2 |= *v3 & *(v3 - 1);
      result = (unsigned int)*v3;
      *a3 |= result;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
