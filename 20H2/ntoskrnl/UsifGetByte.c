/*
 * XREFs of UsifGetByte @ 0x1405C9E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsifGetByte(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // rcx

  if ( !a1 )
    return 3LL;
  v4 = *a1;
  if ( !v4 )
    return 3LL;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64))off_140C05370)(v4 + 68) )
    return 1LL;
  *a2 = ((__int64 (__fastcall *)(__int64))off_140C05370)(*a1 + 0x80000);
  return 0LL;
}
