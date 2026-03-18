/*
 * XREFs of _MulReplaceRedirectionChild@12 @ 0x2069BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulReplaceRedirectionChild(int a1, SURFOBJ *a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // edi
  SURFOBJ *v5; // esi

  v3 = 0;
  v4 = **(_DWORD ***)a1;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(SURFOBJ **)(*(_DWORD *)(a1 + 4) + 4 * v4[2]);
      if ( v5 == a2 )
        break;
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        return v3;
    }
    GreMarkDeletableBitmap(v5->hsurf);
    EngUnlockSurface(v5);
    EngLockSurface(*(HSURF *)(a3 + 4));
    GreMarkUndeletableBitmap(*(_DWORD *)(a3 + 4));
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v4[2]) = a3;
    return 1;
  }
  return v3;
}
