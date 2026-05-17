/*
 * XREFs of _LdrpValidPathComponentsMask@0 @ 0x4B2D011D
 * Callers:
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrSetImplicitPathOptions@8 @ 0x4B32EF60 (_LdrSetImplicitPathOptions@8.c)
 *     _LdrSetDefaultDllDirectories@4 @ 0x4B33CCA0 (_LdrSetDefaultDllDirectories@4.c)
 * Callees:
 *     <none>
 */

int __stdcall LdrpValidPathComponentsMask()
{
  return (LdrpPolicyBits & 4 | 0x7B) << 8;
}
