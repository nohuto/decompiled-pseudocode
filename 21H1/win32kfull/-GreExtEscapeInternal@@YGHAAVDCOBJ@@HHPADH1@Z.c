/*
 * XREFs of ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B
 * Callers:
 *     _GreExtEscape@24 @ 0x1D8C5F (_GreExtEscape@24.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z @ 0x1D700B (-DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z.c)
 *     ?fBlockExtEscape@@YGHAAVDCOBJ@@@Z @ 0x1D7C39 (-fBlockExtEscape@@YGHAAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z @ 0x1D7C6A (-iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0 (-iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 */

int __userpurge GreExtEscapeInternal@<eax>(
        int a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct DCOBJ *a3,
        int *a4,
        unsigned int a5,
        char *a6,
        int a7,
        char *a8)
{
  _DWORD *v10; // esi
  int v11; // eax
  DEVLOCKOBJ *v13; // ecx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  _DWORD *v18; // ecx
  int v19; // edx
  _DWORD *v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  struct XDCOBJ *v25; // edi
  int v26; // edx
  int v27; // ecx
  HDEV DeviceHdev; // eax
  int v29; // eax
  _DWORD *v30; // edi
  size_t v31; // ecx
  void *v32; // edx
  struct _RECTL v33; // [esp-Ch] [ebp-104h]
  struct DCOBJ *v34; // [esp+0h] [ebp-F8h]
  void *v35; // [esp+4h] [ebp-F4h]
  _DWORD v36[13]; // [esp+10h] [ebp-E8h] BYREF
  HDEV v37; // [esp+44h] [ebp-B4h]
  __int64 v38; // [esp+48h] [ebp-B0h]
  LONG v39; // [esp+50h] [ebp-A8h]
  _BYTE v40[48]; // [esp+54h] [ebp-A4h] BYREF
  int v41; // [esp+84h] [ebp-74h]
  int v42; // [esp+88h] [ebp-70h]
  int v43; // [esp+8Ch] [ebp-6Ch]
  _DWORD v44[4]; // [esp+90h] [ebp-68h] BYREF
  _DWORD *v45; // [esp+A0h] [ebp-58h]
  int v46; // [esp+A4h] [ebp-54h]
  _DWORD *v47; // [esp+A8h] [ebp-50h]
  void *v48; // [esp+ACh] [ebp-4Ch]
  struct XDCOBJ *v49; // [esp+B0h] [ebp-48h]
  size_t MaxCount; // [esp+B4h] [ebp-44h]
  void *Src; // [esp+B8h] [ebp-40h]
  int v52; // [esp+BCh] [ebp-3Ch]
  _DWORD v53[8]; // [esp+C0h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+E0h] [ebp-18h]

  v49 = a2;
  Src = a4;
  v48 = a6;
  v47 = *(_DWORD **)a2;
  v10 = (_DWORD *)v47[9];
  v45 = v10;
  v44[3] = v10;
  if ( v10[2] || a1 == 4354 )
  {
    v52 = v10[463];
    v46 = 0;
    MaxCount = (size_t)a3;
    switch ( a1 )
    {
      case 8:
        if ( (unsigned int)a3 < 4 )
          return 0;
        ms_exc.registration.TryLevel = 0;
        v11 = *a4;
        v46 = v11;
        v43 = v11;
        ms_exc.registration.TryLevel = -2;
        if ( (v11 == 4353 || v11 == 4352) && (v52 & 8) != 0 )
          return 0;
LABEL_18:
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40);
        DEVLOCKOBJ::vLockNoDrawing(v13, a2);
        if ( !fBlockExtEscape(v34) )
        {
          v14 = *(_DWORD **)a2;
          v47 = v14;
          if ( v14[5] )
          {
            v15 = v14[9];
            v16 = v14[126];
            if ( *(char *)(v15 + 24) < 0 )
            {
              if ( v16 && *(_DWORD *)(v16 + 24) != v10[277] )
                goto LABEL_23;
            }
            else if ( !v16 || *(_WORD *)(v16 + 64) != 3 )
            {
              goto LABEL_23;
            }
          }
          memset(v53, 0, 0x18u);
          v44[0] = 0;
          v44[2] = 0;
          if ( a1 != 25 )
          {
LABEL_37:
            if ( a1 >= 256 && a1 < 1023 || a1 == 8 && (unsigned int)(v46 - 256) <= 0x2FE )
            {
              v24 = DoFontManagement(a1, v49, MaxCount, (unsigned int *)Src, a5, v48, v33.bottom, v35);
LABEL_73:
              v17 = v24;
              goto LABEL_24;
            }
            if ( a1 == 4119 || a1 == 4120 || a1 == 8 && (v46 == 4119 || v46 == 4120) )
            {
              v24 = iCheckPassthroughImage(
                      (struct DCOBJ *)a1,
                      (struct PDEVOBJ *)MaxCount,
                      (int)Src,
                      a5,
                      v48,
                      v33.bottom,
                      v35);
              goto LABEL_73;
            }
            v25 = v49;
            if ( XDCOBJ::bValidSurf((DC **)v49) && !v48 )
              ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v25 + 504) + 56);
            v26 = *(_DWORD *)v25;
            v27 = *(_DWORD *)(*(_DWORD *)v25 + 504) != 0 ? *(_DWORD *)(*(_DWORD *)v25 + 504) + 16 : 0;
            v47 = (_DWORD *)v27;
            v52 = v27;
            if ( ((unsigned int)&loc_20000 & v10[6]) != 0 )
            {
              v52 = v27;
              if ( a1 == 8 )
              {
                if ( v46 == 4353 || (v52 = v27, v46 == 4352) )
                {
                  v37 = *(HDEV *)(v26 + 1064);
                  v38 = *(_QWORD *)(v26 + 1068);
                  v39 = *(_DWORD *)(v26 + 1076);
                  *(_QWORD *)&v33.left = v38;
                  v33.right = v39;
                  DeviceHdev = hdevFindDeviceHdev(v37, v33, (struct EWNDOBJ *)v35);
                  v10 = DeviceHdev;
                  v52 = (int)v47;
                  v25 = v49;
                  if ( DeviceHdev )
                  {
                    v52 = (int)v47;
                    if ( *(_DWORD *)(*(_DWORD *)v49 + 504) == v45[455] )
                    {
                      v29 = *((_DWORD *)DeviceHdev + 455);
                      if ( v29 )
                        v52 = v29 + 16;
                      else
                        v52 = 0;
                    }
                  }
                  else
                  {
                    v10 = v45;
                  }
                }
              }
            }
            if ( !v10[499] )
              goto LABEL_23;
            memset(v36, 0, sizeof(v36));
            if ( !v52 )
            {
              v30 = *(_DWORD **)v25;
              v36[2] = v30[4];
              v36[3] = v30[9];
              LOWORD(v36[12]) = 1;
              v52 = (int)v36;
              v31 = MaxCount;
              if ( a1 == 17 && MaxCount >= 2 )
              {
                ms_exc.registration.TryLevel = 3;
                v32 = Src;
                v42 = *(unsigned __int16 *)Src;
                ms_exc.registration.TryLevel = -2;
                v30[457] = v42;
                ((void (__stdcall *)(_DWORD *, int, size_t, void *, unsigned int, void *))v10[499])(
                  v36,
                  17,
                  v31,
                  v32,
                  a5,
                  v48);
LABEL_65:
                v17 = 1;
                goto LABEL_24;
              }
              if ( a1 == 33 && MaxCount >= 2 )
              {
                ms_exc.registration.TryLevel = 4;
                v41 = *(unsigned __int16 *)Src;
                ms_exc.registration.TryLevel = -2;
                if ( v41 )
                  v30[6] |= 0x400u;
                else
                  v30[6] &= ~0x400u;
                goto LABEL_65;
              }
            }
            v24 = ((int (__stdcall *)(int, int, size_t, void *, unsigned int, void *))v10[499])(
                    v52,
                    a1,
                    MaxCount,
                    Src,
                    a5,
                    v48);
            goto LABEL_73;
          }
          if ( (int)v10[280] >= 0 )
          {
            v18 = Src;
            v19 = (int)a3;
            v20 = v47;
            goto LABEL_32;
          }
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, v49, 516);
          if ( a3 == (struct DCOBJ *)20 )
          {
            qmemcpy(v53, Src, 0x14u);
            ms_exc.registration.TryLevel = -2;
            v53[5] = v44;
            v18 = v53;
            Src = v53;
            v19 = 24;
            MaxCount = 24;
            v20 = *(_DWORD **)v49;
            v10 = v45;
LABEL_32:
            v21 = v20[126];
            if ( v21 && (*(_DWORD *)(v21 + 72) & 0x2000000) != 0 && (v19 == 20 || (int)v10[280] < 0) )
            {
              v22 = v20[459];
              v23 = v20[460];
              ms_exc.registration.TryLevel = 2;
              *v18 -= v22;
              v18[1] -= v23;
              ms_exc.registration.TryLevel = -2;
            }
            goto LABEL_37;
          }
        }
LABEL_23:
        v17 = 0;
LABEL_24:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
        return v17;
      case 4352:
      case 4353:
        if ( (v52 & 8) == 0 && !v47[5] )
          return iOpenGLExtEscape(a3, (int)a4, a5, v48, (int)v34, v35);
        break;
      case 4354:
        if ( !v47[5] )
          return iWndObjSetupExtEscape(a3, (int)a4, a5, v48, (int)v34, v35);
        return 0;
      default:
        if ( a1 != 3075 && (a1 != 4124 || UserUnsafeIsCurrentProcessDwm()) )
          goto LABEL_18;
        break;
    }
  }
  return 0;
}
