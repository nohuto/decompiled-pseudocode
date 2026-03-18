/*
 * XREFs of _NtGdiComputeXformCoefficients@4 @ 0x1FF0AA
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 */

int __stdcall NtGdiComputeXformCoefficients(HDC a1)
{
  int v1; // esi
  int v2; // esi
  _DWORD v4[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v5[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = 0;
  v5[1] = 0;
  v5[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v4, (struct XDCOBJ *)v5, 516);
    v2 = *(_DWORD *)(v4[0] + 56);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
    return v2 & 1;
  }
  return v1;
}
