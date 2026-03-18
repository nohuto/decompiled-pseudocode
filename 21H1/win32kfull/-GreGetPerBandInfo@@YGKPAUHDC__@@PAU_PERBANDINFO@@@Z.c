/*
 * XREFs of ?GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z @ 0x1D7882
 * Callers:
 *     _NtGdiGetPerBandInfo@8 @ 0x1D96D8 (_NtGdiGetPerBandInfo@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 */

int __fastcall GreGetPerBandInfo(HDC a1, _DWORD *a2)
{
  int v3; // esi
  DC *v4; // ecx
  int v5; // edx
  int v6; // eax
  int (__stdcall *v7)(int, _DWORD *); // esi
  DC *v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v9[0] = 0;
  v3 = -1;
  v9[1] = 0;
  *a2 = 0;
  v9[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( !XDCOBJ::bValidSurf(v9) )
  {
LABEL_8:
    v4 = v9[0];
    goto LABEL_9;
  }
  v4 = v9[0];
  v5 = *((_DWORD *)v9[0] + 126);
  if ( v5 )
  {
    v6 = *((_DWORD *)v9[0] + 9);
    if ( *(_DWORD *)(v6 + 1824) )
    {
      if ( (*(_DWORD *)(v5 + 72) & 0x2000000) != 0 )
      {
        v7 = *(int (__stdcall **)(int, _DWORD *))(v6 + 2200);
        if ( v7 )
        {
          v3 = v7(v5 + 16, a2);
          if ( v3 == -1 )
            v3 = -1;
          goto LABEL_8;
        }
        v3 = 0;
      }
    }
  }
LABEL_9:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v3;
}
