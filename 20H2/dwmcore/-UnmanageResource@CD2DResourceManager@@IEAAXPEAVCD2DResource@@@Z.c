/*
 * XREFs of ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x180046E38
 * Callers:
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18003767C (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x180046A98 (--1CD2DResource@@MEAA@XZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x180249F2C (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023A328 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
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
