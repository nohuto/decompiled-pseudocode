/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x140953CF8
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140953508 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x140661C18 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140953B2C (PiSwRemovePdoAssociation.c)
 */

void __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  __int64 *v1; // rdi
  void *v2; // rbx

  v1 = *(__int64 **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
}
