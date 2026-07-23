/*
 * XREFs of KsepDbGetSdbString @ 0x1408BF948
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x14075B434 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2, a3, a4);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
