/*
 * XREFs of _AddMagnificationOutputTransform@4 @ 0xEF322
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 *     _MagInputTransform@0 @ 0x178E27 (_MagInputTransform@0.c)
 *     _MagnificationInverseTransformPoint@8 @ 0x178E3C (_MagnificationInverseTransformPoint@8.c)
 */

int __stdcall AddMagnificationOutputTransform(int *a1)
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // ecx

  v1 = 0;
  AcquireMagInputLock();
  v2 = *(_DWORD *)(_grpdeskRitInput + 132);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 8) & 2) != 0 )
    {
      v3 = (_DWORD *)MagInputTransform();
      if ( v3 )
      {
        if ( PtInRect(v3, *a1, a1[1]) )
        {
          MagnificationInverseTransformPoint();
          v1 = 1;
        }
      }
    }
  }
  _InterlockedExchange(&gpMagInputLock, 0);
  return v1;
}
