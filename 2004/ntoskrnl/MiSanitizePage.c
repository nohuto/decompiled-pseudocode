/*
 * XREFs of MiSanitizePage @ 0x140336F58
 * Callers:
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
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
