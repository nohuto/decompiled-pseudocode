/*
 * XREFs of sub_180026F54 @ 0x180026F54
 * Callers:
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026F54(__int64 a1, char a2)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned int v4; // ecx
  _QWORD *v6; // rax

  if ( a2 < 0 )
  {
    v6 = (_QWORD *)(a1 + 600);
    v4 = 0;
    v3 = *v6 == (_QWORD)v6;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 648);
    if ( (v2 & 0x2000000000LL) == 0 )
      return 0;
    v3 = (v2 & 0x10000000000LL) != 0 || (a2 & 1) == 0;
    v4 = 0;
  }
  LOBYTE(v4) = v3;
  return v4;
}
