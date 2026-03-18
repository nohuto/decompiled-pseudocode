/*
 * XREFs of ?SpGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0xBDB96
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     _OffGradientFill@48 @ 0xBDDCE (_OffGradientFill@48.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v10; // ebx
  struct _SURFOBJ *v11; // edi
  LONG *p_lDelta; // esi
  LONG *v13; // ebx
  HSURF hsurf; // eax
  PKTHREAD (__stdcall *v16)(); // ebx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  HDEV hdev; // [esp-4h] [ebp-2ECh]
  struct _SURFOBJ *v28; // [esp+0h] [ebp-2E8h]
  int v29; // [esp+Ch] [ebp-2DCh]
  struct _CLIPOBJ *v30; // [esp+10h] [ebp-2D8h] BYREF
  struct _SURFOBJ *v31; // [esp+14h] [ebp-2D4h] BYREF
  LONG *v32; // [esp+18h] [ebp-2D0h] BYREF
  struct _POINTL v33; // [esp+1Ch] [ebp-2CCh] BYREF
  int v34; // [esp+24h] [ebp-2C4h]
  int v35; // [esp+28h] [ebp-2C0h]
  int v36; // [esp+2Ch] [ebp-2BCh]
  int v37; // [esp+30h] [ebp-2B8h]
  int v38; // [esp+34h] [ebp-2B4h]
  struct _RECTL v39[42]; // [esp+38h] [ebp-2B0h] BYREF

  v33.x = 0;
  v33.y = 0;
  v38 = (int)a3;
  v37 = (int)a4;
  v36 = (int)a6;
  v34 = (int)a9;
  v31 = a1;
  v10 = 1;
  v30 = a2;
  v35 = (int)a8;
  v29 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v39, a1, a2, a8);
  while ( ENUMUNDERLAYS::bEnum(v39, &v31, &v33, &v30) )
  {
    v11 = v31;
    p_lDelta = 0;
    v13 = 0;
    v32 = 0;
    if ( v31 )
    {
      hsurf = v31[1].hsurf;
      if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
      {
        p_lDelta = &v31[-1].lDelta;
        hdev = v31->hdev;
        v32 = &v31[-1].lDelta;
        GreLockDisplayDevice(hdev);
        v13 = &v11[-1].lDelta;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v32, &v30) )
    {
      if ( v11->iType == 1 )
      {
        v16 = KeGetCurrentThread;
        if ( bAllowShareAccess(v28) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v18 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v18) + 156) )
            {
              v19 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v19) + 52)
                || (v20 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v20) + 56)) )
              {
                v21 = KeGetCurrentThread();
                if ( ((unsigned int)&loc_20000 & *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v21) + 156) + 20)) != 0 )
                {
                  v22 = KeGetCurrentThread();
                  W32GetThreadWin32Thread(v22);
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
      else
      {
        v16 = KeGetCurrentThread;
      }
      if ( v11->iType == 1 )
      {
        if ( bAllowShareAccess(v28) )
        {
          v23 = v16();
          if ( W32GetThreadWin32Thread(v23) )
          {
            v24 = v16();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v24) + 156) )
            {
              v25 = v16();
              if ( !*(_DWORD *)(W32GetThreadWin32Thread(v25) + 52) )
              {
                v26 = v16();
                W32GetThreadWin32Thread(v26);
              }
            }
          }
        }
      }
LABEL_27:
      v10 = OffGradientFill((int)v11, v30, v38, v37, a5, v36, a7, v35, v34, a10) & v29;
      v29 = v10;
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    else
    {
      if ( v13 )
        GreUnlockDisplayDevice(p_lDelta[7]);
      v10 = v29;
    }
  }
  return v10;
}
