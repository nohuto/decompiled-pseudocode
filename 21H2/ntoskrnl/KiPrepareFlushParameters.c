/*
 * XREFs of KiPrepareFlushParameters @ 0x140390E7C
 * Callers:
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038A028 (KeFlushSingleCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C96BC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, char *a3)
{
  char v3; // al
  int v4; // ecx
  int v5; // ecx

  if ( KiKvaShadow )
  {
    if ( !a1 || (v4 = a1 - 1) != 0 && v4 == 1 )
    {
      v3 = 0;
LABEL_4:
      *a2 = 0LL;
      *a3 = v3;
      return;
    }
LABEL_6:
    v3 = 1;
    goto LABEL_4;
  }
  if ( !a1 )
    goto LABEL_6;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    *a2 = 0LL;
  }
  else
  {
    *a2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  }
  *a3 = 0;
}
