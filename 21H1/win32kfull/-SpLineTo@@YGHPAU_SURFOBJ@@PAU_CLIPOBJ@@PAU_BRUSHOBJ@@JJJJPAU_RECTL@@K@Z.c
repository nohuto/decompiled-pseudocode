/*
 * XREFs of ?SpLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0xBC06C
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     _OffLineTo@44 @ 0xBC28A (_OffLineTo@44.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  int v9; // ebx
  struct _SURFOBJ *v10; // edi
  LONG *p_lDelta; // esi
  LONG *v12; // ebx
  HSURF hsurf; // eax
  PKTHREAD (__stdcall *v15)(); // ebx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  PKTHREAD v21; // eax
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  HDEV hdev; // [esp-4h] [ebp-2E4h]
  struct _SURFOBJ *v27; // [esp+0h] [ebp-2E0h]
  int v28; // [esp+10h] [ebp-2D0h]
  struct _CLIPOBJ *v29; // [esp+14h] [ebp-2CCh] BYREF
  struct _SURFOBJ *v30; // [esp+18h] [ebp-2C8h] BYREF
  LONG *v31; // [esp+1Ch] [ebp-2C4h] BYREF
  struct _POINTL v32; // [esp+20h] [ebp-2C0h] BYREF
  RECTL *prclBounds; // [esp+28h] [ebp-2B8h]
  int v34; // [esp+2Ch] [ebp-2B4h]
  struct _RECTL v35[42]; // [esp+30h] [ebp-2B0h] BYREF

  v32.x = 0;
  v32.y = 0;
  v34 = (int)a3;
  v9 = 1;
  v30 = a1;
  v29 = a2;
  prclBounds = a8;
  v28 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v35, a1, a2, a8);
  while ( ENUMUNDERLAYS::bEnum(v35, &v30, &v32, &v29) )
  {
    v10 = v30;
    p_lDelta = 0;
    v12 = 0;
    v31 = 0;
    if ( v30 )
    {
      hsurf = v30[1].hsurf;
      if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
      {
        p_lDelta = &v30[-1].lDelta;
        hdev = v30->hdev;
        v31 = &v30[-1].lDelta;
        GreLockDisplayDevice(hdev);
        v12 = &v10[-1].lDelta;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v31, &v29) )
    {
      if ( v10->iType == 1 )
      {
        v15 = KeGetCurrentThread;
        if ( bAllowShareAccess(v27) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v17 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v17) + 156) )
            {
              v18 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v18) + 52)
                || (v19 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v19) + 56)) )
              {
                v20 = KeGetCurrentThread();
                if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v20) + 156) + 20) & 0x100) != 0 )
                {
                  v21 = KeGetCurrentThread();
                  W32GetThreadWin32Thread(v21);
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
      else
      {
        v15 = KeGetCurrentThread;
      }
      if ( v10->iType == 1 )
      {
        if ( bAllowShareAccess(v27) )
        {
          v22 = v15();
          if ( W32GetThreadWin32Thread(v22) )
          {
            v23 = v15();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v23) + 156) )
            {
              v24 = v15();
              if ( !*(_DWORD *)(W32GetThreadWin32Thread(v24) + 52) )
              {
                v25 = v15();
                W32GetThreadWin32Thread(v25);
              }
            }
          }
        }
      }
LABEL_27:
      v9 = OffLineTo((int)v10, v29, v34, x1, y1, x2, y2, prclBounds, mix) & v28;
      v28 = v9;
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    else
    {
      if ( v12 )
        GreUnlockDisplayDevice(p_lDelta[7]);
      v9 = v28;
    }
  }
  return v9;
}
