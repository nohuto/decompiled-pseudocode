/*
 * XREFs of _ZwCreateTimer2@20 @ 0x4B2F35B0
 * Callers:
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateTimer2(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
