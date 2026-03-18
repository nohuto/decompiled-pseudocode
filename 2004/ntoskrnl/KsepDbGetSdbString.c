/*
 * XREFs of KsepDbGetSdbString @ 0x1408BC2C8
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x1407434DC (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x1407457E0 (KsepStringDuplicate.c)
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
