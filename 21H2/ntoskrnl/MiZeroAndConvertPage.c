/*
 * XREFs of MiZeroAndConvertPage @ 0x1405B05D0
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 */

unsigned __int64 __fastcall MiZeroAndConvertPage(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rsi
  BOOL v10; // ecx
  int v11; // r8d
  BOOL v12; // ebp

  v4 = a3;
  v7 = 1LL;
  result = 0xAAAAAAAAAAAAAAABuLL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v10 = 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 2) == 0 || (result = *(unsigned int *)(a1 + 16), (result & 0x3E0) == 0) )
      v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a2 != 3 )
    v7 = MiLargePageSizes[a2];
  v12 = v11 != v4;
  if ( v10 )
  {
    if ( v11 != (_DWORD)v4
      && dword_140C507D8[4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6) + v4] == (_DWORD)v4 )
    {
      MiChangePageAttributeContiguous(v9, v7, (unsigned int)v4);
      v12 = 0;
    }
    if ( a2 == 3 )
      result = MiZeroPhysicalPage(v9, 0, v4);
    else
      result = MiZeroLargePage(a1, a2, v4);
  }
  if ( v12 )
    return MiChangePageAttributeContiguous(v9, v7, (unsigned int)v4);
  return result;
}
