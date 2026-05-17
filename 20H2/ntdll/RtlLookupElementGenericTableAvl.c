/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x18005BC00
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005BC2C (FindNodeOrParent.c)
 */

__int64 __fastcall RtlLookupElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(a1, a2, &v3) == 1 )
    return v3 + 32;
  else
    return 0LL;
}
