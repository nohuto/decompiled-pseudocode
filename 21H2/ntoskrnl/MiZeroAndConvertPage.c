/*
 * XREFs of MiZeroAndConvertPage @ 0x1402352B0
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 */

__int64 __fastcall MiZeroAndConvertPage(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  BOOL v9; // ecx
  int v10; // r8d
  BOOL v11; // esi
  __int64 result; // rax

  v4 = a3;
  v7 = 1LL;
  v8 = (a1 + 0x58000000000LL) / 48;
  v9 = (a4 & 1) != 0 || (a4 & 2) != 0 && (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0;
  v10 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a2 != 3 )
    v7 = MiLargePageSizes[a2];
  v11 = v10 != v4;
  if ( v9 )
  {
    if ( v10 != (_DWORD)v4
      && dword_140C4DFD8[4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6) + v4] == (_DWORD)v4 )
    {
      MiChangePageAttributeContiguous(v8, v7, (unsigned int)v4);
      v11 = 0;
    }
    if ( a2 == 3 )
      MiZeroPhysicalPage(v8);
    else
      MiZeroLargePage(a1, a2, (unsigned int)v4);
  }
  if ( v11 )
    MiChangePageAttributeContiguous(v8, v7, (unsigned int)v4);
  result = ZeroPte;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return result;
}
