/*
 * XREFs of ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C00638A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E7990 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::AddSignalToContextByPtr(CAdapter *this, unsigned int a2, void *a3, __int64 a4)
{
  return DxgkSignalSynchronizationObjectFromGpuByReference(a3, a4, a2);
}
