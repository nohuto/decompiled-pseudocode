/*
 * XREFs of MiCopyFromDirectMapExtent @ 0x1408CC97C
 * Callers:
 *     MiReadImageHeaders @ 0x1406FE9CC (MiReadImageHeaders.c)
 * Callees:
 *     MiFillPageWithImageExtentContents @ 0x14053B684 (MiFillPageWithImageExtentContents.c)
 */

__int64 __fastcall MiCopyFromDirectMapExtent(char *BugCheckParameter3, __int64 a2, ULONG_PTR *a3, __int64 a4)
{
  __int64 *v4; // rsi
  unsigned __int64 v7; // rbx

  v4 = (__int64 *)(a2 + 48);
  v7 = ((*(_DWORD *)(a2 + 24) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  for ( *(_QWORD *)(a4 + 8) = v7 << 12; v7; --v7 )
  {
    MiFillPageWithImageExtentContents(BugCheckParameter3, *v4, *a3, 0x1000u, 0);
    *a3 += 4096LL;
    ++v4;
  }
  return 0LL;
}
