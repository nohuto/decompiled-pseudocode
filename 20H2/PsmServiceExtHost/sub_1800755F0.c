/*
 * XREFs of sub_1800755F0 @ 0x1800755F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180075D24 @ 0x180075D24 (sub_180075D24.c)
 */

bool __fastcall sub_1800755F0(__int64 a1, char a2)
{
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 1248) )
  {
    v4 = sub_180033D1C(*(_QWORD *)(a1 + 48) + 400LL, a1, 1);
    v5 = v4 & *(_DWORD *)(a1 + 1244);
    v6 = v4;
    if ( sub_180071270(a1) && (v5 != v6 || (a2 & 0x20) == 0) )
      return 1;
    if ( (a2 & 1) != 0 && v5 != v6 && (unsigned __int8)sub_180075D24(a1, 0LL) )
      return 1;
  }
  return result;
}
