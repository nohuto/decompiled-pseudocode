/*
 * XREFs of KsepDbGetSdbString @ 0x1408BAFA8
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14074195C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x140743C60 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
