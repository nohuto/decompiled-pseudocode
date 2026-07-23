/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140239680
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1405FDA18 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
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
