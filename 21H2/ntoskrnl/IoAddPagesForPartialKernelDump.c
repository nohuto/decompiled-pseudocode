/*
 * XREFs of IoAddPagesForPartialKernelDump @ 0x14050B6A0
 * Callers:
 *     IoWriteCrashDump @ 0x140502CD0 (IoWriteCrashDump.c)
 * Callees:
 *     IoSaveBugCheckProgress @ 0x140502780 (IoSaveBugCheckProgress.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140503E50 (IopDumpCallRemovePagesCallbacks.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B798 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14050BAB0 (IopAddMiniDumpPagesToPartialKernelDump.c)
 */

__int64 __fastcall IoAddPagesForPartialKernelDump(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rdx

  AvailablePagesForPartialDump = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  v11 = 0;
  if ( (int)IopAddMiniDumpPagesToPartialKernelDump(a1, a2, a3, a4, a5, a6, a7) >= 0 )
  {
    v12 = IopAddLiveDumpPagesToPartialKernelDump(a1, a2, a3, v10, a5);
    if ( v12 < 0 )
      v12 = 0;
    v11 = v12;
  }
  IopDumpCallRemovePagesCallbacks(a1);
  IoSaveBugCheckProgress(34);
  v13 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  if ( v13 > AvailablePagesForPartialDump )
    *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 40LL) = v13 - AvailablePagesForPartialDump;
  return v11;
}
