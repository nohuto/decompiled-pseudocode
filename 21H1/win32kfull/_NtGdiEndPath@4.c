/*
 * XREFs of _NtGdiEndPath@4 @ 0x21168A
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiEndPath(HDC a1)
{
  int v1; // esi
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v4, 0, sizeof(v4));
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    v2 = *(_DWORD *)(v4[0] + 172);
    if ( (v2 & 1) != 0 )
    {
      *(_DWORD *)(v4[0] + 172) = v2 & 0xFFFFFFFE;
      v1 = 1;
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v1;
}
