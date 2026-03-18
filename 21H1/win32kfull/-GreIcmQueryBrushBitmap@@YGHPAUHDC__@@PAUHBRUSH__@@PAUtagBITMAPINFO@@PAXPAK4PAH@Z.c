/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC
 * Callers:
 *     _NtGdiIcmBrushInfo@32 @ 0x21C455 (_NtGdiIcmBrushInfo@32.c)
 * Callees:
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge GreIcmQueryBrushBitmap@<eax>(
        HBRUSH a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        HBRUSH a4,
        struct tagBITMAPINFO *a5,
        _DWORD *a6,
        unsigned int *a7,
        unsigned int *a8,
        int *a9)
{
  int DIBitsInternal; // esi
  unsigned int v10; // edi
  HBRUSH v11; // edi
  struct tagBITMAPINFO *BitmapBitsSize; // ebx
  struct tagBITMAPINFO *v13; // eax
  int v14; // eax
  int v17; // [esp+18h] [ebp-18h]
  HBRUSH v18[2]; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD v19[3]; // [esp+24h] [ebp-Ch] BYREF

  v18[0] = a1;
  v17 = 0;
  DIBitsInternal = 0;
  v10 = 0;
  if ( a3 && a6 && a7 && a5 )
  {
    v19[1] = 0;
    v19[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v19, a2);
    if ( !v19[0] )
    {
LABEL_27:
      *a6 = v17;
      *a7 = v10;
      return DIBitsInternal;
    }
    if ( (*(_BYTE *)(v19[0] + 80) & 1) == 0 )
    {
LABEL_26:
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
      goto LABEL_27;
    }
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v18, v18[0]);
    v11 = v18[0];
    if ( !v18[0] )
    {
      v10 = 0;
      goto LABEL_26;
    }
    if ( *((char *)v18[0] + 24) >= 0 )
      goto LABEL_15;
    v17 = *((_DWORD *)v18[0] + 15);
    if ( v17 )
      goto LABEL_15;
    if ( BRUSH::hFindIcmDIB((BRUSH *)v18[0], *(void **)(*(_DWORD *)(v19[0] + 1020) + 264)) )
    {
      v10 = 1;
LABEL_24:
      XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v18);
      DEC_SHARE_REF_CNT(v18[0]);
      goto LABEL_26;
    }
    memset(a3 + 1, 0, 0x424u);
    *(_DWORD *)a3 = 44;
    DIBitsInternal = GreGetDIBitsInternal(a2, *((struct XEPALOBJ **)v11 + 4), 0, 0, 0, a3, 0, 0, 0x428u);
    if ( DIBitsInternal )
    {
      BitmapBitsSize = (struct tagBITMAPINFO *)GreGetBitmapBitsSize(a3);
      if ( !BitmapBitsSize )
      {
        DIBitsInternal = 0;
LABEL_15:
        v10 = 0;
        goto LABEL_24;
      }
      v13 = a5;
      if ( !a4 )
      {
        DIBitsInternal = 1;
LABEL_22:
        v13->bmiHeader.biSize = (DWORD)BitmapBitsSize;
        goto LABEL_23;
      }
      if ( (unsigned int)BitmapBitsSize <= a5->bmiHeader.biSize )
      {
        v14 = *((_DWORD *)a3 + 2);
        if ( v14 < 0 )
          v14 = -v14;
        DIBitsInternal = GreGetDIBitsInternal(
                           a2,
                           *((struct XEPALOBJ **)v11 + 4),
                           0,
                           (HBITMAP)v14,
                           (int)a4,
                           a3,
                           0,
                           BitmapBitsSize,
                           0x428u);
        v13 = a5;
        goto LABEL_22;
      }
    }
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  return 0;
}
