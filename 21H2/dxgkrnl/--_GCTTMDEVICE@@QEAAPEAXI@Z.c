/*
 * XREFs of ??_GCTTMDEVICE@@QEAAPEAXI@Z @ 0x1C005AAAC
 * Callers:
 *     ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C0347870 (-CloseCallback@CTTMDEVICE@@CAX_K@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0347AF0 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

CTTMDEVICE *__fastcall CTTMDEVICE::`scalar deleting destructor'(CTTMDEVICE *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0);
  return this;
}
