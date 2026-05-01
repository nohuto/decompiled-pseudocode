/*
 * XREFs of sub_1800049F4 @ 0x1800049F4
 * Callers:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800049F4(PULONG BitMapBuffer, int a2)
{
  unsigned int v2; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2 - 3;
  RtlInitializeBitMap(&BitMapHeader, BitMapBuffer, 0x2Fu);
  return _bittest64((const signed __int64 *)BitMapHeader.Buffer, v2);
}
