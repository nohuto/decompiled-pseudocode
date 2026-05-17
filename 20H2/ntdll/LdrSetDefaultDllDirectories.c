/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18007FCE0
 * Callers:
 *     LdrpInitializePolicy @ 0x18007FB28 (LdrpInitializePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrSetDefaultDllDirectories(int a1)
{
  if ( !a1 || ((~((LdrpPolicyBits & 4 | 0x7A) << 8) | 0x100) & a1) != 0 )
    return 3221225485LL;
  LdrpDefaultDllDirectories = a1;
  return 0LL;
}
