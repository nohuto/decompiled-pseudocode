/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x180004FD0
 * Callers:
 *     ?Release@BamoDockableDeviceStub@@W7EAAKXZ @ 0x18004AD40 (-Release@BamoDockableDeviceStub@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
