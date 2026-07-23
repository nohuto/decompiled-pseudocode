/*
 * XREFs of MiAddTriageDumpPtes @ 0x1405384AC
 * Callers:
 *     MmSnapTriageDumpInformation @ 0x140538EF4 (MmSnapTriageDumpInformation.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall MiAddTriageDumpPtes(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  int v4; // eax

  v2 = a1;
  for ( i = 0; i < 4; ++i )
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !i )
    {
      v4 = MI_IS_PHYSICAL_ADDRESS(a1);
      if ( v4 )
        continue;
    }
    LOBYTE(v4) = IoAddTriageDumpDataBlock(v2, (PVOID)8);
  }
  return v4;
}
