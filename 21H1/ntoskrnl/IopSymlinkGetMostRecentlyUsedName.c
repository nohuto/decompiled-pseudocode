/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x14030ADAC
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1406CDB70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CDFE4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
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
