/*
 * XREFs of ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1802250A8
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18004DA64 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18004DCC0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180227D14 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180228184 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MidManipulationUpdateTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "CaptureContact";
    if ( !a1 )
      return "InteractionAddition";
    v1 = a1 - 1;
    if ( !v1 )
      return "InteractionRemoval";
    v2 = v1 - 1;
    if ( !v2 )
      return "VisualAddition";
    v3 = v2 - 1;
    if ( !v3 )
      return "VisualRemoval";
    if ( v3 == 1 )
      return "VisualProperty";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "CaptureManipulation";
  v6 = v5 - 1;
  if ( !v6 )
    return "InteractionConfig";
  v7 = v6 - 1;
  if ( !v7 )
    return "InteractionTempConfig";
  if ( v7 != 1 )
    return "UNKNOWN";
  return "InteractionRails";
}
