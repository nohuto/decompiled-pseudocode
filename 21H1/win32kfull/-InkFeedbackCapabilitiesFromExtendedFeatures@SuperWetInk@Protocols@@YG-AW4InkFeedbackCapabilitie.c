/*
 * XREFs of ?InkFeedbackCapabilitiesFromExtendedFeatures@SuperWetInk@Protocols@@YG?AW4InkFeedbackCapabilities@@W4ExtendedFeatures@12@@Z @ 0x1B0B0B
 * Callers:
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Protocols::SuperWetInk::InkFeedbackCapabilitiesFromExtendedFeatures(char a1)
{
  int result; // eax

  result = (4 * (a1 & 0x10)) | 9;
  if ( (a1 & 4) != 0 )
    result = (4 * (a1 & 0x10)) | 0xB;
  if ( (a1 & 8) != 0 )
    result |= 4u;
  if ( (a1 & 1) != 0 )
    result |= 0x10u;
  if ( (a1 & 2) != 0 )
    return result | 0x20;
  return result;
}
