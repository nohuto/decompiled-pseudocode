/*
 * XREFs of ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_TYPE@@PAW4PenType@12@@Z @ 0x1B0B55
 * Callers:
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z @ 0x1B0B80 (-PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(int a1, _DWORD *a2)
{
  int v2; // ecx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return -1073741811;
      *a2 = 2;
    }
    else
    {
      *a2 = 1;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0;
}
