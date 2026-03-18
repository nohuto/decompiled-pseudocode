/*
 * XREFs of _EditionMagnificationMousePosition@4 @ 0x178DE8
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 *     _MagInputTransform@0 @ 0x178E27 (_MagInputTransform@0.c)
 *     _MagnificationTransformPoint@8 @ 0x178EB2 (_MagnificationTransformPoint@8.c)
 */

__int32 __stdcall EditionMagnificationMousePosition(int *a1)
{
  int v1; // eax
  int v2; // esi

  AcquireMagInputLock();
  v1 = MagInputTransform();
  v2 = v1;
  if ( v1 && PtInRect((_DWORD *)(v1 + 16), *a1, a1[1]) )
    MagnificationTransformPoint(v2);
  return _InterlockedExchange(&gpMagInputLock, 0);
}
