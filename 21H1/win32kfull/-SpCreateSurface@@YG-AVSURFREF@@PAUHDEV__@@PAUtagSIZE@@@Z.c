/*
 * XREFs of ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z @ 0xAEAAA (-bRemoteDriverNeedsDeviceBitmaps@@YGHAAVPDEVOBJ@@@Z.c)
 *     _GreDwmUseDeviceBitmaps@0 @ 0xCEFCA (_GreDwmUseDeviceBitmaps@0.c)
 *     ??0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z @ 0xF5B9C (--0DEVLOCKOBJ@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 */

_DWORD *__fastcall SpCreateSurface(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v5; // esi
  int v7; // [esp-4h] [ebp-70h]
  _DWORD *v8; // [esp-4h] [ebp-70h]
  _BYTE v9[48]; // [esp+Ch] [ebp-60h] BYREF
  _DWORD v10[6]; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD *v11; // [esp+54h] [ebp-18h] BYREF
  char v12; // [esp+58h] [ebp-14h]
  int v13; // [esp+5Ch] [ebp-10h]
  int v14; // [esp+60h] [ebp-Ch]
  _DWORD v15[2]; // [esp+64h] [ebp-8h] BYREF

  v3 = a2;
  v14 = a2;
  v15[0] = a2;
  if ( gfEnableDeviceBitmapsForNonHintedShapes && GreDwmUseDeviceBitmaps() || bRemoteDriverNeedsDeviceBitmaps(v15) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9, (struct PDEVOBJ *)v15);
    CreateCompatibleSurface(v15, v3, 6, 0, *a3, a3[1], 1, 0, 1, 1, 0, 0, 0, 0, 0, 0);
    v5 = v15[0];
    if ( v15[0] )
    {
      HmgSetOwner(*(_DWORD *)(v15[0] + 20), 0, 5);
      GreMarkUndeletableBitmap(*(_DWORD *)(v5 + 20));
      *a1 = v5;
      v15[0] = 0;
      SURFREF::vUnlock((SURFREF *)v15);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v9);
      return a1;
    }
    SURFREF::vUnlock((SURFREF *)v15);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v9);
    v3 = v14;
    v15[0] = 1;
  }
  else
  {
    v15[0] = 0;
  }
  v10[1] = *a3;
  v10[2] = a3[1];
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v10[3] = 0;
  v10[0] = 6;
  v10[5] = 2049;
  v10[4] = 0;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v10, 0, 0, 0, 0, 0, 1, 1, 0, 0) )
  {
    v7 = v15[0];
    v11[7] = v3;
    v12 |= 1u;
    v11[18] |= 0x800u;
    EtwPhysicalSurfCreateEvent(v11[5], (int)v11[5] >> 31, 0, 0, 0, v7);
    if ( v11 )
    {
      v8 = v11;
      *a1 = v11;
      INC_SHARE_REF_CNT(v8);
    }
  }
  else
  {
    *a1 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v11);
  return a1;
}
