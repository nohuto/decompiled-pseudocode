/*
 * XREFs of sub_18000F8EC @ 0x18000F8EC
 * Callers:
 *     sub_18000F494 @ 0x18000F494 (sub_18000F494.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18000F8EC(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  _BOOL8 result; // rax

  v1 = a1[2];
  result = v1 < 0x200
        && (v2 = a1[1], v2 < 0x400)
        && ((v1 & 2) == 0 || (v2 & 2) != 0)
        && ((v1 & 0xC) == 0 || (v2 & 4) != 0)
        && ((v1 & 0x20) == 0 || (v2 & 0x10) != 0)
        && ((v2 & 8) != 0 || (v1 & 0x10) == 0)
        && ((v2 & 1) != 0 || (v1 & 1) == 0)
        && ((v1 & 0x40) == 0 || (v2 & 0x20) != 0)
        && (((unsigned __int8)v2 ^ (unsigned __int8)(v1 >> 1)) & 0x40) == 0
        && ((a1[2] & 0x100) == 0 || (*a1 & 0x400) == 0);
  return result;
}
