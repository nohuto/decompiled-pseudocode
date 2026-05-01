/*
 * XREFs of sub_1800714F0 @ 0x1800714F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 */

bool __fastcall sub_1800714F0(__int64 a1, char a2)
{
  return ((a2 & 1) == 0 || (unsigned int)sub_180012D40(a1))
      && ((a2 & 2) == 0 || (unsigned int)sub_1800223BC(a1, 2) || (*(_BYTE *)(a1 + 836) & 1) != 0)
      && ((a2 & 4) == 0 || !sub_18003C57C(a1))
      && ((a2 & 8) == 0 || sub_180071270(a1));
}
