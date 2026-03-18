/*
 * XREFs of MiSanitizePage @ 0x1402F9F28
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
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
