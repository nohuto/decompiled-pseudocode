/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C002EEA4 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C002EF28 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015A46C (--1MDCOBJA@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0276A94 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0277678 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r15
  HSURF Bitmap; // rdi
  ULONG64 v3; // rax
  __int64 v4; // r8
  ULONG v5; // r13d
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  ULONG *v9; // rax
  FLONG v10; // esi
  int v11; // r14d
  int v12; // ebx
  unsigned __int64 v13; // rcx
  int v14; // eax
  HANDLE v15; // r12
  int v16; // r8d
  ULONG *v17; // rbx
  ULONG v18; // r14d
  HPALETTE Palette; // rax
  HPALETTE v20; // rsi
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  char v23; // r14
  __int64 v24; // rbx
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  __int64 DisplayDC; // rax
  unsigned int v27; // ebx
  ULONG64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  FLONG flBlue; // [rsp+28h] [rbp-4E0h]
  char v36; // [rsp+30h] [rbp-4D8h] BYREF
  char v37[7]; // [rsp+31h] [rbp-4D7h] BYREF
  ULONG cColors[2]; // [rsp+38h] [rbp-4D0h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  unsigned int v41; // [rsp+50h] [rbp-4B8h]
  SIZEL sizl; // [rsp+58h] [rbp-4B0h]
  HSURF hsurf; // [rsp+60h] [rbp-4A8h]
  __int64 v44; // [rsp+68h] [rbp-4A0h]
  ULONG64 v45; // [rsp+70h] [rbp-498h]
  _QWORD v46[2]; // [rsp+78h] [rbp-490h] BYREF
  volatile void *Address[2]; // [rsp+88h] [rbp-480h]
  LONG lWidth[4]; // [rsp+98h] [rbp-470h]
  __int128 v49; // [rsp+A8h] [rbp-460h]
  __int64 v50; // [rsp+B8h] [rbp-450h]
  HANDLE v51; // [rsp+C0h] [rbp-448h]
  _BYTE v52[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v45 = a1;
  v1 = 0LL;
  v44 = 0LL;
  Bitmap = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)lWidth = *(_OWORD *)(v3 + 16);
  v49 = *(_OWORD *)(v3 + 32);
  v50 = *(_QWORD *)(v3 + 48);
  sizl.cx = HIDWORD(Address[1]);
  v4 = (unsigned int)lWidth[0];
  sizl.cy = lWidth[0];
  if ( SHIDWORD(Address[1]) <= 0 || lWidth[0] <= 0 )
    return 3221225485LL;
  cColors[0] = 0;
  pulColors = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    v5 = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    v5 = 6;
LABEL_24:
    v11 = 65280;
    v12 = 255;
    v10 = 16711680;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    v10 = 63488;
    v12 = 31;
    v5 = 4;
    v11 = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    v10 = 31744;
    v12 = 31;
    v5 = 4;
    v11 = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v5 = 3;
  v6 = (_OWORD *)v49;
  if ( (_QWORD)v49 )
  {
    if ( (__int64)v49 + 1024 < (unsigned __int64)v49 || (__int64)v49 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = v52;
    v8 = 8LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v8;
    }
    while ( v8 );
    v9 = (ULONG *)v52;
  }
  else
  {
    v9 = (ULONG *)&unk_1C02E7FA0;
  }
  pulColors = v9;
  cColors[0] = 256;
  v10 = 0;
  v11 = 0;
  v12 = 0;
LABEL_25:
  v13 = v4 * (unsigned int)lWidth[1];
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v4 * lWidth[1];
  LODWORD(Length) = v14;
  v41 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v15 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v51 = v15;
  if ( !v15 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
  MDCOBJA::MDCOBJA((MDCOBJA *)v46, *(HDC *)&lWidth[2], v16);
  if ( !v46[0] )
  {
    MmUnsecureVirtualMemory(v15);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v46);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v46[0] + 48LL);
  flBlue = v12;
  flGreen = v11;
  v17 = pulColors;
  v18 = cColors[0];
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors[0], pulColors, v10, flGreen, flBlue);
  v20 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v18 == 256 && !v17 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    Bitmap = (HSURF)EngCreateBitmap(sizl, lWidth[1], v5, 1u, (PVOID)Address[0]);
    hsurf = Bitmap;
    DxEngSetPaletteState(v20, v21, v22);
    if ( Bitmap )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v37);
      *(_QWORD *)cColors = 0LL;
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)cColors, Bitmap);
      if ( (unsigned int)SURFREF::bValid((SURFREF *)cColors) )
      {
        v23 = 1;
        v24 = *(_QWORD *)cColors;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(*(_QWORD *)cColors + 24LL), v20);
        *(_QWORD *)(v24 + 224) = v15;
        *(_DWORD *)(v24 + 112) |= 0x104200u;
      }
      else
      {
        v23 = 0;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)cColors);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
      if ( v23 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL, 0LL);
        v1 = DisplayDC;
        v44 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL);
          GreSetBitmapOwner(Bitmap, 2147483650LL);
        }
      }
    }
  }
  if ( v1 )
  {
    v27 = v41;
  }
  else
  {
    if ( Bitmap )
    {
      EngDeleteSurface(Bitmap);
      Bitmap = 0LL;
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v15);
    }
    v27 = -1073741801;
  }
  v28 = v45;
  v29 = (_QWORD *)(v45 + 40);
  if ( v45 + 40 >= MmUserProbeAddress )
    v29 = (_QWORD *)MmUserProbeAddress;
  *v29 = v1;
  v30 = (_QWORD *)(v28 + 48);
  if ( v28 + 48 >= MmUserProbeAddress )
    v30 = (_QWORD *)MmUserProbeAddress;
  *v30 = Bitmap;
  if ( v20 )
    EngDeletePalette(v20);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v46);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  return v27;
}
