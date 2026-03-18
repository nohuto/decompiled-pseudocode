/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x1408951C4
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140895C20 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1409A9A14 (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpGetNtMergePages(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax

  result = IopLiveDumpGetCapturePagesNoLock(
             (int)a1 + 544,
             (int)a1 + 680,
             a2,
             BufferChunkSizeInPages,
             (__int64)a4,
             (__int64)a5);
  if ( *a4 )
  {
    result = *(_QWORD *)(a1 + 752);
    *a3 = *(_QWORD *)(result + 8LL * *a5);
  }
  return result;
}
