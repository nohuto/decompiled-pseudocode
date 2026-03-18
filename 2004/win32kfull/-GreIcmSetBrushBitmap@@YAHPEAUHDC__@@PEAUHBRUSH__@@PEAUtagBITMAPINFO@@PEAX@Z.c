/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B63E4
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02B6E20 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00FF2C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00FF340 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v6; // ebx
  BRUSH *v9; // rdi
  HBITMAP DIBitmapReal; // r8
  _QWORD v12[2]; // [rsp+70h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+80h] [rbp-18h] BYREF

  v6 = 0;
  v12[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( (*(_DWORD *)(v12[0] + 120LL) & 1) != 0 )
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v13, a2);
      v9 = (BRUSH *)v13[0];
      if ( v13[0] )
      {
        if ( (*(_DWORD *)(v13[0] + 40LL) & 0x80u) != 0 )
        {
          DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(
                                    a1,
                                    6,
                                    a4,
                                    &a3->bmiHeader.biSize,
                                    0,
                                    0x428u,
                                    0x7FFFFFu,
                                    0LL,
                                    0,
                                    0LL,
                                    1,
                                    0LL,
                                    0LL);
          if ( DIBitmapReal )
            v6 = BRUSH::bAddIcmDIB(v9, *(void **)(*(_QWORD *)(v12[0] + 976LL) + 248LL), DIBitmapReal);
        }
      }
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v13);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  return v6;
}
