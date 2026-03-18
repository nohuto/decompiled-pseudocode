/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C008BF8C
 * Callers:
 *     GreExtEscape @ 0x1C008BEF0 (GreExtEscape.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00898D0 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C008BE54 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C008C4E0 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C7C4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C014EA34 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027AD8C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027B198 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027B7D8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6000 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // rsi
  __int64 v10; // rcx
  HDEV v11; // rbx
  __int64 v12; // r8
  int v13; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  struct _SURFOBJ *v21; // r15
  HDEV DeviceHdev; // rax
  HDEV v23; // r8
  int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // [rsp+40h] [rbp-3C8h]
  HDEV v28; // [rsp+50h] [rbp-3B8h] BYREF
  unsigned __int16 v29; // [rsp+58h] [rbp-3B0h]
  int v30; // [rsp+5Ch] [rbp-3ACh]
  int v31; // [rsp+60h] [rbp-3A8h]
  __int64 v32; // [rsp+68h] [rbp-3A0h] BYREF
  int v33; // [rsp+74h] [rbp-394h]
  struct _RECTL v34; // [rsp+80h] [rbp-388h] BYREF
  _BYTE v35[80]; // [rsp+90h] [rbp-378h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-328h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-318h]
  _BYTE v38[704]; // [rsp+100h] [rbp-308h] BYREF

  v6 = a4;
  v10 = *(_QWORD *)a1;
  v11 = *(HDEV *)(v10 + 48);
  v28 = v11;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v12 = *((unsigned int *)v11 + 652);
  v13 = 0;
  v27 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v27 = *(_DWORD *)a4;
    v30 = *(_DWORD *)a4;
    v13 = v30;
    if ( (unsigned int)(v30 - 4352) <= 1 && (v12 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v35);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v35, a1);
    if ( !(unsigned int)fBlockExtEscape(a1) )
    {
      v15 = *(_QWORD *)a1;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
      {
        v16 = *(_QWORD *)(v15 + 496);
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 40LL) & 0x80u) != 0 )
        {
          if ( v16 && *(_QWORD *)(v16 + 40) != *((_QWORD *)v11 + 225) )
            goto LABEL_20;
        }
        else if ( !v16 || *(_WORD *)(v16 + 100) != 3 )
        {
          goto LABEL_20;
        }
      }
      v36 = 0LL;
      v37 = 0LL;
      v32 = 0LL;
      v33 = 0;
      if ( a2 != 25 )
      {
LABEL_33:
        if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v13 - 256) <= 0x2FE )
        {
          v26 = DoFontManagement(a1, a2, a3, v6, a5, a6);
        }
        else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v13 - 4119) <= 1 )
        {
          v26 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v28, a2, a3, v6, a5, a6);
        }
        else
        {
          if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !a6 )
            ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
          v21 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
          if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v27 - 4352) <= 1 )
          {
            v34 = *(struct _RECTL *)(v20 + 1032);
            DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v20 + 48), &v34, 0LL);
            v23 = DeviceHdev;
            if ( DeviceHdev )
            {
              if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v11 + 319) )
                v21 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 319));
              v11 = v23;
              v28 = v23;
            }
          }
          if ( !*((_QWORD *)v11 + 360) )
            goto LABEL_20;
          if ( !v21 )
          {
            memset(v38, 0, 0x2B8uLL);
            v21 = SURFACE::pSurfobj((SURFACE *)v38);
            v21->dhpdev = *(DHPDEV *)(*(_QWORD *)a1 + 24LL);
            v21->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
            v21->iType = 1;
            if ( a2 == 17 && a3 >= 2 )
            {
              v29 = *(_WORD *)v6;
              *(_DWORD *)(*(_QWORD *)a1 + 2076LL) = v29;
              PDEVOBJ::Escape((PDEVOBJ *)&v28, v21, 0x11u, a3, v6, a5, a6);
LABEL_54:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v35);
              return 1LL;
            }
            if ( a2 == 33 && a3 >= 2 )
            {
              v24 = *(unsigned __int16 *)v6;
              v31 = v24;
              v25 = *(_QWORD *)a1;
              if ( v24 )
                *(_DWORD *)(v25 + 36) |= 0x400u;
              else
                *(_DWORD *)(v25 + 36) &= ~0x400u;
              goto LABEL_54;
            }
          }
          v26 = PDEVOBJ::Escape((PDEVOBJ *)&v28, v21, a2, a3, v6, a5, a6);
        }
        v17 = v26;
        goto LABEL_21;
      }
      if ( *((int *)v11 + 456) >= 0 )
      {
LABEL_28:
        v18 = *(_QWORD *)(v15 + 496);
        if ( v18 && (*(_DWORD *)(v18 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 456) < 0) )
        {
          v19 = *(_DWORD *)(v15 + 2092);
          *(_DWORD *)v6 -= *(_DWORD *)(v15 + 2088);
          *((_DWORD *)v6 + 1) -= v19;
        }
        goto LABEL_33;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v32, a1, 0x204u);
      if ( a3 == 20 )
      {
        v36 = *(_OWORD *)v6;
        LODWORD(v37) = *((_DWORD *)v6 + 4);
        *((_QWORD *)&v37 + 1) = &v32;
        v6 = (char *)&v36;
        a3 = 32;
        v15 = *(_QWORD *)a1;
        goto LABEL_28;
      }
    }
LABEL_20:
    v17 = 0;
LABEL_21:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v35);
    return v17;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v12 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v12) )
        return 0LL;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(a1, 0x1102u, a3, a4, a5, a6);
  }
}
