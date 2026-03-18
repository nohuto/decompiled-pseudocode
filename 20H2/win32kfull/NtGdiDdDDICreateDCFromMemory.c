/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C00FA9B4 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00FAA38 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00FAA80 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015D534 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0275524 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0276108 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r15
  HSURF v2; // rdi
  ULONG64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r13d
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
  struct _SURFOBJ *LockedBitmap; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // r8
  SURFOBJ *v24; // r14
  char v25; // r13
  __int64 v26; // rbx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  __int64 DisplayDC; // rax
  unsigned int v29; // ebx
  ULONG64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  DYNAMICMODECHANGESHARELOCK *v35; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  FLONG flBlue; // [rsp+28h] [rbp-4E0h]
  char v38; // [rsp+30h] [rbp-4D8h] BYREF
  char v39[7]; // [rsp+31h] [rbp-4D7h] BYREF
  ULONG cColors[2]; // [rsp+38h] [rbp-4D0h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  unsigned int v43; // [rsp+50h] [rbp-4B8h]
  struct tagSIZE v44; // [rsp+58h] [rbp-4B0h]
  HSURF hsurf; // [rsp+60h] [rbp-4A8h]
  __int64 v46; // [rsp+68h] [rbp-4A0h]
  ULONG64 v47; // [rsp+70h] [rbp-498h]
  _QWORD v48[2]; // [rsp+78h] [rbp-490h] BYREF
  volatile void *Address[2]; // [rsp+88h] [rbp-480h]
  HDC v50[2]; // [rsp+98h] [rbp-470h]
  __int128 v51; // [rsp+A8h] [rbp-460h]
  __int64 v52; // [rsp+B8h] [rbp-450h]
  HANDLE v53; // [rsp+C0h] [rbp-448h]
  _BYTE v54[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v47 = a1;
  v1 = 0LL;
  v46 = 0LL;
  v2 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)v50 = *(_OWORD *)(v3 + 16);
  v51 = *(_OWORD *)(v3 + 32);
  v52 = *(_QWORD *)(v3 + 48);
  v44 = (struct tagSIZE)__PAIR64__((unsigned int)v50[0], HIDWORD(Address[1]));
  v4 = LODWORD(v50[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v50[0]) <= 0 )
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
  v6 = (_OWORD *)v51;
  if ( (_QWORD)v51 )
  {
    if ( (__int64)v51 + 1024 < (unsigned __int64)v51 || (__int64)v51 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = v54;
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
    v9 = (ULONG *)v54;
  }
  else
  {
    v9 = (ULONG *)&unk_1C02E6EF0;
  }
  pulColors = v9;
  cColors[0] = 256;
  v10 = 0;
  v11 = 0;
  v12 = 0;
LABEL_25:
  v13 = v4 * ((unsigned __int64)v50[0] >> 32);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v4 * HIDWORD(v50[0]);
  LODWORD(Length) = v14;
  v43 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v15 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v53 = v15;
  if ( !v15 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v38);
  MDCOBJA::MDCOBJA((MDCOBJA *)v48, v50[1], v16);
  if ( !v48[0] )
  {
    MmUnsecureVirtualMemory(v15);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v48);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v35);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v48[0] + 48LL);
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
    LockedBitmap = EngCreateLockedBitmap(v44, HIDWORD(v50[0]), v5, 1u, (void *)Address[0]);
    v24 = LockedBitmap;
    if ( LockedBitmap )
      v2 = LockedBitmap->hsurf;
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v20, v22, v23);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v39);
      *(_QWORD *)cColors = 0LL;
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)cColors, v2);
      if ( SURFREF::bValid((SURFREF *)cColors) )
      {
        v25 = 1;
        v26 = *(_QWORD *)cColors;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(*(_QWORD *)cColors + 24LL), v20);
        *(_QWORD *)(v26 + 224) = v15;
        *(_DWORD *)(v26 + 112) |= 0x104200u;
      }
      else
      {
        v25 = 0;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)cColors);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
      if ( v25 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL, 0LL);
        v1 = DisplayDC;
        v46 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v2, 0LL, 1LL);
          GreSetBitmapOwner(v2, 2147483650LL);
        }
      }
      EngUnlockSurface(v24);
    }
  }
  if ( v1 )
  {
    v29 = v43;
  }
  else
  {
    if ( v2 )
    {
      EngDeleteSurface(v2);
      v2 = 0LL;
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v15);
    }
    v29 = -1073741801;
  }
  v30 = v47;
  v31 = (_QWORD *)(v47 + 40);
  if ( v47 + 40 >= MmUserProbeAddress )
    v31 = (_QWORD *)MmUserProbeAddress;
  *v31 = v1;
  v32 = (_QWORD *)(v30 + 48);
  if ( v30 + 48 >= MmUserProbeAddress )
    v32 = (_QWORD *)MmUserProbeAddress;
  *v32 = v2;
  if ( v20 )
    EngDeletePalette(v20);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v48);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
  return v29;
}
