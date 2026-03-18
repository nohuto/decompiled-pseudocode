/*
 * XREFs of _PnpMultiSzGetLen @ 0x1406EBC4C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406EB5EC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceSiblings @ 0x14097D064 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x14097EC50 (_PnpMultiSzDeleteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
