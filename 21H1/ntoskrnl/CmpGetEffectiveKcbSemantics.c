/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x140694910
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1)
{
  if ( *(_WORD *)(a1 + 66) )
    return *(unsigned __int8 *)(a1 + 65);
  else
    return 0LL;
}
