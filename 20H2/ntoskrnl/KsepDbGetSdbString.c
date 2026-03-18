/*
 * XREFs of KsepDbGetSdbString @ 0x1408C2028
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x1407520BC (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408C205C (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     KsepStringDuplicate @ 0x1407543C0 (KsepStringDuplicate.c)
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
