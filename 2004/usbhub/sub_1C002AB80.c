/*
 * XREFs of sub_1C002AB80 @ 0x1C002AB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C002AB80(__int64 a1, __int64 a2)
{
  int v2; // r9d
  IRP *v3; // r10

  sub_1C000FD80(a1, 8, 1181967203, 0LL, a2);
  v3->IoStatus.Status &= v2;
  IofCompleteRequest(v3, 0);
  return 0LL;
}
