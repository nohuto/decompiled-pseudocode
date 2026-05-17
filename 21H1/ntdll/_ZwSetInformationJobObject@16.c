/*
 * XREFs of _ZwSetInformationJobObject@16 @ 0x4B2F42F0
 * Callers:
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetInformationJobObject(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
