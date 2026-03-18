/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E
 * Callers:
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 * Callees:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GreExcludeClipRect@20 @ 0x79558 (_GreExcludeClipRect@20.c)
 *     _GreConvertMemToRedirectionDC@8 @ 0x7AB00 (_GreConvertMemToRedirectionDC@8.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _GreConvertRedirectionToMemDC@8 @ 0x200FC3 (_GreConvertRedirectionToMemDC@8.c)
 */

DC *__userpurge BltOldRedirectionBitsToNewBitmap@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        HBITMAP a4,
        HBITMAP a5,
        const struct tagBITMAP *a6,
        const struct tagBITMAP *a7,
        int a8,
        int a9)
{
  BOOL v11; // ebx
  HDC SolidBrush; // ebx
  HDC v13; // esi
  const RECT *v15; // [esp+0h] [ebp-3Ch]
  HBRUSH v16; // [esp+4h] [ebp-38h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  int v19; // [esp+24h] [ebp-18h]
  DC *v21; // [esp+44h] [ebp+8h]

  v11 = 0;
  if ( IsWindowDesktopComposed(a2) )
    v11 = (*(_BYTE *)(a2[5] + 18) & 8) != 0;
  v18 = GreSelectBitmap(_ghdcMem, a1);
  v17 = GreSelectBitmap(_ghdcMem2, a3);
  v19 = GreConvertMemToRedirectionDC(_ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *a2,
    *a2,
    a1,
    -(int)a6,
    -(int)a7,
    *((_DWORD *)a4 + 1) - (_DWORD)a6,
    *((_DWORD *)a4 + 2) - (_DWORD)a7,
    *a2,
    *a2,
    a3,
    0,
    0,
    (char *)a6 + *((_DWORD *)a4 + 1),
    *((_DWORD *)a4 + 2));
  v21 = NtGdiBitBltInternal(
          _ghdcMem2,
          -(int)a6,
          (struct XDCOBJ *)-(int)a7,
          *((_DWORD *)a4 + 1),
          *((_DWORD *)a4 + 2),
          _ghdcMem,
          0,
          0,
          -2134114272,
          0,
          2);
  if ( v11 )
  {
    SolidBrush = 0;
    v13 = *(HDC *)(*(_DWORD *)(a2[19] + 4) + 44);
    if ( v13
      || *(_DWORD *)(*(_DWORD *)(a2[2] + 232) + 672)
      && (SolidBrush = (HDC)GreCreateSolidBrush(*(_DWORD *)(*(_DWORD *)(a2[2] + 232) + 672)), (v13 = SolidBrush) != 0) )
    {
      if ( (unsigned int)v13 <= 0x1F )
        v13 = *(HDC *)(_gpsi + 4 * (_DWORD)v13 + 4288);
      GreExcludeClipRect(
        _ghdcMem2,
        -(int)a6,
        -(int)a7,
        *((_DWORD *)a4 + 1) - (_DWORD)a6,
        *((_DWORD *)a4 + 2) - (_DWORD)a7);
      FillRect(v13, v15, v16);
      GreExtSelectClipRgnInternal(_ghdcMem2, 5, 1);
      if ( SolidBrush )
        GreDeleteObject(SolidBrush);
    }
  }
  if ( v19 )
    GreConvertRedirectionToMemDC(_ghdcMem2);
  GreSelectBitmap(_ghdcMem, v18);
  GreSelectBitmap(_ghdcMem2, v17);
  return v21;
}
