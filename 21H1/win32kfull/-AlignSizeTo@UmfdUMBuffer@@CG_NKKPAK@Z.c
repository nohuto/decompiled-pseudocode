/*
 * XREFs of ?AlignSizeTo@UmfdUMBuffer@@CG_NKKPAK@Z @ 0x8AFD0
 * Callers:
 *     ?CommitReservedBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x8C4B6 (-CommitReservedBuffer@UmfdUMBuffer@@AAE_NK@Z.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x24B7D4 (-AllocTemporaryBuffer@UmfdUMBuffer@@AAE_NK@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

char __userpurge UmfdUMBuffer::AlignSizeTo@<al>(unsigned int a1@<ecx>, int *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(4095, a1, a2, v5, savedregs) & 0x80000000) != 0 )
    return 0;
  *a2 &= 0xFFFFF000;
  return 1;
}
