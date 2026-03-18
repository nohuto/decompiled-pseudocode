/*
 * XREFs of MiZeroAndConvertPage @ 0x140351374
 * Callers:
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140334C04 (MiInitializeMdlOneNodeBatchPages.c)
 * Callees:
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 */

__int64 __fastcall MiZeroAndConvertPage(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  BOOL v9; // ecx
  unsigned __int64 v10; // r9
  int v11; // r8d
  BOOL v12; // esi
  __int64 result; // rax

  v4 = a3;
  v7 = 1LL;
  v8 = (a1 + 0x58000000000LL) / 48;
  v9 = (a4 & 1) != 0 || (a4 & 2) != 0 && (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0;
  v10 = *(unsigned __int8 *)(a1 + 34);
  v11 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a2 != 3 )
    v7 = MiLargePageSizes[a2];
  v12 = v11 != v4;
  if ( v9 )
  {
    if ( v11 != (_DWORD)v4 && dword_140C4DE18[4 * (v10 >> 6) + v4] == (_DWORD)v4 )
    {
      MiChangePageAttributeContiguous(v8, v7, (unsigned int)v4, v10);
      v12 = 0;
    }
    if ( a2 == 3 )
      MiZeroPhysicalPage(v8, 0, v4);
    else
      MiZeroLargePage(a1, a2);
  }
  if ( v12 )
    MiChangePageAttributeContiguous(v8, v7, (unsigned int)v4, v10);
  result = ZeroPte;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return result;
}
