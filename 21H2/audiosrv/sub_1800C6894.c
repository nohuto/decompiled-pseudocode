/*
 * XREFs of sub_1800C6894 @ 0x1800C6894
 * Callers:
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_180064888 @ 0x180064888 (sub_180064888.c)
 * Callees:
 *     sub_1800CB090 @ 0x1800CB090 (sub_1800CB090.c)
 *     sub_1801324FC @ 0x1801324FC (sub_1801324FC.c)
 */

HMODULE __fastcall sub_1800C6894(__int64 a1)
{
  unsigned int v1; // esi
  HMODULE v2; // rbx
  unsigned int v3; // edi
  HRSRC Resource; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = a1;
  v2 = (HMODULE)sub_1801324FC(a1, 0LL);
  v3 = 1;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    Resource = FindResourceExW(v2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((v1 >> 4) + 1), 0);
    if ( Resource )
    {
      if ( sub_1800CB090(v2, Resource) )
        break;
    }
    v6 = sub_1801324FC(v5, v3++);
    v2 = (HMODULE)v6;
    if ( !v6 )
      return 0LL;
  }
  return v2;
}
