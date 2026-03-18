/*
 * XREFs of _GetPrefixCount@16 @ 0x1B837E
 * Callers:
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 * Callees:
 *     <none>
 */

int __fastcall GetPrefixCount(__int16 *a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  __int16 v11; // [esp+10h] [ebp-10h]
  unsigned __int16 v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v12 = -1;
  v4 = a3;
  v6 = 0;
  v13 = 0;
  v7 = 0;
  v14 = 0;
  if ( !a3 )
    a4 = a2;
  v8 = 0;
  while ( a2 > 0 )
  {
    --a2;
    v11 = *a1;
    v4 = a3;
    if ( !*a1 )
      break;
    v9 = a4--;
    if ( v9 <= 0 )
    {
      v8 = v14;
      break;
    }
    ++a1;
    v4 = a3;
    switch ( v11 )
    {
      case 38:
        ++v7;
        if ( *a1 != 38 )
          goto LABEL_8;
        if ( a3 )
        {
          *(_WORD *)(a3 + 2 * v14) = 38;
          v6 = v13;
          ++v14;
        }
        --a2;
        ++a1;
        v13 = ++v6;
LABEL_9:
        v8 = v14;
        break;
      case 30:
        ++v7;
LABEL_8:
        v12 = v6;
        goto LABEL_9;
      case 31:
        v8 = v14;
        ++v7;
        if ( !a2 )
          goto LABEL_23;
        ++v7;
        ++a1;
        --a2;
        break;
      default:
        v13 = ++v6;
        if ( !a3 )
          goto LABEL_9;
        *(_WORD *)(a3 + 2 * v14) = v11;
        v8 = ++v14;
        break;
    }
  }
LABEL_23:
  if ( v4 )
    *(_WORD *)(v4 + 2 * v8) = 0;
  return v12 | ((unsigned __int16)v7 << 16);
}
