/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14031B9E8
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406C6A70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406C6EE4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
