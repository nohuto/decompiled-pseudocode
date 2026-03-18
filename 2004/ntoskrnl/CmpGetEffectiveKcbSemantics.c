/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1405DE270
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
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
