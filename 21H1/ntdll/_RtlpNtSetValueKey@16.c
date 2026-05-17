/*
 * XREFs of _RtlpNtSetValueKey@16 @ 0x4B36D350
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 */

int __stdcall RtlpNtSetValueKey(int a1, int a2, int a3, int a4)
{
  _WORD v5[4]; // [esp+0h] [ebp-8h] BYREF

  v5[0] = 0;
  return ZwSetValueKey(a1, (int)v5, 0, a2, a3, a4);
}
