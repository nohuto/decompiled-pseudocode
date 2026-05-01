/*
 * XREFs of sub_180075D24 @ 0x180075D24
 * Callers:
 *     sub_1800755F0 @ 0x1800755F0 (sub_1800755F0.c)
 *     sub_180075688 @ 0x180075688 (sub_180075688.c)
 * Callees:
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 */

char __fastcall sub_180075D24(__int64 a1, __int64 a2)
{
  char v4; // r11

  if ( (unsigned int)sub_180012D40(a1)
    && ((v4 = 1, (*(_BYTE *)(a1 + 836) & 1) != 0) || (unsigned int)sub_1800223BC(a1, 2))
    && (!a2
     || (((unsigned __int8)v4 & *(_BYTE *)(a2 + 62)) == 0
      || (int)sub_180063CBC(*(_DWORD *)(a2 + 56), *(_DWORD *)(*(_QWORD *)(a1 + 48) + 516LL)) <= 0)
     && (*(_BYTE *)(a2 + 62) & 0x10) != 0
     && ((unsigned __int8)v4 & *(_BYTE *)(a2 + 60)) != 0) )
  {
    return v4;
  }
  else
  {
    return 0;
  }
}
