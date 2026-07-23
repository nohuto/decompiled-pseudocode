/*
 * XREFs of _ZwCompareObjects@8 @ 0x4B2F3330
 * Callers:
 *     _RtlIsCurrentProcess@4 @ 0x4B3668F0 (_RtlIsCurrentProcess@4.c)
 *     _RtlIsCurrentThread@4 @ 0x4B366920 (_RtlIsCurrentThread@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  return Wow64SystemServiceCall();
}
