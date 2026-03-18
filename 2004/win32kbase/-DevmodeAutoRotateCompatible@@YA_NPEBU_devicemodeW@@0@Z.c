/*
 * XREFs of ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C0147230
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0148914 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DevmodeAutoRotateCompatible(const struct _devicemodeW *dmPanningWidth, const struct _devicemodeW *a2)
{
  unsigned int v2; // ebx
  DWORD v3; // r9d
  const struct _devicemodeW *v4; // r8
  DWORD dmPelsWidth; // r10d
  DWORD dmPelsHeight; // eax
  __int64 v7; // rax

  v2 = 0;
  v3 = a2->dmFields & dmPanningWidth->dmFields;
  v4 = dmPanningWidth;
  if ( (a2->dmFields & LOBYTE(dmPanningWidth->dmFields) & 0x80u) == 0 )
    goto LABEL_8;
  v2 = 1;
  if ( (v3 & 0x80000) == 0 )
    goto LABEL_8;
  v2 = 2;
  if ( (v3 & 0x100000) == 0 )
    goto LABEL_8;
  v2 = 3;
  LOBYTE(dmPanningWidth) = ((dmPanningWidth->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0;
  dmPelsWidth = v4->dmPelsWidth;
  if ( (_BYTE)dmPanningWidth != (((a2->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0) )
  {
    if ( dmPelsWidth == a2->dmPelsHeight )
    {
      dmPelsHeight = a2->dmPelsWidth;
      goto LABEL_7;
    }
LABEL_8:
    v7 = WdLogNewEntry5_WdEvent(dmPanningWidth, a2, v4);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdEvent(v7);
    return 0;
  }
  if ( dmPelsWidth != a2->dmPelsWidth )
    goto LABEL_8;
  dmPelsHeight = a2->dmPelsHeight;
LABEL_7:
  if ( v4->dmPelsHeight != dmPelsHeight )
    goto LABEL_8;
  v2 = 4;
  if ( (v3 & 0x20000000) != 0 && v4->dmDisplayFixedOutput != a2->dmDisplayFixedOutput )
    goto LABEL_8;
  v2 = 5;
  LOBYTE(dmPanningWidth) = (v3 & 0x20) != 0;
  if ( (v3 & 0x20) != 0 && v4->dmPosition.x != a2->dmPosition.x )
    goto LABEL_8;
  v2 = 6;
  if ( (v3 & 0x20) != 0 && v4->dmPosition.y != a2->dmPosition.y )
    goto LABEL_8;
  v2 = 7;
  if ( (v3 & 0x800) != 0 && v4->dmColor != a2->dmColor )
    goto LABEL_8;
  v2 = 8;
  if ( (v3 & 0x1000) != 0 && v4->dmDuplex != a2->dmDuplex )
    goto LABEL_8;
  v2 = 9;
  if ( (v3 & 0x2000) != 0 && v4->dmYResolution != a2->dmYResolution )
    goto LABEL_8;
  v2 = 10;
  if ( (v3 & 0x4000) != 0 && v4->dmTTOption != a2->dmTTOption )
    goto LABEL_8;
  v2 = 11;
  if ( (v3 & 0x8000) != 0 && v4->dmCollate != a2->dmCollate )
    goto LABEL_8;
  v2 = 12;
  if ( (v3 & 0x20000) != 0 && v4->dmLogPixels != a2->dmLogPixels )
    goto LABEL_8;
  v2 = 13;
  if ( (v3 & 0x40000) != 0 && v4->dmBitsPerPel != a2->dmBitsPerPel )
    goto LABEL_8;
  v2 = 14;
  if ( (v3 & 0x200000) != 0 && v4->dmDisplayFlags != a2->dmDisplayFlags )
    goto LABEL_8;
  v2 = 15;
  if ( (v3 & 0x400000) != 0 && v4->dmDisplayFrequency != a2->dmDisplayFrequency )
    goto LABEL_8;
  v2 = 16;
  if ( (v3 & 0x800000) != 0 && v4->dmICMMethod != a2->dmICMMethod )
    goto LABEL_8;
  v2 = 17;
  if ( (v3 & 0x1000000) != 0 && v4->dmICMIntent != a2->dmICMIntent )
    goto LABEL_8;
  v2 = 18;
  if ( (v3 & 0x8000000) != 0 )
  {
    dmPanningWidth = (const struct _devicemodeW *)a2->dmPanningWidth;
    if ( v4->dmPanningWidth != (_DWORD)dmPanningWidth )
      goto LABEL_8;
  }
  v2 = 19;
  if ( (v3 & 0x10000000) != 0 )
  {
    dmPanningWidth = (const struct _devicemodeW *)a2->dmPanningHeight;
    if ( v4->dmPanningHeight != (_DWORD)dmPanningWidth )
      goto LABEL_8;
  }
  return 1;
}
