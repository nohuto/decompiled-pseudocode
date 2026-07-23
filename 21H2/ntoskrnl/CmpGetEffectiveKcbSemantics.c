/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1406DEC70
 * Callers:
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14072A770 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
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
