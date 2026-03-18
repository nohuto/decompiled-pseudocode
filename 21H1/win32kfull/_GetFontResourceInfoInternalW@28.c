/*
 * XREFs of _GetFontResourceInfoInternalW@28 @ 0x24757E
 * Callers:
 *     _NtGdiGetFontResourceInfoInternalW@28 @ 0x212E5B (_NtGdiGetFontResourceInfoInternalW@28.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     _vIFIMetricsToLogFontW@8 @ 0x206CAD (_vIFIMetricsToLogFontW@8.c)
 */

int __fastcall GetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        int a7)
{
  unsigned __int16 *v7; // ebx
  int v9; // edi
  struct PFF *v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  char *v13; // ecx
  int v14; // esi
  unsigned int v15; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int16 *v18; // [esp+10h] [ebp-8h]
  struct _FONTHASH **v19; // [esp+14h] [ebp-4h] BYREF
  unsigned int v20; // [esp+20h] [ebp+8h]
  unsigned int v21; // [esp+24h] [ebp+Ch]

  v7 = a1;
  v18 = a1;
  v9 = 0;
  v17 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v19 = (struct _FONTHASH **)gpPFTPrivate;
  if ( gpPFTPrivate )
  {
    v10 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v19, v7, a2, a3, 0, 0, 0, 0);
    if ( v10 )
      goto LABEL_5;
    v7 = v18;
  }
  v19 = gpPFTPublic;
  v10 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v19, v7, a2, a3, 0, 0, 0, 0);
  if ( !v10 )
  {
    if ( a7 != 5 )
      goto LABEL_46;
    if ( !a4 )
      goto LABEL_44;
    if ( a6 && a4 >= 4 )
    {
      *a6 = 1;
      goto LABEL_44;
    }
    goto LABEL_46;
  }
LABEL_5:
  switch ( a7 )
  {
    case 0:
      if ( a4 )
      {
        if ( a4 < 4 )
          break;
        *a6 = *((_DWORD *)v10 + 31);
      }
      goto LABEL_44;
    case 1:
      v14 = *((_DWORD *)v10 + 15);
      v15 = (*(int (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(v14 + 2104))(*((_DWORD *)v10 + 14), 1, 0, 0);
      v12 = v15;
      if ( v15 == -1 )
        break;
      if ( a4 )
      {
        if ( v15 > a4 )
          v12 = -1;
        else
          v12 = (*(int (__stdcall **)(_DWORD, int, unsigned int, int *))(v14 + 2104))(*((_DWORD *)v10 + 14), 1, a4, a6);
      }
      if ( v12 == -1 )
        break;
LABEL_28:
      *a5 = v12;
LABEL_45:
      v9 = 1;
      break;
    case 2:
      v11 = *((_DWORD *)v10 + 31);
      v12 = 92 * v11;
      if ( a4 )
      {
        if ( a4 < v12 )
          break;
        v21 = 0;
        if ( v11 )
        {
          v13 = (char *)v10 + 132;
          v20 = (unsigned int)v10 + 132;
          do
          {
            vIFIMetricsToLogFontW((int)a6 + v9, *(_DWORD *)(*(_DWORD *)v13 + 20));
            v9 += 92;
            v13 = (char *)(v20 + 4);
            ++v21;
            v20 += 4;
          }
          while ( v21 < *((_DWORD *)v10 + 31) );
        }
        v12 = v9;
      }
      goto LABEL_28;
    case 3:
      if ( !a4 )
        goto LABEL_44;
      if ( a6 && a4 >= 4 )
      {
        if ( *((_DWORD *)v10 + 15) == dword_2785B8 && !*(_DWORD *)(*((_DWORD *)v10 + 14) + 4) )
          v9 = 1;
        *a6 = v9;
        goto LABEL_44;
      }
      break;
    case 5:
      if ( !a4 )
        goto LABEL_44;
      if ( a6 && a4 >= 4 )
      {
        *a6 = 0;
LABEL_44:
        *a5 = 4;
        goto LABEL_45;
      }
      break;
    default:
      EngSetLastError(0x57u);
      break;
  }
LABEL_46:
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v9;
}
