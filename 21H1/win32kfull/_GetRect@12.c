/*
 * XREFs of _GetRect@12 @ 0x6E5F2
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _UT_GetParentDCClipBox@12 @ 0x71660 (_UT_GetParentDCClipBox@12.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112 (-GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z.c)
 *     _SBCtlSetup@4 @ 0x1A3664 (_SBCtlSetup@4.c)
 * Callees:
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GetRect(int a1, int *a2, char a3)
{
  int v4; // esi
  int *v5; // esi
  int *v6; // esi
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // esi
  unsigned int v12; // edx
  int v13; // ecx
  int *v14; // edx
  int v15; // ecx
  int *v16; // esi
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // [esp+14h] [ebp-28h]
  unsigned int v21; // [esp+18h] [ebp-24h]
  int v23; // [esp+20h] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-18h] BYREF
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  int v27; // [esp+30h] [ebp-Ch]

  v4 = *(_DWORD *)(a1 + 20);
  if ( (a3 & 2) != 0 )
    v5 = (int *)(v4 + 52);
  else
    v5 = (int *)(v4 + 68);
  v24 = *v5;
  v6 = v5 + 1;
  v25 = *v6++;
  v26 = *v6;
  v27 = v6[1];
  *a2 = v24;
  a2[1] = v25;
  a2[2] = v26;
  a2[3] = v27;
  v7 = *(_DWORD *)(a1 + 20);
  result = *(_WORD *)(v7 + 30) & 0x3FFF;
  if ( result == 669 )
    return result;
  v9 = a3 & 0x70;
  switch ( v9 )
  {
    case 32:
      v14 = (int *)(v7 + 52);
LABEL_20:
      v15 = v14[1];
      result = *v14;
      *a2 -= *v14;
      a2[2] -= result;
      a2[3] -= v15;
      a2[1] -= v15;
      return result;
    case 16:
      v14 = (int *)(v7 + 68);
      goto LABEL_20;
    case 64:
      v10 = a1;
      v20 = *(_DWORD *)(a1 + 56);
      v11 = *(_DWORD *)(v20 + 20);
      result = *(_WORD *)(v11 + 30) & 0x3FFF;
      if ( result != 669 )
      {
        v12 = *(_DWORD *)(v7 + 184);
        v21 = *(_DWORD *)(v11 + 184);
        if ( (((v12 >> 8) ^ (v21 >> 8)) & 0x1FF) != 0 )
          goto LABEL_25;
        v13 = 1;
        v23 = (v12 & 0xF) == 2 && (v12 & 0x20000000) != 0;
        if ( (v21 & 0xF) != 2 || (v21 & 0x20000000) == 0 )
          v13 = 0;
        if ( v23 != v13 )
        {
LABEL_25:
          v16 = (int *)(v11 + 68);
          v24 = *v16++;
          v25 = *v16++;
          v26 = *v16;
          v27 = v16[1];
          LogicalToPhysicalInPlaceRectWithSubpixel(v20, &v24, 0);
          v10 = a1;
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v24, 0);
          v11 = *(_DWORD *)(v20 + 20);
          v14 = &v24;
        }
        else
        {
          v14 = (int *)(v11 + 68);
        }
        if ( (*(_BYTE *)(v11 + 18) & 0x40) != 0 && (a3 & 2) != 0 && (*(_BYTE *)(*(_DWORD *)(v10 + 20) + 23) & 0x40) != 0 )
        {
          v17 = v14[1];
          v18 = v14[2];
          a2[3] -= v17;
          a2[1] -= v17;
          result = v18 - a2[2];
          v19 = v18 - *a2;
          *a2 = result;
          a2[2] = v19;
          return result;
        }
        goto LABEL_20;
      }
      break;
  }
  return result;
}
