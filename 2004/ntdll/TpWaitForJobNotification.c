/*
 * XREFs of TpWaitForJobNotification @ 0x18007F210
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18005294C (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x18007F2B8 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007F3A8 (TppJobpValidateJob.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9

  result = TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, 1uLL, v3);
  }
  return result;
}
