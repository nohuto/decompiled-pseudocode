/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1403476AC
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406EF2E4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
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
