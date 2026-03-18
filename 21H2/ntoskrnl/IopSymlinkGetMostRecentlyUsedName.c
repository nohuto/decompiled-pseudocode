/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14024011C
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1406B9BC0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406B9F74 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
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
