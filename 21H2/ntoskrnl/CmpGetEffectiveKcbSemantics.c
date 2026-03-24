/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1405EF510
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14072A2C0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(__int16 *)(a1 + 66) == *(unsigned __int16 *)(a2 + 4) )
  {
    result = *(unsigned __int8 *)(a1 + 65);
    if ( !(_BYTE)result )
      return 2LL;
  }
  else if ( *(_WORD *)(a1 + 66) )
  {
    return *(unsigned __int8 *)(a1 + 65);
  }
  else
  {
    return 0LL;
  }
  return result;
}
