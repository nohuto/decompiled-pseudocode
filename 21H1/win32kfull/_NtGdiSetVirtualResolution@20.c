/*
 * XREFs of _NtGdiSetVirtualResolution@20 @ 0x21DCCC
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiSetVirtualResolution(HDC a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // ebx
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( !a3 )
      return v5;
    v6 = a4;
    if ( !a4 || !a5 )
      return v5;
  }
  else
  {
    if ( a3 )
      return v5;
    v6 = a4;
    if ( a4 || a5 )
      return v5;
  }
  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_DWORD *)(v8[0] + 1020) + 448) = a2;
    *(_DWORD *)(*(_DWORD *)(v8[0] + 1020) + 452) = a3;
    *(_DWORD *)(*(_DWORD *)(v8[0] + 1020) + 456) = v6;
    *(_DWORD *)(*(_DWORD *)(v8[0] + 1020) + 460) = a5;
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v5;
}
