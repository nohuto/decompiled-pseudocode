/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x14066BE80
 * Callers:
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
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
