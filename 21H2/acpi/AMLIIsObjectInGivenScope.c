/*
 * XREFs of AMLIIsObjectInGivenScope @ 0x1C001CF54
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIIsObjectInGivenScope(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // dl
  __int64 v6; // rcx

  v4 = -1073741767;
  v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v6 )
  {
    while ( v6 != *a2 )
    {
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_4;
    }
    v4 = 0;
  }
LABEL_4:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
  return v4;
}
