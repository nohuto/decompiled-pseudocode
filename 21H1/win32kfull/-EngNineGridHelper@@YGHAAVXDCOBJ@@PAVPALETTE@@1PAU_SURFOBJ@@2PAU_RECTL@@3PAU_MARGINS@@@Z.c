/*
 * XREFs of ?EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z @ 0x1DA746
 * Callers:
 *     ?bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z @ 0x1DCEF2 (-bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z.c)
 * Callees:
 *     _EngNineGrid@36 @ 0x503DE (_EngNineGrid@36.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge EngNineGridHelper@<eax>(
        _DWORD *a1@<edx>,
        int *a2@<ecx>,
        struct XDCOBJ *a3,
        struct PALETTE *a4,
        struct PALETTE *a5,
        struct _SURFOBJ *a6,
        struct _SURFOBJ *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _MARGINS *a10)
{
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v15; // [esp-10h] [ebp-70h]
  _DWORD v16[4]; // [esp+Ch] [ebp-54h] BYREF
  struct PALETTE *v17; // [esp+1Ch] [ebp-44h]
  struct PALETTE *v18; // [esp+20h] [ebp-40h]
  struct _SURFOBJ *v19; // [esp+24h] [ebp-3Ch]
  struct _SURFOBJ *v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h] BYREF
  int v22; // [esp+30h] [ebp-30h] BYREF
  int v23; // [esp+34h] [ebp-2Ch] BYREF
  int v24; // [esp+38h] [ebp-28h] BYREF
  _DWORD *v25; // [esp+3Ch] [ebp-24h]
  int v26; // [esp+40h] [ebp-20h]
  int v27; // [esp+44h] [ebp-1Ch] BYREF
  struct _RECTL v28; // [esp+48h] [ebp-18h]
  int v29; // [esp+58h] [ebp-8h]

  v25 = a1;
  v17 = a4;
  v10 = 0;
  v18 = a5;
  v19 = a6;
  v20 = a7;
  v26 = 33488896;
  v16[0] = 33488896;
  v28 = *a8;
  v11 = *a2;
  v27 = 5;
  v29 = 0;
  v12 = *(_DWORD *)(v11 + 1020);
  v21 = 0;
  v13 = *(_DWORD *)(v12 + 196);
  v15 = *(_DWORD *)(v12 + 204);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( EXLATEOBJ::bInitXlateObj(&v21, 0, 0, a1, a1, (int)a3, (int)a3, v15, v13, 0, 0) )
  {
    if ( EXLATEOBJ::bInitXlateObj(&v22, 0, 0, v25, gppalRGB, (int)a3, (int)a3, 0, 0, 0, 0) )
    {
      v16[1] = v22;
      if ( EXLATEOBJ::bInitXlateObj(&v23, 0, 0, v25, gppalRGB, (int)a3, (int)a3, 0, 0, 0, 0) )
      {
        v16[2] = v23;
        if ( EXLATEOBJ::bInitXlateObj(&v24, 0, 0, gppalRGB, v25, (int)a3, (int)a3, 0, 0, 0, 0) )
        {
          v16[3] = v24;
          v10 = EngNineGrid((int)v17, (int)v18, 0, v21, (int)v19, (int)v20, (int)&v27, (int)v16, 0);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
  return v10;
}
