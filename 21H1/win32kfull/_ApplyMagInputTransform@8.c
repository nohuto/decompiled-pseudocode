/*
 * XREFs of _ApplyMagInputTransform@8 @ 0x13ECD5
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 *     _MagInputTransform@0 @ 0x178E27 (_MagInputTransform@0.c)
 *     _MagnificationTransformPoint@8 @ 0x178EB2 (_MagnificationTransformPoint@8.c)
 */

__int32 __stdcall ApplyMagInputTransform(int *a1, int *a2)
{
  int v2; // eax
  int v3; // esi

  AcquireMagInputLock();
  v2 = MagInputTransform();
  v3 = v2;
  if ( v2 )
  {
    if ( PtInRect((_DWORD *)(v2 + 16), *a1, a1[1]) )
      MagnificationTransformPoint(v3);
    if ( PtInRect((_DWORD *)(v3 + 16), *a2, a2[1]) )
      MagnificationTransformPoint(v3);
  }
  return _InterlockedExchange(&gpMagInputLock, 0);
}
