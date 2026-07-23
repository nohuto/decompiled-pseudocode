/*
 * XREFs of TpWaitForJobNotification @ 0x18007FC30
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x18007FCD8 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007FDC8 (TppJobpValidateJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}
