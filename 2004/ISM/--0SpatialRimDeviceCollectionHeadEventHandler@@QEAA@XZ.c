/*
 * XREFs of ??0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ @ 0x180092290
 * Callers:
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x180092FFC (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18008B244 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QE.c)
 */

SpatialRimDeviceCollectionHeadEventHandler *__fastcall SpatialRimDeviceCollectionHeadEventHandler::SpatialRimDeviceCollectionHeadEventHandler(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>((__int64)this);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SpatialRimDeviceCollectionHeadEventHandler::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
