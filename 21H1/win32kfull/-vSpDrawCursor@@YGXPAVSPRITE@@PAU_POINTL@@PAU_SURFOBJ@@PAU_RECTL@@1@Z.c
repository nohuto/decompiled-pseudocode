/*
 * XREFs of ?vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z @ 0x1E1501
 * Callers:
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 */

void __userpurge vSpDrawCursor(
        LONG *a1@<edx>,
        int a2@<ecx>,
        struct SPRITE *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7)
{
  char *v8; // edi
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v15; // eax
  PKTHREAD v16; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  int v25; // ecx
  int v26; // edx
  DHSURF dhsurf; // eax
  int v28; // esi
  int v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  PKTHREAD v33; // eax
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // eax
  PKTHREAD v37; // eax
  PKTHREAD v38; // eax
  PKTHREAD v39; // eax
  PKTHREAD v40; // eax
  int v41; // [esp-28h] [ebp-54h]
  _DWORD *v42; // [esp-1Ch] [ebp-48h]
  int v43; // [esp+10h] [ebp-1Ch] BYREF
  HSURF hsurf; // [esp+14h] [ebp-18h]
  LONG *v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  int v47; // [esp+20h] [ebp-Ch]
  int v48[2]; // [esp+24h] [ebp-8h] BYREF
  struct SPRITE *v49; // [esp+34h] [ebp+8h]

  v45 = a1;
  v47 = a2;
  v43 = 0;
  hsurf = 0;
  if ( *(_DWORD *)(a2 + 84) )
  {
    v42 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a2 + 12) + 16) + 72);
    v48[0] = 0;
    if ( !EXLATEOBJ::bInitXlateObj(v48, 0, 0, ppalMono, v42, (int)ppalDefault, (int)ppalDefault, 0, 0xFFFFFF, 0, 0) )
    {
LABEL_58:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v48);
      return;
    }
    v8 = 0;
    if ( a3 )
    {
      v10 = *((_DWORD *)a3 + 14);
      if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
      {
        v8 = (char *)a3 - 16;
        GreLockDisplayDevice(*((_DWORD *)a3 + 3));
      }
    }
    v11 = *(_DWORD *)(a2 + 84);
    v12 = 0;
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 56);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v12 = v11 - 16;
        GreLockDisplayDevice(*(_DWORD *)(v11 - 16 + 28));
      }
    }
    if ( *((_WORD *)a3 + 24) != 1 )
      goto LABEL_25;
    if ( bAllowShareAccess(a3) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(CurrentThread) )
      {
        v15 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v15) + 156) )
        {
          v16 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v16) + 52)
            || (v17 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v17) + 56)) )
          {
            v18 = KeGetCurrentThread();
            if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v18) + 156) + 20) & 1) != 0 )
            {
              v19 = KeGetCurrentThread();
              v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(W32GetThreadWin32Thread(v19) + 156) + 48);
LABEL_28:
              v49 = (struct SPRITE *)v48[0];
              v41 = *(_DWORD *)(v47 + 84);
              v46 = (int)&gptlZero;
              OffBitBlt(
                (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v20,
                v45,
                (int)a3,
                &gptlZero,
                v41,
                0,
                0,
                v48[0],
                a4,
                (int *)a5,
                0,
                0,
                0,
                34952);
              if ( v12 )
                GreUnlockDisplayDevice(*(_DWORD *)(v12 + 28));
              v25 = v47;
              v26 = *(_DWORD *)(v47 + 88);
              dhsurf = a5->dhsurf;
              v47 = v26;
              v43 = (int)dhsurf;
              if ( v26 )
              {
                v49 = 0;
                hsurf = a5->hsurf;
                v46 = v25 + 92;
              }
              else
              {
                v26 = *(_DWORD *)(v25 + 84);
                v47 = v26;
                hsurf = (HSURF)((char *)a5->hsurf + (*(int *)(v26 + 20) >> 1));
              }
              v28 = 0;
              if ( v26 )
              {
                v29 = *(_DWORD *)(v26 + 56);
                if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
                {
                  v28 = v26 - 16;
                  GreLockDisplayDevice(*(_DWORD *)(v26 - 16 + 28));
                }
              }
              if ( *((_WORD *)a3 + 24) != 1 )
                goto LABEL_51;
              if ( bAllowShareAccess(a3) )
              {
                v30 = KeGetCurrentThread();
                if ( W32GetThreadWin32Thread(v30) )
                {
                  v31 = KeGetCurrentThread();
                  if ( *(_DWORD *)(W32GetThreadWin32Thread(v31) + 156) )
                  {
                    v32 = KeGetCurrentThread();
                    if ( *(_DWORD *)(W32GetThreadWin32Thread(v32) + 52)
                      || (v33 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v33) + 56)) )
                    {
                      v34 = KeGetCurrentThread();
                      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v34) + 156) + 20) & 1) != 0 )
                      {
                        v35 = KeGetCurrentThread();
                        v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(W32GetThreadWin32Thread(v35) + 156) + 48);
LABEL_54:
                        OffBitBlt(
                          (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v36,
                          v45,
                          (int)a3,
                          (_DWORD *)v46,
                          v47,
                          0,
                          0,
                          (int)v49,
                          a4,
                          &v43,
                          0,
                          0,
                          0,
                          26214);
                        if ( v28 )
                          GreUnlockDisplayDevice(*(_DWORD *)(v28 + 28));
                        if ( v8 )
                          GreUnlockDisplayDevice(*((_DWORD *)v8 + 7));
                        goto LABEL_58;
                      }
                    }
                  }
                }
              }
              if ( *((_WORD *)a3 + 24) != 1
                || !bAllowShareAccess(a3)
                || (v37 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v37))
                || (v38 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v38) + 156))
                || (v39 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v39) + 52))
                && (v40 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v40) + 56)) )
              {
LABEL_51:
                if ( (*((_BYTE *)a3 + 56) & 1) != 0 )
                {
                  v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)a3 + 3) + 832);
                  goto LABEL_54;
                }
              }
              v36 = EngBitBlt;
              goto LABEL_54;
            }
          }
        }
      }
    }
    if ( *((_WORD *)a3 + 24) != 1
      || !bAllowShareAccess(a3)
      || (v21 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v21))
      || (v22 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v22) + 156))
      || (v23 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v23) + 52))
      && (v24 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v24) + 56)) )
    {
LABEL_25:
      if ( (*((_BYTE *)a3 + 56) & 1) != 0 )
      {
        v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)a3 + 3) + 832);
        goto LABEL_28;
      }
    }
    v20 = EngBitBlt;
    goto LABEL_28;
  }
}
