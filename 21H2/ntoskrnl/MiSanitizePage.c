/*
 * XREFs of MiSanitizePage @ 0x140217B28
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = a1 & 0xFFFFFFFFFLL;
  if ( a1 < 0x1000000000LL )
    return a1;
  return result;
}
