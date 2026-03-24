/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1402BB470
 * Callers:
 *     IopSymlinkRememberJunction @ 0x14069E3D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x14069E848 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
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
