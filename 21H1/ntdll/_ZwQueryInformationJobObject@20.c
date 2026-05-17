/*
 * XREFs of _ZwQueryInformationJobObject@20 @ 0x4B2F3E20
 * Callers:
 *     _RtlGetSessionProperties@8 @ 0x4B346440 (_RtlGetSessionProperties@8.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryInformationJobObject(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
