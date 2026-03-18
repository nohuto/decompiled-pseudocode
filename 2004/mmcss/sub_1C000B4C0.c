/*
 * XREFs of sub_1C000B4C0 @ 0x1C000B4C0
 * Callers:
 *     NotifyRoutine @ 0x1C0001060 (NotifyRoutine.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000B440 @ 0x1C000B440 (sub_1C000B440.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C000B4C0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0x4873634Du);
  }
}
