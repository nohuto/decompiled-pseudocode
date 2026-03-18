/*
 * XREFs of _NtGdiSetColorSpace@8 @ 0x21C67C
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiSetColorSpace(HDC a1, int a2)
{
  int v2; // ebx
  int v3; // edx
  int v4; // esi
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = 0;
  v6[1] = 0;
  v6[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    if ( a2 == *(_DWORD *)(*(_DWORD *)(v6[0] + 1020) + 16) )
    {
      v2 = 1;
    }
    else
    {
      LOBYTE(v3) = 9;
      v4 = HmgShareLockCheck(a2, v3);
      if ( v4 )
      {
        DEC_SHARE_REF_CNT(*(_DWORD *)(v6[0] + 64));
        *(_DWORD *)(*(_DWORD *)(v6[0] + 1020) + 16) = a2;
        *(_DWORD *)(v6[0] + 64) = v4;
        INC_SHARE_REF_CNT(v4);
        v2 = 1;
        DEC_SHARE_REF_CNT(v4);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v2;
}
