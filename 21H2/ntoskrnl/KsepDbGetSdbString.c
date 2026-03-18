/*
 * XREFs of KsepDbGetSdbString @ 0x140963878
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepStringDuplicate @ 0x14075C924 (KsepStringDuplicate.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
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
