/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94
 * Callers:
 *     _PDEVOBJ_vProfileDriverWrap@4 @ 0xE4A82 (_PDEVOBJ_vProfileDriverWrap@4.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bDeleteSurface@SURFREF@@QAEHW4_CLEANUPTYPE@@H@Z @ 0xF6E04 (-bDeleteSurface@SURFREF@@QAEHW4_CLEANUPTYPE@@H@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 */

void __thiscall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  int v2; // edx
  struct PALETTE *v3; // edi
  struct PALETTE *v4; // esi
  int v5; // edx
  int v6; // eax
  BOOL (__stdcall *v7)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v12; // eax
  volatile unsigned int *v13; // [esp+58h] [ebp-C0h]
  unsigned int v14; // [esp+5Ch] [ebp-BCh]
  int v15; // [esp+64h] [ebp-B4h] BYREF
  int v16; // [esp+68h] [ebp-B0h] BYREF
  int v17; // [esp+6Ch] [ebp-ACh] BYREF
  struct PALETTE *v18; // [esp+70h] [ebp-A8h] BYREF
  _DWORD *v19; // [esp+74h] [ebp-A4h]
  int v20; // [esp+78h] [ebp-A0h]
  int v21; // [esp+7Ch] [ebp-9Ch] BYREF
  int v22; // [esp+80h] [ebp-98h]
  int v23; // [esp+84h] [ebp-94h]
  int v24; // [esp+88h] [ebp-90h]
  struct PALETTE *v25; // [esp+8Ch] [ebp-8Ch]
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // [esp+90h] [ebp-88h]
  int v27; // [esp+94h] [ebp-84h] BYREF
  int v28; // [esp+98h] [ebp-80h] BYREF
  char v29; // [esp+9Ch] [ebp-7Ch]
  int v30; // [esp+A0h] [ebp-78h]
  _DWORD v31[6]; // [esp+A4h] [ebp-74h] BYREF
  _BYTE v32[20]; // [esp+BCh] [ebp-5Ch] BYREF
  _DWORD v33[3]; // [esp+D0h] [ebp-48h] BYREF
  __int16 v34; // [esp+DCh] [ebp-3Ch]
  _DWORD v35[4]; // [esp+ECh] [ebp-2Ch] BYREF
  _DWORD v36[6]; // [esp+FCh] [ebp-1Ch] BYREF

  v31[3] = 0;
  if ( (*(_BYTE *)(*(_DWORD *)this + 24) & 1) != 0 )
  {
    memset(v33, 0, sizeof(v33));
    v34 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v32, this);
    v27 = _ghsemSprite;
    GreAcquireSemaphore(_ghsemSprite);
    v2 = *(_DWORD *)this;
    v20 = *(_DWORD *)(*(_DWORD *)this + 1820);
    v19 = *(_DWORD **)(v2 + 1112);
    v18 = gppalRGB;
    v35[0] = 0;
    v35[1] = 0;
    v25 = ppalDefault;
    memset(v36, 0, sizeof(v36));
    v35[2] = 16;
    v35[3] = 1;
    v36[1] = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v36[2] = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v36[3] = 16;
    v36[4] = 1;
    v3 = gppalRGB;
    *(_DWORD *)(v2 + 1712) = 0;
    v31[0] = 6;
    v31[4] = *(_DWORD *)gppalRGB;
    v31[1] = 40;
    v31[2] = 40;
    v31[5] = 1;
    v4 = v25;
    v26 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)v31, 0, 0, 0, 0, 0, 0, 1, 0, 0)
      && EXLATEOBJ::bInitXlateObj(&v17, 0, 0, gppalRGB, gppalRGB, (int)v25, (int)v25, 0, 0, 0, 0)
      && EXLATEOBJ::bInitXlateObj(&v16, 0, 0, v19, gppalRGB, (int)v4, (int)v4, 0, 0, 0, 0)
      && EXLATEOBJ::bInitXlateObj(&v15, 0, 0, gppalRGB, v19, (int)v4, (int)v4, 0, 0, 0, 0) )
    {
      v5 = *(_DWORD *)this;
      v22 = v17;
      v23 = v16;
      v21 = 33488896;
      v24 = v15;
      SETFLAG((volatile signed __int32 *)(v5 + 24), 0, 0x40000, v13, v14);
      v6 = v20;
      if ( (*(_DWORD *)(v20 + 72) & 0x10000) != 0 )
      {
        v7 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_DWORD *)this + 2184);
        v6 = v20;
      }
      else
      {
        v7 = EngAlphaBlend;
      }
      v8 = v28 ? v28 + 16 : 0;
      v9 = v7(
             (SURFOBJ *)(v6 + 16),
             (SURFOBJ *)v8,
             (CLIPOBJ *)v36,
             (XLATEOBJ *)v15,
             (RECTL *)v35,
             (RECTL *)v35,
             (BLENDOBJ *)&v21);
      v3 = v18;
      if ( v9 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_DWORD *)this + 1712) |= 2u;
          *(_DWORD *)(*(_DWORD *)this + 28) |= 2u;
        }
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v15);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v16);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
    SURFMEM::~SURFMEM((SURFMEM *)&v28);
    CreateCompatibleSurface(&v15, *(_DWORD *)this, *(_DWORD *)(v20 + 60), 0, 40, 40, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if ( v15 )
    {
      v18 = 0;
      v16 = 0;
      v17 = 0;
      if ( EXLATEOBJ::bInitXlateObj((int *)&v18, 0, 0, v19, v19, (int)v4, (int)v4, 0, 0, 0, 0)
        && EXLATEOBJ::bInitXlateObj(&v16, 0, 0, v19, v3, (int)v4, (int)v4, 0, 0, 0, 0)
        && EXLATEOBJ::bInitXlateObj(&v17, 0, 0, v3, v19, (int)v4, (int)v4, 0, 0, 0, 0) )
      {
        v10 = *(_DWORD *)this;
        v22 = v16;
        v23 = v16;
        v21 = 8716288;
        v24 = v17;
        SETFLAG((volatile signed __int32 *)(v10 + 24), 0, 0x40000, v13, v14);
        if ( (*(_DWORD *)(v20 + 72) & 0x10000) != 0 )
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_DWORD *)this + 2184);
        v11 = v15;
        if ( v26(
               (SURFOBJ *)(v20 + 16),
               (SURFOBJ *)(v15 + 16),
               (CLIPOBJ *)v36,
               (XLATEOBJ *)v18,
               (RECTL *)v35,
               (RECTL *)v35,
               (BLENDOBJ *)&v21)
          && (*(_DWORD *)(*(_DWORD *)this + 24) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_DWORD *)this + 1712) |= 1u;
          *(_DWORD *)(*(_DWORD *)this + 28) |= 1u;
        }
      }
      else
      {
        v11 = v15;
      }
      SETFLAG((volatile signed __int32 *)(*(_DWORD *)this + 24), 0, 0x40000, v13, v14);
      if ( (*(_DWORD *)(v20 + 72) & 0x8000) != 0 )
        v12 = (*(int (__stdcall **)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, int, _DWORD))(*(_DWORD *)this + 2196))(
                v20 + 16,
                v11 + 16,
                0,
                0,
                v35,
                v35,
                1,
                0);
      else
        v12 = EngTransparentBlt((SURFOBJ *)(v20 + 16), (SURFOBJ *)(v11 + 16), 0, 0, (RECTL *)v35, (RECTL *)v35, 1, 0);
      if ( v12 && (*(_DWORD *)(*(_DWORD *)this + 24) & 0x40000) == 0 )
        *(_DWORD *)(*(_DWORD *)this + 28) |= 4u;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v16);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v18);
    }
    SURFREF::bDeleteSurface(&v15, 0, 0);
    if ( v15 )
      DEC_SHARE_REF_CNT(v15);
    SEMOBJ::vUnlock((SEMOBJ *)&v27);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
    if ( v33[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v33);
  }
}
