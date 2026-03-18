/*
 * XREFs of ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??_I@YGXPAXIIP6EX0@Z@Z @ 0xC1AD4 (--_I@YGXPAXIIP6EX0@Z@Z.c)
 *     ??0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z @ 0xF6A1A (--0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0xF6A80 (--0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QAE@XZ @ 0xF6AB4 (--1DEVLOCKOBJ_WNDOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??0DCOBJ@@QAE@XZ @ 0x1D6F8A (--0DCOBJ@@QAE@XZ.c)
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 *     ?LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z @ 0x1D7B4D (-LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1D887E (-vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z.c)
 *     _EngControlSprites@8 @ 0x1E3508 (_EngControlSprites@8.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92 (-bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z.c)
 */

int __userpurge iOpenGLExtEscape@<eax>(
        int a1@<edx>,
        XDCOBJ *a2@<ecx>,
        struct DCOBJ *a3,
        void *a4,
        int a5,
        void *a6,
        int a7,
        void *a8)
{
  int v8; // ebx
  DCOBJ *v9; // edi
  int v10; // esi
  int v11; // ecx
  DC **v12; // esi
  int v13; // eax
  int v15; // edx
  struct SURFACE *v16; // edi
  HDEV DeviceHdev; // edx
  WNDOBJ *v18; // esi
  size_t v19; // ecx
  char *v20; // edi
  unsigned int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  XLATEOBJ *v27; // eax
  XLATEOBJ *v28; // eax
  DC **v29; // ecx
  struct SURFACE *v30; // eax
  DC *v31; // ecx
  struct REGION *v32; // eax
  DC *v33; // ecx
  DC *v34; // ecx
  struct REGION *v35; // eax
  struct _RECTL v36; // [esp-Ch] [ebp-4ECh]
  void (__thiscall *v37)(void *); // [esp+4h] [ebp-4DCh]
  _BYTE v38[48]; // [esp+10h] [ebp-4D0h] BYREF
  WNDOBJ *pwo; // [esp+40h] [ebp-4A0h]
  _DWORD **Parameter; // [esp+48h] [ebp-498h] BYREF
  char *v41; // [esp+4Ch] [ebp-494h]
  int v42; // [esp+50h] [ebp-490h]
  size_t v43; // [esp+54h] [ebp-48Ch]
  void *v44; // [esp+58h] [ebp-488h]
  void *v45; // [esp+5Ch] [ebp-484h]
  int v46; // [esp+60h] [ebp-480h]
  int v47; // [esp+64h] [ebp-47Ch]
  int v48; // [esp+68h] [ebp-478h]
  int v49; // [esp+6Ch] [ebp-474h]
  void *v50; // [esp+70h] [ebp-470h]
  int v51; // [esp+74h] [ebp-46Ch]
  void *Src; // [esp+78h] [ebp-468h]
  int v53; // [esp+7Ch] [ebp-464h]
  DC *v54; // [esp+80h] [ebp-460h] BYREF
  size_t MaxCount; // [esp+84h] [ebp-45Ch]
  XLATEOBJ *v56; // [esp+88h] [ebp-458h]
  struct SURFACE *v57; // [esp+8Ch] [ebp-454h]
  _DWORD *v58; // [esp+90h] [ebp-450h] BYREF
  XLATEOBJ *v59; // [esp+94h] [ebp-44Ch] BYREF
  XDCOBJ *v60; // [esp+98h] [ebp-448h]
  char v61[4]; // [esp+9Ch] [ebp-444h] BYREF
  struct _RECTL v62; // [esp+A0h] [ebp-440h] BYREF
  struct _KFLOATING_SAVE FloatSave; // [esp+120h] [ebp-3C0h] BYREF
  struct XDCOBJ *v64[7]; // [esp+140h] [ebp-3A0h] BYREF
  HDEV v65; // [esp+15Ch] [ebp-384h] BYREF
  __int64 v66; // [esp+160h] [ebp-380h]
  LONG v67; // [esp+168h] [ebp-378h]
  char v68; // [esp+16Ch] [ebp-374h] BYREF
  _BYTE v69[192]; // [esp+1FCh] [ebp-2E4h] BYREF
  _WORD v70[262]; // [esp+2BCh] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+4C8h] [ebp-18h]

  v51 = a1;
  v60 = a2;
  MaxCount = (size_t)a3;
  Src = a4;
  v50 = a6;
  memset(&FloatSave, 0, sizeof(FloatSave));
  v8 = 0;
  v49 = 0;
  v53 = 0;
  v9 = (DCOBJ *)v69;
  v10 = 16;
  do
  {
    DCOBJ::DCOBJ(v9);
    v9 = (DCOBJ *)((char *)v9 + 12);
    --v10;
  }
  while ( v10 );
  v12 = (DC **)v60;
  v13 = *(_DWORD *)v60;
  if ( !*(_DWORD *)(*(_DWORD *)v60 + 504) )
  {
    EngSetLastError(6u);
LABEL_5:
    `vector destructor iterator'(12, (int)v69, (char *)0x10, (void (__thiscall *)(int))DCOBJ::~DCOBJ, v36.bottom, v37);
    return 0;
  }
  v59 = 0;
  v56 = 0;
  v58 = *(_DWORD **)(v13 + 36);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v38, v60, v11);
  v54 = *v12;
  if ( (*((_DWORD *)v54 + 6) & 0x4000) != 0 || (v38[12] & 1) == 0 && !XDCOBJ::bFullScreen(v12) )
    goto LABEL_7;
  v16 = XDCOBJ::pSurfaceEff((XDCOBJ *)v12);
  v57 = v16;
  if ( ((unsigned int)&loc_20000 & v58[6]) != 0 )
  {
    v65 = *(HDEV *)(v15 + 1064);
    v66 = *(_QWORD *)(v15 + 1068);
    v67 = *(_DWORD *)(v15 + 1076);
    *(_QWORD *)&v36.left = v66;
    v36.right = v67;
    DeviceHdev = hdevFindDeviceHdev(v65, v36, (struct EWNDOBJ *)v37);
    if ( DeviceHdev )
    {
      if ( *(_DWORD *)(*(_DWORD *)v60 + 504) == v58[455] )
      {
        v16 = (struct SURFACE *)*((_DWORD *)DeviceHdev + 455);
        v57 = v16;
      }
      else
      {
        v16 = v57;
      }
      v58 = DeviceHdev;
    }
    else
    {
      v16 = v57;
    }
  }
  if ( !v58[499] || (v58[6] & 0x8000) != 0 )
  {
LABEL_7:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v38);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
    goto LABEL_5;
  }
  v54 = (DC *)_ghsemSprite;
  GreAcquireSemaphore(_ghsemSprite);
  v18 = 0;
  v48 = 0;
  v64[6] = 0;
  v64[0] = 0;
  if ( KeSaveFloatingPointState(&FloatSave) < 0 )
  {
    DEVEXCLUDERECT::~DEVEXCLUDERECT(v64);
    SEMOBJ::vUnlock((SEMOBJ *)&v54);
    goto LABEL_7;
  }
  v44 = 0;
  v47 = 0;
  Parameter = &v58;
  if ( v16 )
    v41 = (char *)v16 + 16;
  else
    v41 = 0;
  v42 = v51;
  v19 = MaxCount;
  v43 = MaxCount;
  v46 = a5;
  v45 = v50;
  if ( v51 != 4352 )
  {
    v44 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0xE800u) >= 0 )
      v8 = v47;
    goto LABEL_80;
  }
  if ( MaxCount < 0x10 )
  {
    EngSetLastError(0x57u);
    goto LABEL_80;
  }
  if ( MaxCount <= 0x90 )
  {
    v20 = &v68;
    goto LABEL_33;
  }
  v20 = (char *)PALLOCMEM2(MaxCount, 1818718023, 0);
  if ( v20 )
  {
    v19 = MaxCount;
LABEL_33:
    ms_exc.registration.TryLevel = 0;
    memcpy(v20, Src, v19);
    ms_exc.registration.TryLevel = -2;
    if ( (v20[4] & 4) != 0 )
    {
      v21 = *((_DWORD *)v20 + 2);
      if ( v21 > 0x10 || MaxCount < 4 * v21 + 16 )
      {
        EngSetLastError(8u);
        goto LABEL_76;
      }
      v53 = LookUpWndobjs(
              (XDCOBJ *)v69,
              (int)v60,
              (HDC *)v20 + 4,
              *((struct DCOBJ **)v20 + 2),
              (HDC *)v36.bottom,
              (int)v37);
      if ( v53 < 0 )
        goto LABEL_76;
    }
    v22 = *((_DWORD *)v20 + 1);
    if ( (v22 & 2) != 0 )
    {
      v23 = v58[351];
      if ( (unsigned int)(v23 - 2) > 1 )
      {
        v28 = xloIdent;
      }
      else
      {
        v24 = *(_DWORD *)(*(_DWORD *)v60 + 60);
        if ( !v24 )
          goto LABEL_46;
        v25 = v23 == 2 ? 16 : 256;
        v26 = 0;
        do
        {
          v70[v26] = v26;
          ++v26;
        }
        while ( v26 < v25 );
        if ( EXLATEOBJ::bMakeXlate(&v59, v70, v24, v57, v25, v25) )
        {
          v27 = v59;
          v56 = v59;
        }
        else
        {
LABEL_46:
          v27 = 0;
        }
        if ( !v27 )
          v56 = xloIdent;
        v22 = *((_DWORD *)v20 + 1);
        v28 = v56;
      }
    }
    else
    {
      v28 = 0;
    }
    *((_DWORD *)v20 + 3) = v28;
    if ( (v22 & 4) == 0 )
    {
      if ( (v22 & 1) != 0 )
      {
        if ( !pwo || ((int)pwo[2].psoOwner & 0x8000000) != 0 )
        {
          EngSetLastError(6u);
        }
        else
        {
          v57 = *(struct SURFACE **)v60;
          v56 = *(XLATEOBJ **)(pwo[2].rclClient.right + 16);
          v29 = (DC **)v60;
          if ( v56 == *((XLATEOBJ **)v57 + 126)
            || (v29 = (DC **)v60, *(_DWORD *)(*(_DWORD *)&v56[1].iSrcType + 16) == *((_DWORD *)v57 + 9)) )
          {
            *((_DWORD *)v20 + 2) = pwo;
LABEL_62:
            if ( pwo )
            {
              if ( SLOBYTE(pwo[2].psoOwner) >= 0 )
              {
                v18 = pwo;
                EngControlSprites(pwo, 1u);
              }
              v30 = *(struct SURFACE **)v60;
            }
            else
            {
              if ( DC::prgnRao(*v29) )
                v32 = DC::prgnRao(v31);
              else
                v32 = DC::prgnVisSnap(v31);
              v65 = (HDEV)*((_DWORD *)v32 + 16);
              v66 = *(_QWORD *)((char *)v32 + 68);
              v67 = *((_DWORD *)v32 + 19);
              if ( DC::prgnRao(v33) )
                v35 = DC::prgnRao(v34);
              else
                v35 = DC::prgnVisSnap(v34);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v61, v35, (struct ERECTL *)&v65, 0);
              DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v64, v60, &v62);
              v30 = *(struct SURFACE **)v60;
            }
            ++*(_DWORD *)(*((_DWORD *)v30 + 126) + 56);
            v44 = v20;
            if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0xE800u) >= 0 )
            {
              v8 = v47;
              if ( (v20[4] & 4) != 0 )
                v8 = (v53 << 16) | (unsigned __int16)v47;
            }
          }
        }
LABEL_76:
        if ( MaxCount > 0x90 )
          Win32FreePool(v20);
        goto LABEL_80;
      }
      *((_DWORD *)v20 + 2) = 0;
    }
    v29 = (DC **)v60;
    goto LABEL_62;
  }
  EngSetLastError(8u);
LABEL_80:
  KeRestoreFloatingPointState(&FloatSave);
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v64);
  if ( v18 )
    EngControlSprites(v18, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v54);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v38);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
  `vector destructor iterator'(12, (int)v69, (char *)0x10, (void (__thiscall *)(int))DCOBJ::~DCOBJ, v36.bottom, v37);
  return v8;
}
