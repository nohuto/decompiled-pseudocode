/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x14071EC2C
 * Callers:
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14071EBF8 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwRemovePdoAssociation @ 0x14071EC6C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceDereference @ 0x140754648 (PiSwDeviceDereference.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
