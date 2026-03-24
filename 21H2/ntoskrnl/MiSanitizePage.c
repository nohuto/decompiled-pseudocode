/*
 * XREFs of MiSanitizePage @ 0x140295E68
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C2C08 (MiMapViewOfPhysicalSection.c)
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
