/*
 * XREFs of ComputeEventEntryHash @ 0x1B6672
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     RunningHash @ 0x1B6C78 (RunningHash.c)
 */

int __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v5; // bl
  int v6; // esi
  int v7; // edi

  RunningHash(4);
  v5 = a1 + 2;
  if ( v5 < a2 )
  {
    v6 = a3 + 16 * v5;
    v7 = (unsigned __int8)(a2 - v5);
    do
    {
      RunningHash(*(_DWORD *)(v6 + 8));
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
