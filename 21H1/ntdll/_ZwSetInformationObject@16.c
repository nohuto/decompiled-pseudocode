/*
 * XREFs of _ZwSetInformationObject@16 @ 0x4B2F2F40
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetInformationObject(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
