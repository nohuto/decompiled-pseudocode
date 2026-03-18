/*
 * XREFs of _bUMPD@4 @ 0x1FF2C8
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall bUMPD(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  v3[1] = 0;
  v3[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v3[0] + 36) + 24) & 0x8000;
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
