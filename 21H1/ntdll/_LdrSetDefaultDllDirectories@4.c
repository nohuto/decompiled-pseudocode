/*
 * XREFs of _LdrSetDefaultDllDirectories@4 @ 0x4B33CCA0
 * Callers:
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 * Callees:
 *     _LdrpValidPathComponentsMask@0 @ 0x4B2D011D (_LdrpValidPathComponentsMask@0.c)
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  int valid; // eax
  int v2; // ecx

  if ( !DirectoryFlags )
    return -1073741811;
  valid = LdrpValidPathComponentsMask();
  if ( ((~valid | 0x100) & v2) != 0 )
    return -1073741811;
  LdrpDefaultDllDirectories = v2;
  return 0;
}
