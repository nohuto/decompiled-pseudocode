/*
 * XREFs of ?bRemoveColorTransform@XDCOBJ@@QAEHPAX@Z @ 0x1F4A14
 * Callers:
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall XDCOBJ::bRemoveColorTransform(XDCOBJ *this, void *a2)
{
  int v2; // esi
  PATHOBJ *v3; // eax
  PATHOBJ *v4; // edx
  ULONG cCurves; // ecx

  v2 = *(_DWORD *)this;
  v3 = *(PATHOBJ **)(*(_DWORD *)this + 1820);
  if ( !v3 )
    return 0;
  v4 = *(PATHOBJ **)(*(_DWORD *)this + 1820);
  while ( 1 )
  {
    cCurves = v3->cCurves;
    if ( (void *)v3->fl == a2 )
      break;
    v4 = v3;
    v3 = (PATHOBJ *)v3->cCurves;
    if ( !cCurves )
      return 0;
  }
  if ( v4 == v3 )
    *(_DWORD *)(v2 + 1820) = cCurves;
  else
    v4->cCurves = cCurves;
  Win32FreePool(v3);
  return 1;
}
