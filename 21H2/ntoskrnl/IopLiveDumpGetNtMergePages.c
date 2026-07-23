/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x1408985A4
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1409AD7B4 (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpGetNtMergePages(_RTL_BITMAP_EX *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax

  result = IopLiveDumpGetCapturePagesNoLock(a1 + 34, (__int64)a4, (__int64)a5);
  if ( *a4 )
  {
    result = a1[47].SizeOfBitMap;
    *a3 = *(_QWORD *)(result + 8LL * *a5);
  }
  return result;
}
