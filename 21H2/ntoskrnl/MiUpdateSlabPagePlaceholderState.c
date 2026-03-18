/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x14023BE50 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402EB59C (MiGetPageFromSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1405B0E30 (MiFreeSlabEntry.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     VslSetPlaceholderPages @ 0x1403A1494 (VslSetPlaceholderPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  BOOL v8; // ebx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // esi

  v4 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v4 <= 3 )
  {
    v8 = 1;
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v9 = 48 * a2 - 0x220000000000LL;
        MiSetPfnIdentity(v9, 3LL);
        MiAbortCombineScan(v9);
        v4 = *(unsigned int *)(a1 + 48);
      }
      v10 = 0;
      if ( (unsigned int)v4 > 3 )
        v4 = (unsigned int)(v4 - 4);
      v11 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
    }
    else
    {
      if ( a3 == 1 )
      {
        MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0LL);
        v4 = *(unsigned int *)(a1 + 48);
        v8 = (unsigned int)v4 <= 3;
      }
      if ( !v8 )
        v4 = (unsigned int)(v4 - 4);
      v11 = 0;
      v10 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
    }
    if ( (MiFlags & 0x4000) != 0 && (int)VslSetPlaceholderPages(a2, a3, v10, v11) < 0 )
      KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v10, (int)v11);
  }
}
