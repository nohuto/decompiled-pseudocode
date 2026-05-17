/*
 * XREFs of _RtlpHpSegMgrVaCtxInitialize@16 @ 0x4B37C7AB
 * Callers:
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 * Callees:
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

int __fastcall RtlpHpSegMgrVaCtxInitialize(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  int v5; // [esp+0h] [ebp-8h] BYREF
  int v6; // [esp+4h] [ebp-4h] BYREF

  RtlpHpQueryVA(a2, &v6, &v5, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
  result = v6;
  *(_WORD *)(v6 + 2) = (1 << (a4 / a3)) - 2;
  *(_DWORD *)(result + 4) = -1;
  return result;
}
