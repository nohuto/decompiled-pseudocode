/*
 * XREFs of isspace @ 0x1403CE320
 * Callers:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x1405C0D48 (-ScTrimString@@YAXPEAD@Z.c)
 *     CmpGetToken @ 0x140A5A974 (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 8;
}
