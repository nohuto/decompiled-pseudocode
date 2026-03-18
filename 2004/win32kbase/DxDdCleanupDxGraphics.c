/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C00235B4
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0023520 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C024C840 )
    qword_1C024C840(qword_1C024C830);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C024C840 )
    qword_1C024C840(qword_1C024C830);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
