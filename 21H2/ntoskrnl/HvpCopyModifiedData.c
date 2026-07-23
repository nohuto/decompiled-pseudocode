/*
 * XREFs of HvpCopyModifiedData @ 0x140873F50
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140873E9C (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 */

void __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  unsigned int i; // ebx
  _QWORD *CellMap; // rax
  unsigned int v10; // r10d

  if ( a4 )
  {
    for ( i = 0; i < a4; i += 4096 )
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, i + a2);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0xC2DuLL);
      memmove((void *)(*CellMap + (CellMap[1] & 0xFFFFFFFFFFFFFFF0uLL)), (const void *)(a3 + i), 0x1000uLL);
    }
  }
}
