/*
 * XREFs of _TpWaitForJobNotification@4 @ 0x4B383780
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 *     _TppJobpValidateJob@8 @ 0x4B383B34 (_TppJobpValidateJob@8.c)
 */

int __stdcall TpWaitForJobNotification(int a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((signed __int64 *)(a1 + 80), 0, 1);
  }
  return result;
}
