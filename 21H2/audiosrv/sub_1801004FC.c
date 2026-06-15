/*
 * XREFs of sub_1801004FC @ 0x1801004FC
 * Callers:
 *     sub_180100760 @ 0x180100760 (sub_180100760.c)
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

__int64 __fastcall sub_1801004FC(__int64 a1, __int64 a2)
{
  bool v3; // zf

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x40u, (__int64)&unk_1801726D0);
  }
  v3 = *(_DWORD *)(a1 + 56) == 3;
  *(_BYTE *)(a1 + 60) = 1;
  if ( v3 )
    sub_180104244(a1);
  LOBYTE(a2) = 1;
  return sub_180104404(a1, a2, 0LL);
}
