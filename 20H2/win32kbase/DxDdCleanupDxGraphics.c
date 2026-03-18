/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C0086CA4
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0086C10 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C024A840 )
    qword_1C024A840(qword_1C024A830);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C024A840 )
    qword_1C024A840(qword_1C024A830);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
