/*
 * XREFs of ?PenNibShapeFromInkFeedbackPenNibShape@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_NIB_SHAPE@@PAW4PenNibShape@12@@Z @ 0x1B0B37
 * Callers:
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z @ 0x1B0B80 (-PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Protocols::SuperWetInk::PenNibShapeFromInkFeedbackPenNibShape(int a1, _DWORD *a2)
{
  if ( a1 )
  {
    if ( a1 != 1 )
      return -1073741811;
    *a2 = 1;
  }
  else
  {
    *a2 = 0;
  }
  return 0;
}
