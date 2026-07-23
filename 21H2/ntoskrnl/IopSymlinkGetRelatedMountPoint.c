/*
 * XREFs of IopSymlinkGetRelatedMountPoint @ 0x1405FE0C4
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetRelatedMountPoint(__int64 a1, unsigned __int16 a2)
{
  if ( !a1 )
    return a1;
  do
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
      break;
    if ( *(_WORD *)a1 > a2 )
      break;
    a1 = *(_QWORD *)(a1 + 8);
  }
  while ( a1 );
  if ( a1 && (*(_BYTE *)(a1 + 2) & 1) == 0 )
    return 0LL;
  else
    return a1;
}
