/*
 * XREFs of IvtDetachDeviceDomain @ 0x1404DE020
 * Callers:
 *     <none>
 * Callees:
 *     IvtAttachDeviceDomainInternal @ 0x1404DDBB8 (IvtAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
}
