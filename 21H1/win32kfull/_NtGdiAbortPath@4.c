/*
 * XREFs of _NtGdiAbortPath@4 @ 0x2114CD
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiAbortPath(HDC a1)
{
  int v1; // esi
  DC *v2; // eax
  int v3; // ecx
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  v2 = (DC *)v5[0];
  if ( v5[0] )
  {
    if ( *(_DWORD *)(v5[0] + 136) )
    {
      v3 = *(_DWORD *)(v5[0] + 172);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v5[0] + 172) = v3 & 0xFFFFFFFD;
        v2 = (DC *)v5[0];
      }
      *((_DWORD *)v2 + 43) &= ~1u;
      DC::hpath(v2, 0);
      v2 = (DC *)v5[0];
    }
    v1 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v2 = (DC *)v5[0];
  }
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v1;
}
