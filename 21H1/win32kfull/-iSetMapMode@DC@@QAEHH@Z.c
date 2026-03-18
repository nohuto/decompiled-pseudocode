/*
 * XREFs of ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F
 * Callers:
 *     _NtGdiGetAndSetDCDword@16 @ 0x1FF0F9 (_NtGdiGetAndSetDCDword@16.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19 (-vMarkTransformDirty@DC@@QAEXXZ.c)
 *     ?vComputePageXform@DC@@QAEXXZ @ 0x21D283 (-vComputePageXform@DC@@QAEXXZ.c)
 */

int __thiscall DC::iSetMapMode(DC *this, int a2)
{
  int v3; // ecx
  _DWORD *v4; // edx
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // edi
  int v11; // eax
  INT *v12; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // edi
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // eax
  INT (__stdcall *v24)(INT, INT, INT); // esi
  INT v25; // eax
  int v26; // ecx
  int v27; // eax
  INT v28; // [esp-8h] [ebp-58h]
  unsigned int v29; // [esp+10h] [ebp-40h]
  int v30; // [esp+14h] [ebp-3Ch]
  INT *v31; // [esp+18h] [ebp-38h] BYREF
  _BYTE v32[20]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v33[3]; // [esp+34h] [ebp-1Ch] BYREF
  __int16 v34; // [esp+40h] [ebp-10h]

  v29 = 0;
  v3 = a2;
  if ( a2 != 8 )
  {
    v29 = *(_DWORD *)(*((_DWORD *)this + 255) + 148);
    if ( (v29 & 7) != 0 )
    {
      DC::dwSetLayout(this, -1, 0);
      v3 = a2;
    }
  }
  v4 = (_DWORD *)*((_DWORD *)this + 255);
  v5 = v4[36];
  v30 = v5;
  if ( v3 == v5 && v3 != 7 )
    goto LABEL_53;
  if ( v3 != 1 )
  {
    if ( v3 == 8 )
    {
      v4[36] = 8;
      *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF7BF;
      *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x400u;
      goto LABEL_50;
    }
    if ( (unsigned int)(v3 - 1) > 7 )
      return 0;
    v11 = v4[112];
    if ( !v11 )
    {
      v12 = (INT *)*((_DWORD *)this + 9);
      memset(v33, 0, sizeof(v33));
      v31 = v12;
      v34 = 256;
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v32, (struct PDEVOBJ *)&v31);
      *(_DWORD *)(*((_DWORD *)this + 255) + 332) = v12[359];
      *(_DWORD *)(*((_DWORD *)this + 255) + 336) = -v12[360];
      switch ( a2 )
      {
        case 2:
          v22 = 100;
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = (v12[357] + 50) / 0x64u;
          v23 = v12[358] + 50;
          break;
        case 3:
          v22 = 10;
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = (v12[357] + 5) / 0xAu;
          v23 = v12[358] + 5;
          break;
        case 4:
          v22 = 254;
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = (v12[357] + 127) / 0xFEu;
          v23 = v12[358] + 127;
          break;
        case 5:
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = EngMulDiv(v12[357], 10, 254);
          *(_DWORD *)(*((_DWORD *)this + 255) + 320) = EngMulDiv(v12[358], 10, 254);
LABEL_32:
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x40u;
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF3FF;
          goto LABEL_33;
        case 6:
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = EngMulDiv(v12[357], 144, 2540);
          *(_DWORD *)(*((_DWORD *)this + 255) + 320) = EngMulDiv(v12[358], 144, 2540);
          if ( !*((_DWORD *)this + 113) )
          {
            DC::vComputePageXform(this);
            *((_DWORD *)this + 113) = *((_DWORD *)this + 105);
            *((_DWORD *)this + 114) = *((_DWORD *)this + 106);
            *((_DWORD *)this + 115) = *((_DWORD *)this + 107);
            *((_DWORD *)this + 116) = *((_DWORD *)this + 108);
          }
          *(_DWORD *)(*((_DWORD *)this + 255) + 144) = 6;
          v14 = *((_DWORD *)this + 255);
          v15 = *((_DWORD *)this + 113);
          v16 = *((_DWORD *)this + 114);
          *(_DWORD *)(v14 + 416) = v15;
          *(_DWORD *)(v14 + 420) = v16;
          v17 = *((_DWORD *)this + 255);
          *((_DWORD *)this + 105) = v15;
          v18 = *((_DWORD *)this + 115);
          *((_DWORD *)this + 106) = v16;
          v19 = *((_DWORD *)this + 116);
          *(_DWORD *)(v17 + 424) = v18;
          *(_DWORD *)(v17 + 428) = v19;
          v20 = *((_DWORD *)this + 255);
          *((_DWORD *)this + 60) = *((_DWORD *)this + 113);
          *((_DWORD *)this + 61) = *((_DWORD *)this + 114);
          *((_DWORD *)this + 66) = *((_DWORD *)this + 115);
          v21 = *((_DWORD *)this + 116);
          *((_DWORD *)this + 107) = v18;
          *((_DWORD *)this + 67) = v21;
          *((_DWORD *)this + 108) = v19;
          *((_DWORD *)this + 74) = 9;
          qmemcpy((void *)(v20 + 24), (char *)this + 240, 0x3Cu);
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x22D0u;
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFE2FF;
          goto LABEL_25;
        case 7:
          *(_DWORD *)(*((_DWORD *)this + 255) + 316) = (v12[357] + 50) / 0x64u;
          *(_DWORD *)(*((_DWORD *)this + 255) + 320) = (v12[358] + 50) / 0x64u;
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF7BF;
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x400u;
LABEL_33:
          *(_DWORD *)(*((_DWORD *)this + 255) + 144) = a2;
          *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x4090u;
LABEL_25:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
          if ( v33[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v33);
          goto LABEL_50;
        default:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
          if ( v33[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v33);
          return 0;
      }
      *(_DWORD *)(*((_DWORD *)this + 255) + 320) = v23 / v22;
      goto LABEL_32;
    }
    v4[83] = v11;
    *(_DWORD *)(*((_DWORD *)this + 255) + 336) = -*(_DWORD *)(*((_DWORD *)this + 255) + 452);
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_DWORD *)this + 255) + 316) = 10 * *(_DWORD *)(*((_DWORD *)this + 255) + 456);
      v26 = *((_DWORD *)this + 255);
      v27 = 10 * *(_DWORD *)(v26 + 460);
    }
    else
    {
      if ( a2 != 3 )
      {
        switch ( a2 )
        {
          case 4:
            v24 = EngMulDiv;
            v25 = EngMulDiv(*(_DWORD *)(*((_DWORD *)this + 255) + 456), 1000, 254);
            v28 = 1000;
            break;
          case 5:
            v24 = EngMulDiv;
            v25 = EngMulDiv(*(_DWORD *)(*((_DWORD *)this + 255) + 456), 10000, 254);
            v28 = 10000;
            break;
          case 6:
            v24 = EngMulDiv;
            v25 = EngMulDiv(*(_DWORD *)(*((_DWORD *)this + 255) + 456), 14400, 254);
            v28 = 14400;
            break;
          case 7:
            *(_DWORD *)(*((_DWORD *)this + 255) + 316) = 10 * *(_DWORD *)(*((_DWORD *)this + 255) + 456);
            *(_DWORD *)(*((_DWORD *)this + 255) + 320) = 10 * *(_DWORD *)(*((_DWORD *)this + 255) + 460);
            *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF7BF;
            *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x400u;
LABEL_49:
            *(_DWORD *)(*((_DWORD *)this + 255) + 144) = a2;
            *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x4090u;
            goto LABEL_50;
          default:
            return 0;
        }
        *(_DWORD *)(*((_DWORD *)this + 255) + 316) = v25;
        *(_DWORD *)(*((_DWORD *)this + 255) + 320) = v24(*(_DWORD *)(*((_DWORD *)this + 255) + 460), v28, 254);
LABEL_48:
        *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x40u;
        *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF3FF;
        goto LABEL_49;
      }
      *(_DWORD *)(*((_DWORD *)this + 255) + 316) = 100 * *(_DWORD *)(*((_DWORD *)this + 255) + 456);
      v26 = *((_DWORD *)this + 255);
      v27 = 100 * *(_DWORD *)(v26 + 460);
    }
    *(_DWORD *)(v26 + 320) = v27;
    goto LABEL_48;
  }
  v4[79] = 1;
  *(_DWORD *)(*((_DWORD *)this + 255) + 320) = 1;
  *(_DWORD *)(*((_DWORD *)this + 255) + 332) = 1;
  *(_DWORD *)(*((_DWORD *)this + 255) + 336) = 1;
  *(_DWORD *)(*((_DWORD *)this + 255) + 144) = 1;
  v6 = ef16[1];
  v7 = *((_DWORD *)this + 255);
  *(_DWORD *)(v7 + 416) = ef16[0];
  *(_DWORD *)(v7 + 420) = v6;
  v8 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 105) = ef16[0];
  *((_DWORD *)this + 106) = v6;
  v9 = ef16[1];
  *(_DWORD *)(v8 + 424) = ef16[0];
  *(_DWORD *)(v8 + 428) = v9;
  *((_DWORD *)this + 107) = ef16[0];
  *((_DWORD *)this + 108) = v9;
  *((_DWORD *)this + 60) = ef16[0];
  *((_DWORD *)this + 61) = ef16[1];
  *((_DWORD *)this + 66) = ef16[0];
  v10 = *((_DWORD *)this + 255);
  *((_DWORD *)this + 67) = ef16[1];
  *((_DWORD *)this + 74) = 11;
  qmemcpy((void *)(v10 + 24), (char *)this + 240, 0x3Cu);
  *(_DWORD *)(*((_DWORD *)this + 255) + 340) |= 0x3090u;
  *(_DWORD *)(*((_DWORD *)this + 255) + 340) &= 0xFFFFF8BF;
LABEL_50:
  if ( (v29 & 7) != 0 )
    DC::dwSetLayout(this, -1, v29);
  v5 = v30;
LABEL_53:
  if ( (*((_BYTE *)this + 520) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v5;
}
