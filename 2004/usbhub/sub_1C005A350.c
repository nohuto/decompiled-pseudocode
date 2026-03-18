/*
 * XREFs of sub_1C005A350 @ 0x1C005A350
 * Callers:
 *     sub_1C005A580 @ 0x1C005A580 (sub_1C005A580.c)
 *     sub_1C005ADEC @ 0x1C005ADEC (sub_1C005ADEC.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 */

__int64 __fastcall sub_1C005A350(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned __int16 *v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  v4 = (unsigned __int16 *)sub_1C0011220(a2);
  v7 = v4[706];
  v6 = v4[705];
  return sub_1C00447AC(a3, 0x1AuLL, L"%4.4x%4.4x%4.4x", v4[704], v6, v7);
}
