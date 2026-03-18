/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027C708
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0149594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C01495EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015A488 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027C144 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027C1F8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027C2B8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027C658 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027D158 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0285FE0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A7450 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BF8D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, int a3, void *a4, int a5, void *a6)
{
  unsigned __int64 v6; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  XLATEOBJ *v11; // r13
  __int64 v12; // r8
  HDEV DeviceHdev; // rdx
  WNDOBJ *v14; // rbx
  size_t v15; // rax
  ULONG v16; // ecx
  HDC *v17; // r14
  __int64 v18; // r9
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _WORD *v24; // rdx
  ULONG v25; // ecx
  __int64 v26; // rax
  struct REGION *v27; // rax
  struct REGION *v28; // rax
  HDEV v29; // [rsp+30h] [rbp-508h] BYREF
  XLATEOBJ *v30; // [rsp+38h] [rbp-500h] BYREF
  int v31; // [rsp+40h] [rbp-4F8h]
  unsigned __int64 v32; // [rsp+48h] [rbp-4F0h]
  unsigned int v33; // [rsp+50h] [rbp-4E8h]
  int v34; // [rsp+54h] [rbp-4E4h]
  struct SURFACE *v35; // [rsp+58h] [rbp-4E0h]
  void *Src; // [rsp+60h] [rbp-4D8h]
  HDEV *Parameter; // [rsp+68h] [rbp-4D0h] BYREF
  char *v38; // [rsp+70h] [rbp-4C8h]
  int v39; // [rsp+78h] [rbp-4C0h]
  int v40; // [rsp+7Ch] [rbp-4BCh]
  void *v41; // [rsp+80h] [rbp-4B8h]
  void *v42; // [rsp+88h] [rbp-4B0h]
  int v43; // [rsp+90h] [rbp-4A8h]
  unsigned int v44; // [rsp+94h] [rbp-4A4h]
  void *v45; // [rsp+98h] [rbp-4A0h]
  struct _RECTL v46; // [rsp+A0h] [rbp-498h] BYREF
  _BYTE v47[80]; // [rsp+B0h] [rbp-488h] BYREF
  WNDOBJ *pwo; // [rsp+100h] [rbp-438h]
  __int64 v49; // [rsp+110h] [rbp-428h] BYREF
  int v50; // [rsp+118h] [rbp-420h]
  int v51; // [rsp+11Ch] [rbp-41Ch]
  _DWORD v52[8]; // [rsp+120h] [rbp-418h] BYREF
  __int64 v53; // [rsp+140h] [rbp-3F8h]
  char v54[256]; // [rsp+150h] [rbp-3E8h] BYREF
  char v55; // [rsp+250h] [rbp-2E8h] BYREF
  _BYTE v56[4]; // [rsp+2F0h] [rbp-248h] BYREF
  struct _RECTL v57; // [rsp+2F4h] [rbp-244h] BYREF

  Src = a4;
  v6 = a3;
  v33 = a3;
  LODWORD(v32) = a2;
  v45 = a6;
  v8 = 0;
  v34 = 0;
  v31 = 0;
  `vector constructor iterator'(v54, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v54, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v30 = 0LL;
  v11 = 0LL;
  v29 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v47[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v35 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v29[10] & 0x20000) != 0 )
  {
    v46 = *(struct _RECTL *)(v12 + 1032);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v12 + 48), &v46, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v29 + 319) )
        v35 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 319);
      v29 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v29 + 360) || ((_DWORD)v29[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
    goto LABEL_3;
  }
  *(_QWORD *)&v46.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v49 = 0LL;
  v53 = 0LL;
  v52[0] = 0;
  v41 = 0LL;
  v44 = 0;
  Parameter = &v29;
  if ( v35 )
    v38 = (char *)v35 + 24;
  else
    v38 = 0LL;
  v39 = v32;
  v40 = v6;
  v43 = a5;
  v42 = v45;
  if ( (_DWORD)v32 != 4352 )
  {
    v41 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v44;
    goto LABEL_66;
  }
  v15 = v6;
  v32 = v6;
  if ( v6 >= 0x18 )
  {
    if ( v6 > 0x98 )
    {
      v17 = (HDC *)PALLOCMEM2((unsigned int)v6, 1818718023LL, 0);
      if ( !v17 )
      {
        v16 = 8;
        goto LABEL_21;
      }
      v15 = v32;
    }
    else
    {
      v17 = (HDC *)&v55;
    }
    memmove(v17, Src, v15);
    if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
    {
      v18 = *((unsigned int *)v17 + 2);
      if ( (unsigned int)v18 > 0x10 || v33 < (unsigned __int64)(8 * v18 + 24) )
      {
        v25 = 8;
        goto LABEL_44;
      }
      v31 = LookUpWndobjs(a1, (struct DCOBJ *)v54, v17 + 3, v18);
      if ( v31 < 0 )
        goto LABEL_62;
    }
    v19 = *((_DWORD *)v17 + 1);
    if ( (v19 & 2) != 0 )
    {
      v20 = *((_DWORD *)v29 + 527);
      if ( (unsigned int)(v20 - 2) > 1 )
      {
        v11 = xloIdent;
      }
      else
      {
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
        if ( v21 )
        {
          v22 = 16;
          if ( v20 != 2 )
            v22 = 256;
          v23 = 0;
          v24 = v56;
          do
            *v24++ = v23++;
          while ( v23 < v22 );
          if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v30, v56, v21, v35, v22, v22) )
            v11 = v30;
        }
        if ( !v11 )
          v11 = xloIdent;
        v19 = *((_DWORD *)v17 + 1);
      }
    }
    v17[2] = (HDC)v11;
    if ( (v19 & 4) != 0 )
      goto LABEL_55;
    if ( (v19 & 1) == 0 )
    {
      v17[1] = 0LL;
      goto LABEL_55;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v26 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v26 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v17[1] = (HDC)pwo;
LABEL_55:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v14 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v27 = XDCOBJ::prgnEffRao((DC **)a1);
          v49 = *((_QWORD *)v27 + 12);
          v50 = *((_DWORD *)v27 + 26);
          v51 = *((_DWORD *)v27 + 27);
          v28 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v56, v28, (struct ERECTL *)&v49, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v52, a1, &v57);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v41 = v17;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v8 = v44;
          if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
            v8 = (v31 << 16) | (unsigned __int16)v44;
        }
      }
LABEL_62:
      if ( v32 > 0x98 )
        Win32FreePool(v17);
      goto LABEL_66;
    }
    v25 = 6;
LABEL_44:
    EngSetLastError(v25);
    goto LABEL_62;
  }
  v16 = 87;
LABEL_21:
  EngSetLastError(v16);
LABEL_66:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v52);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v46);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
  `vector destructor iterator'(v54, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
