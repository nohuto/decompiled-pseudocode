/*
 * XREFs of _GreEnumFonts@28 @ 0x888D8
 * Callers:
 *     _NtGdiEnumFonts@32 @ 0x88792 (_NtGdiEnumFonts@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 */

BOOL __fastcall GreEnumFonts(
        HDC a1,
        struct FHOBJ *a2,
        __int16 a3,
        int a4,
        int a5,
        struct PDEVOBJ *a6,
        struct DCOBJ *a7)
{
  BOOL v7; // esi
  int v8; // edx
  bool v9; // zf
  struct PFF *v10; // eax
  struct FHOBJ *v11; // esi
  bool v12; // al
  unsigned int *v14; // [esp+0h] [ebp-58h]
  void *v15; // [esp+4h] [ebp-54h]
  int v16; // [esp+8h] [ebp-50h] BYREF
  struct FHOBJ *v17; // [esp+Ch] [ebp-4Ch]
  unsigned int v18; // [esp+10h] [ebp-48h] BYREF
  unsigned int v19; // [esp+14h] [ebp-44h] BYREF
  int v20; // [esp+18h] [ebp-40h] BYREF
  struct PFF *v21; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v22[3]; // [esp+24h] [ebp-34h] BYREF
  _DWORD v23[10]; // [esp+30h] [ebp-28h] BYREF

  v7 = 0;
  v17 = a2;
  if ( !a7 )
    *(_DWORD *)a6 = 0;
  memset(v22, 0, sizeof(v22));
  XDCOBJ::vLock((XDCOBJ *)v22, a1);
  if ( v22[0] )
  {
    v16 = *(_DWORD *)(v22[0] + 36);
    if ( (*(_BYTE *)(v16 + 24) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v16);
    v20 = _ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    v23[9] = a5;
    v23[8] = 0;
    v23[3] = 0;
    v8 = *(_DWORD *)(v16 + 1424);
    v23[6] = v8 == 0;
    v23[5] = v8 == 4;
    if ( (*(_BYTE *)(*(_DWORD *)(v22[0] + 1020) + 256) & 1) != 0
      || (v9 = (*(_BYTE *)(v16 + 24) & 1) == 0, v23[0] = 0, v9) )
    {
      v23[0] = 1;
    }
    v23[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
    v23[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
    v23[4] = _gulFontInformation & 1;
    v23[7] = a3 & 0x200;
    v18 = (unsigned int)gpPFTDevice;
    v10 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v18, *(HDEV *)(v22[0] + 36), 0);
    v11 = v17;
    if ( !v10
      || (v21 = v10,
          v19 = (unsigned int)gpPFTPublic,
          v18 = (unsigned int)gpPFTPrivate,
          !(v12 = EnumDeviceAndEngine(
                    v17,
                    (struct EFSOBJ *)v23,
                    (unsigned int)&v19,
                    (struct _EFFILTER_INFO *)&v18,
                    (struct PUBLIC_PFTOBJ *)&v21,
                    (struct PUBLIC_PFTOBJ *)&v16,
                    (struct PFFOBJ *)v22,
                    a6,
                    a7,
                    v14,
                    v15))) )
    {
      v18 = (unsigned int)gpPFTPublic;
      v19 = (unsigned int)gpPFTPrivate;
      v12 = EnumEngineOnly(
              v11,
              (struct EFSOBJ *)v23,
              (unsigned int)&v18,
              (struct _EFFILTER_INFO *)&v19,
              (struct PUBLIC_PFTOBJ *)v22,
              a6,
              a7,
              v14,
              v15);
    }
    v7 = v12;
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v22[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v7;
}
