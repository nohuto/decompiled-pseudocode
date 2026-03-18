/*
 * XREFs of _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x7C296 (--1DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0MDCOBJA@@QAE@PAUHDC__@@H@Z @ 0x7C2B6 (--0MDCOBJA@@QAE@PAUHDC__@@H@Z.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ??1MDCOBJA@@QAE@XZ @ 0xF624C (--1MDCOBJA@@QAE@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256 (-DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z @ 0xF62A8 (-DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8 (-DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ @ 0xF636A (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z @ 0x1D3836 (-vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z.c)
 */

int __stdcall NtGdiDdDDICreateDCFromMemory(unsigned int a1)
{
  HSURF Bitmap; // ebx
  const void *v2; // esi
  unsigned int v3; // ecx
  const void *v4; // esi
  FLONG v5; // edi
  SIZE_T v6; // esi
  int v7; // eax
  HANDLE v8; // esi
  int v9; // ecx
  HPALETTE Palette; // edi
  HPALETTE v11; // ecx
  ULONG *v12; // esi
  DYNAMICMODECHANGESHARELOCK *v13; // ecx
  SURFOBJ *v14; // esi
  int DisplayDC; // eax
  int v16; // edx
  int v17; // esi
  _DWORD *v18; // ecx
  _DWORD *v19; // ecx
  DYNAMICMODECHANGESHARELOCK *v20; // ecx
  DYNAMICMODECHANGESHARELOCK *v22; // ecx
  HPALETTE v23; // [esp+0h] [ebp-49Ch]
  struct _SURFOBJ *v24; // [esp+0h] [ebp-49Ch]
  HDEV v25; // [esp+4h] [ebp-498h]
  HPALETTE v26; // [esp+4h] [ebp-498h]
  volatile void *Address[9]; // [esp+10h] [ebp-48Ch] BYREF
  _DWORD v28[3]; // [esp+34h] [ebp-468h] BYREF
  SIZEL sizl; // [esp+40h] [ebp-45Ch]
  int v30; // [esp+48h] [ebp-454h]
  int v31; // [esp+4Ch] [ebp-450h]
  volatile void *v32; // [esp+50h] [ebp-44Ch]
  int v33; // [esp+54h] [ebp-448h]
  int v34; // [esp+58h] [ebp-444h]
  ULONG cColors; // [esp+5Ch] [ebp-440h]
  char v36; // [esp+63h] [ebp-439h] BYREF
  HSURF hsurf; // [esp+64h] [ebp-438h]
  HANDLE v38; // [esp+68h] [ebp-434h]
  FLONG flBlue; // [esp+6Ch] [ebp-430h]
  ULONG iFormat; // [esp+70h] [ebp-42Ch]
  FLONG flGreen; // [esp+74h] [ebp-428h]
  ULONG *pulColors; // [esp+78h] [ebp-424h] BYREF
  char v43; // [esp+7Fh] [ebp-41Dh] BYREF
  _BYTE v44[1028]; // [esp+80h] [ebp-41Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+484h] [ebp-18h]

  sizl.cy = a1;
  v34 = 0;
  v33 = 0;
  Bitmap = 0;
  hsurf = 0;
  ms_exc.registration.TryLevel = 0;
  v2 = (const void *)a1;
  if ( a1 >= _MmUserProbeAddress )
    v2 = (const void *)_MmUserProbeAddress;
  qmemcpy(Address, v2, sizeof(Address));
  ms_exc.registration.TryLevel = -2;
  sizl.cx = (LONG)Address[2];
  v3 = (unsigned int)Address[3];
  v32 = Address[3];
  if ( (int)Address[2] <= 0 || (int)Address[3] <= 0 )
    return -1073741811;
  cColors = 0;
  pulColors = 0;
  if ( Address[1] == (volatile void *)20 )
  {
    iFormat = 5;
    goto LABEL_23;
  }
  if ( (int)Address[1] <= 20 )
    return -1073741811;
  if ( (int)Address[1] <= 22 )
  {
    iFormat = 6;
LABEL_23:
    flBlue = 255;
    flGreen = 65280;
    v5 = 16711680;
    goto LABEL_24;
  }
  if ( Address[1] == (volatile void *)23 )
  {
    v5 = 63488;
    flGreen = 2016;
    goto LABEL_20;
  }
  if ( (int)Address[1] <= 25 )
  {
    v5 = 31744;
    flGreen = 992;
LABEL_20:
    iFormat = 4;
    flBlue = 31;
    goto LABEL_24;
  }
  if ( Address[1] != (volatile void *)41 )
    return -1073741811;
  iFormat = 3;
  v4 = (const void *)Address[6];
  if ( Address[6] )
  {
    ms_exc.registration.TryLevel = 1;
    if ( (char *)Address[6] + 1024 < Address[6] || (char *)Address[6] + 1024 > (volatile void *)_MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    qmemcpy(v44, v4, 0x400u);
    ms_exc.registration.TryLevel = -2;
    pulColors = (ULONG *)v44;
    v3 = (unsigned int)v32;
  }
  else
  {
    pulColors = (ULONG *)&unk_250690;
  }
  cColors = 256;
  v5 = 0;
  flGreen = 0;
  flBlue = 0;
LABEL_24:
  v6 = v3 * (unsigned int)Address[4];
  if ( is_mul_ok(v3, (unsigned int)Address[4]) )
  {
    v7 = 0;
  }
  else
  {
    v6 = -1;
    v7 = -1073741675;
  }
  v30 = v7;
  if ( v7 < 0 )
    return -1073741811;
  ms_exc.registration.TryLevel = 2;
  ProbeForWrite(Address[0], v6, 4u);
  v8 = MmSecureVirtualMemory((PVOID)Address[0], v6, 4u);
  v38 = v8;
  ms_exc.registration.TryLevel = -2;
  if ( !v8 )
    return -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v43);
  MDCOBJA::MDCOBJA((MDCOBJA *)v28, (HDC)Address[5], v9);
  if ( !v28[0] )
  {
    MmUnsecureVirtualMemory(v8);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v28);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
    return -1073741811;
  }
  v31 = *(_DWORD *)(v28[0] + 36);
  Palette = EngCreatePalette((iFormat > 3) + 1, cColors, pulColors, v5, flGreen, flBlue);
  flGreen = (FLONG)Palette;
  if ( Palette )
  {
    if ( cColors == 256 && !pulColors )
      DxEngSyncPaletteTableWithDevice(v23, v25);
    Bitmap = (HSURF)EngCreateBitmap(
                      (SIZEL)__PAIR64__((unsigned int)v32, sizl.cx),
                      (LONG)Address[4],
                      iFormat,
                      1u,
                      (PVOID)Address[0]);
    hsurf = Bitmap;
    DxEngSetPaletteState(v11, (unsigned int)v23, (unsigned int)v25);
    if ( Bitmap )
    {
      v43 = 0;
      if ( Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
        pulColors = 0;
        SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&pulColors, Bitmap);
        if ( SURFREF::bValid((SURFREF *)&pulColors) )
        {
          v43 = 1;
          v12 = pulColors;
          DxEngSelectPaletteToSurface(v24, v26);
          v12[36] = (ULONG)v38;
          v12[18] |= (unsigned int)&loc_1041FF + 1;
        }
        else
        {
          v43 = 0;
        }
        SURFREF::vUnlock((SURFREF *)&pulColors);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
      }
      else
      {
        v14 = EngLockSurface(Bitmap);
        if ( v14 )
        {
          v43 = 1;
          DxEngSelectPaletteToSurface(v24, v26);
          v14[2].cjBits = (ULONG)v38;
          v14[1].hsurf = (HSURF)((int)v14[1].hsurf | ((unsigned int)&loc_1041FF + 1));
          EngUnlockSurface(v14);
        }
      }
      if ( v43 )
      {
        DisplayDC = GreCreateDisplayDC(v31, 1, 0);
        v34 = DisplayDC;
        v33 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, Bitmap, 0, 1);
          GreSetBitmapOwner(Bitmap, -2147483646);
        }
      }
      v8 = v38;
    }
  }
  v16 = v34;
  if ( v34 )
  {
    v17 = v30;
  }
  else
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      Bitmap = 0;
      hsurf = 0;
    }
    else
    {
      MmUnsecureVirtualMemory(v8);
    }
    v17 = -1073741801;
    v16 = v34;
  }
  ms_exc.registration.TryLevel = 3;
  v18 = (_DWORD *)(sizl.cy + 28);
  if ( sizl.cy + 28 >= _MmUserProbeAddress )
    v18 = (_DWORD *)_MmUserProbeAddress;
  *v18 = v16;
  v19 = (_DWORD *)(sizl.cy + 32);
  if ( sizl.cy + 32 >= _MmUserProbeAddress )
    v19 = (_DWORD *)_MmUserProbeAddress;
  *v19 = Bitmap;
  ms_exc.registration.TryLevel = -2;
  if ( Palette )
    EngDeletePalette(Palette);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v28);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
  return v17;
}
