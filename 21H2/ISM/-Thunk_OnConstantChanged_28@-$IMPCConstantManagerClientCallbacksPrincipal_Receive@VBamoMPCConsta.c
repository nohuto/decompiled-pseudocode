/*
 * XREFs of ?Thunk_OnConstantChanged_28@?$IMPCConstantManagerClientCallbacksPrincipal_Receive@VBamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18011C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPROPVARIANT@@2@Z @ 0x18011C044 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@QEAAJW4InputType.c)
 */

__int64 __fastcall IMPCConstantManagerClientCallbacksPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl>::Thunk_OnConstantChanged_28(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::OnConstantChanged(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 24));
}
