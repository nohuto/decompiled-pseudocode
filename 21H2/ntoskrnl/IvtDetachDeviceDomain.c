/*
 * XREFs of IvtDetachDeviceDomain @ 0x1404DFC70
 * Callers:
 *     <none>
 * Callees:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
}
