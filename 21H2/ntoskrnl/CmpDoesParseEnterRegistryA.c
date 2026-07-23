/*
 * XREFs of CmpDoesParseEnterRegistryA @ 0x140710500
 * Callers:
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesParseEnterRegistryA(__int64 a1, __int64 a2)
{
  bool result; // al
  _WORD *v3; // r8

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)CmpRegistryRootObject + 1) )
  {
    if ( *(_WORD *)a2 )
    {
      v3 = *(_WORD **)(a2 + 8);
      if ( ((*v3 - 65) & 0xFFDF) == 0 && (*(_WORD *)a2 <= 2u || v3[1] == 92) )
        return 1;
    }
  }
  return result;
}
