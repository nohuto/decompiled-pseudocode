/*
 * XREFs of _ZwSetContextThread@8 @ 0x4B2F4230
 * Callers:
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetContextThread(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
