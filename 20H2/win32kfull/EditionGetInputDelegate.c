/*
 * XREFs of EditionGetInputDelegate @ 0x1C01E1280
 * Callers:
 *     <none>
 * Callees:
 *     GetInputDelegate @ 0x1C00BED28 (GetInputDelegate.c)
 */

__int64 __fastcall EditionGetInputDelegate(__int64 a1)
{
  return GetInputDelegate(*(_QWORD *)(a1 + 80), 4096);
}
