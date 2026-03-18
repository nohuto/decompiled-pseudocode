/*
 * XREFs of _TransformForInputMagnification@12 @ 0x13EFD9
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _ConvertPointCoordinates@44 @ 0x13ED36 (_ConvertPointCoordinates@44.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 *     _MagInputTransform@0 @ 0x178E27 (_MagInputTransform@0.c)
 *     _MagnificationTransformPoint@8 @ 0x178EB2 (_MagnificationTransformPoint@8.c)
 */

int __stdcall TransformForInputMagnification(int *a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // esi

  AcquireMagInputLock();
  v3 = MagInputTransform();
  v4 = v3;
  if ( v3 && PtInRect((_DWORD *)(v3 + 16), *a3, a3[1]) )
  {
    MagnificationTransformPoint(v4);
    ConvertPointCoordinates(a2, *a3, a3[1], a1[37], a1[38], a1[39], a1[40], a1[41], a1[42], a1[43], a1[44]);
  }
  return _InterlockedExchange(&gpMagInputLock, 0);
}
