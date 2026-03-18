/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z @ 0x974F8
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _HT_Get8BPPMaskPalette@24 @ 0x1BA810 (_HT_Get8BPPMaskPalette@24.c)
 */

BOOL __thiscall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // esi
  struct tagPALETTEENTRY *v8; // eax
  const unsigned int *v9; // esi
  unsigned int v10; // eax
  int v11; // edi
  char v12; // al
  int i; // esi
  char v14; // cl
  int j; // esi
  char v16; // cl
  int k; // esi
  char v18; // cl
  int m; // eax
  int v20; // [esp-4h] [ebp-3Ch]
  ULONG ulPrimaryOrder; // [esp+10h] [ebp-28h]
  LONG v23; // [esp+10h] [ebp-28h]
  ULONG v24; // [esp+10h] [ebp-28h]
  _DWORD v25[8]; // [esp+14h] [ebp-24h] BYREF

  switch ( a2 )
  {
    case 7:
    case 6:
    case 5:
      ulPrimaryOrder = a3->ulPrimaryOrder;
      v3 = a2 == 5 ? 31 : 255;
      v4 = a2 == 5 ? 0 : 0xFB20;
      v5 = v4 + 992;
      if ( (ulPrimaryOrder & 1) != 0 )
      {
        v5 = a2 == 5 ? 31 : 255;
        v3 = v4 + 992;
      }
      if ( (ulPrimaryOrder & 2) != 0 )
      {
        v6 = v5;
        v5 = a2 == 5 ? 31744 : 16711680;
      }
      else
      {
        v6 = a2 == 5 ? 31744 : 16711680;
        if ( (ulPrimaryOrder & 4) != 0 )
        {
          v6 = v3;
          v3 = a2 == 5 ? 31744 : 16711680;
        }
      }
      return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0, v6, v5, v3, 0x100200u, 1) != 0;
    case 0:
      v9 = (const unsigned int *)&apalMono;
      v10 = 2;
      if ( (a3->flHTFlags & 0x100) != 0 )
      {
        v9 = v25;
        v25[0] = 0xFFFFFF;
        v25[1] = 0;
      }
      goto LABEL_39;
    case 2:
      goto LABEL_23;
    case 3:
      v20 = 16;
      v9 = (const unsigned int *)&apalVGA;
LABEL_38:
      v10 = v20;
LABEL_39:
      v11 = 0;
LABEL_40:
      if ( !PALMEMOBJ::bCreatePalette(this, 1u, v10, v9, 0, 0, 0, 0x100400u, 1) )
      {
        if ( v11 )
          Win32FreePool(v9);
        return 0;
      }
      if ( v11 )
        Win32FreePool(v9);
      return 1;
  }
  if ( a2 != 4 )
  {
LABEL_23:
    v24 = a3->ulPrimaryOrder;
    v12 = v24;
    qmemcpy(v25, &apal3BPP, sizeof(v25));
    if ( (v24 & 1) != 0 )
    {
      for ( i = 1; i < 7; ++i )
      {
        v14 = BYTE1(v25[i]);
        BYTE1(v25[i]) = BYTE2(v25[i]);
        BYTE2(v25[i]) = v14;
      }
      v12 = v24;
    }
    if ( (v12 & 2) != 0 )
    {
      for ( j = 1; j < 7; ++j )
      {
        v16 = v25[j];
        LOBYTE(v25[j]) = BYTE1(v25[j]);
        BYTE1(v25[j]) = v16;
      }
    }
    else if ( (v12 & 4) != 0 )
    {
      for ( k = 1; k < 7; ++k )
      {
        v18 = v25[k];
        LOBYTE(v25[k]) = BYTE2(v25[k]);
        BYTE2(v25[k]) = v18;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      for ( m = 0; m < 8; ++m )
        v25[m] ^= 0xFFFFFFu;
    }
    v20 = 8;
    v9 = v25;
    goto LABEL_38;
  }
  v23 = HT_Get8BPPMaskPalette(
          0,
          a3->flHTFlags & 8,
          HIBYTE(a3->flHTFlags),
          a3->ciDevice.RedGamma,
          a3->ciDevice.GreenGamma,
          a3->ciDevice.BlueGamma);
  v8 = (struct tagPALETTEENTRY *)PALLOCMEM2(4 * v23, 1818316871, 0);
  v9 = (const unsigned int *)v8;
  if ( v8 )
  {
    if ( (a3->flHTFlags & 0x400) != 0 )
      *v8 = (struct tagPALETTEENTRY)809650002;
    else
      *v8 = 0;
    HT_Get8BPPMaskPalette(
      v8,
      a3->flHTFlags & 8,
      HIBYTE(a3->flHTFlags),
      a3->ciDevice.RedGamma,
      a3->ciDevice.GreenGamma,
      a3->ciDevice.BlueGamma);
    v10 = v23;
    v11 = 1;
    goto LABEL_40;
  }
  return 0;
}
