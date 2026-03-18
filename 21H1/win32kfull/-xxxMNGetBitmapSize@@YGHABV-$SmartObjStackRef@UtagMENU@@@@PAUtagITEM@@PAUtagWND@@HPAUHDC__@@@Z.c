/*
 * XREFs of ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F
 * Callers:
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _MNInitUAHMenuItem@12 @ 0xB657C (_MNInitUAHMenuItem@12.c)
 *     _MNInitUAHMenu@12 @ 0xB75C2 (_MNInitUAHMenu@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MNUpdateUAHMaxPopupWidths@8 @ 0x1AB879 (_MNUpdateUAHMaxPopupWidths@8.c)
 */

int __fastcall xxxMNGetBitmapSize(int **a1, int a2, void *a3, void *a4, int a5)
{
  int v5; // esi
  _DWORD *v7; // eax
  int v8; // eax
  int DPIServerInfoForDpi; // eax
  _DWORD *v10; // ecx
  int v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // ecx
  int v15; // ecx
  int *v16; // ecx
  int v17; // eax
  int v18; // edx
  int result; // eax
  _DWORD v21[25]; // [esp+14h] [ebp-68h] BYREF

  v5 = a2;
  memset(v21, 0, 0x5Cu);
  v7 = *(_DWORD **)v5;
  if ( *(_DWORD *)(*(_DWORD *)v5 + 68) == -1 )
  {
    v21[1] = 0;
    v21[0] = 1;
    v8 = v7[2];
    v21[3] = 0;
    v21[2] = v8;
    DPIServerInfoForDpi = GetDPIServerInfoForDpi(a4);
    v10 = *(_DWORD **)v5;
    v21[4] = *(_DWORD *)(DPIServerInfoForDpi + 28);
    v21[5] = v10[8];
    if ( (*v10 & 0x100) == 0 && (v10[16] != -1 || !a3) )
      goto LABEL_8;
    xxxSendMessage(a3, 0, (int)v21);
    v11 = (int)a1[2];
    if ( !v11 )
      v11 = **a1;
    if ( MNGetpItemIndex(v11, v5) != -1 )
    {
LABEL_8:
      v12 = a1[2];
      if ( !v12 )
        v12 = (int *)**a1;
      if ( !MNIsUAHMenu(v12) || !a3 )
        goto LABEL_24;
      v13 = a1[2];
      if ( !v13 )
        v13 = (int *)**a1;
      MNInitUAHMenu(v13, a5, &v21[6]);
      v14 = a1[2];
      if ( !v14 )
        v14 = (int *)**a1;
      MNInitUAHMenuItem(v14, v5, &v21[9]);
      xxxSendMessage(a3, 0, (int)v21);
      v15 = (int)a1[2];
      if ( !v15 )
        v15 = **a1;
      if ( MNGetpItemIndex(v15, v5) != -1 )
      {
        qmemcpy((void *)(v5 + 36), &v21[10], 0x20u);
        if ( (*(_BYTE *)(*(_DWORD *)(**a1 + 20) + 20) & 1) != 0 )
        {
          v16 = a1[2];
          if ( !v16 )
            v16 = (int *)**a1;
          v5 = a2;
          v17 = MNUpdateUAHMaxPopupWidths(v16, a2);
          v18 = v17 + v21[3];
          goto LABEL_25;
        }
        v5 = a2;
LABEL_24:
        v18 = v21[3];
LABEL_25:
        result = 1;
        *(_DWORD *)(*(_DWORD *)v5 + 68) = v18;
        *(_DWORD *)(*(_DWORD *)v5 + 72) = v21[4];
        return result;
      }
    }
  }
  return 0;
}
