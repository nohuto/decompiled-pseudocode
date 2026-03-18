/*
 * XREFs of IvtDetachDeviceDomain @ 0x14052E450
 * Callers:
 *     <none>
 * Callees:
 *     IvtAttachDeviceDomainInternal @ 0x14052DF88 (IvtAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
}
