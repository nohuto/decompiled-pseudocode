/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C028A780
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C005D5F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C005D630 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  int v6; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    v4 = v7[0];
    if ( v7[0] )
    {
      v5 = 1;
      v8 = *(_QWORD *)(v7[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 236LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v8);
        v6 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v8);
        v4 = v7[0];
      }
      else
      {
        *a2 = 0;
        v6 = 0;
      }
      a2[1] = v6;
    }
    else
    {
      EngSetLastError(6u);
      v4 = v7[0];
      v5 = 0;
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    return v5;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
