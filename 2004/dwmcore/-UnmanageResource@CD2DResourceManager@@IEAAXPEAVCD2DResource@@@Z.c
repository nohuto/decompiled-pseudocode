/*
 * XREFs of ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003EFC4
 * Callers:
 *     ??1CD2DResource@@MEAA@XZ @ 0x18003EC24 (--1CD2DResource@@MEAA@XZ.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1800B000C (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18024AEBC (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023B2B8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::UnmanageResource(CD2DContext **this, struct CD2DResource *a2)
{
  if ( *((_BYTE *)a2 + 33) )
  {
    if ( *((_BYTE *)a2 + 34) )
      CD2DContext::RemoveHwProtectedResource(this[3]);
    --*((_DWORD *)this + 4);
  }
  *((_BYTE *)a2 + 32) = 0;
}
