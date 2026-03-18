/*
 * XREFs of ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4
 * Callers:
 *     <none>
 * Callees:
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 *     ??1SEMOBJEXORSHARED@@QAE@XZ @ 0xAEE44 (--1SEMOBJEXORSHARED@@QAE@XZ.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?bInsideDriverCall@@YGHPAU_SPRITESTATE@@@Z @ 0xE5B1E (-bInsideDriverCall@@YGHPAU_SPRITESTATE@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QAEHXZ @ 0xE5B8C (-bRedo@UNDOW32THREADPIDLOCKS@@QAEHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QAEXXZ @ 0xE5BBC (-vUndo@UNDOW32THREADPIDLOCKS@@QAEXXZ.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

int __stdcall bSpBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  int v11; // ebx
  struct _SURFOBJ *v12; // esi
  int *v13; // edx
  int *v14; // ecx
  struct _RECTL *v15; // ecx
  HDEV v16; // edi
  int v17; // eax
  LONG x; // ecx
  int v19; // edx
  LONG v20; // eax
  unsigned int v21; // eax
  struct _POINTL *v23; // esi
  struct _SURFOBJ *v24; // edx
  LONG *v25; // edi
  HSURF v26; // ecx
  struct _SURFOBJ *v27; // ecx
  LONG *v28; // esi
  HSURF v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  PKTHREAD v33; // eax
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  PKTHREAD v36; // eax
  PKTHREAD v37; // eax
  PKTHREAD v38; // eax
  PKTHREAD v39; // eax
  LONG y; // edx
  LONG *p_lDelta; // edi
  HSURF hsurf; // eax
  struct _SURFOBJ *v43; // eax
  LONG *v44; // esi
  HSURF v45; // ecx
  int v46; // eax
  PKTHREAD v47; // eax
  PKTHREAD v48; // eax
  PKTHREAD v49; // eax
  PKTHREAD v50; // eax
  PKTHREAD v51; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v53; // eax
  PKTHREAD v54; // eax
  PKTHREAD v55; // eax
  PKTHREAD v56; // eax
  struct _SPRITESTATE *v57; // [esp+0h] [ebp-170h]
  struct _SPRITESTATE *v58; // [esp+0h] [ebp-170h]
  struct _RECTL *v59; // [esp+4h] [ebp-16Ch]
  BYTE v60; // [esp+17h] [ebp-159h]
  struct _SURFOBJ *v61; // [esp+18h] [ebp-158h]
  struct _SURFOBJ *v62; // [esp+18h] [ebp-158h]
  struct _XLATEOBJ *v64; // [esp+24h] [ebp-14Ch]
  int v65; // [esp+2Ch] [ebp-144h]
  POINTL *v66; // [esp+30h] [ebp-140h]
  HDEV v67; // [esp+34h] [ebp-13Ch]
  HDEV hdev; // [esp+38h] [ebp-138h] BYREF
  struct SPRITE *v69; // [esp+3Ch] [ebp-134h] BYREF
  int v70; // [esp+40h] [ebp-130h]
  int v71; // [esp+44h] [ebp-12Ch]
  int v72; // [esp+48h] [ebp-128h]
  int v73; // [esp+4Ch] [ebp-124h]
  int v74; // [esp+50h] [ebp-120h] BYREF
  int v75; // [esp+54h] [ebp-11Ch]
  int v76; // [esp+58h] [ebp-118h]
  char v77[4]; // [esp+5Ch] [ebp-114h] BYREF
  _BYTE v78[72]; // [esp+60h] [ebp-110h] BYREF
  _BYTE v79[112]; // [esp+A8h] [ebp-C8h] BYREF
  struct _RECTL v80; // [esp+118h] [ebp-58h] BYREF
  struct _CLIPOBJ v81; // [esp+128h] [ebp-48h] BYREF
  int v82; // [esp+140h] [ebp-30h]
  int v83; // [esp+144h] [ebp-2Ch]
  RECTL v84; // [esp+14Ch] [ebp-24h] BYREF
  int v85; // [esp+15Ch] [ebp-14h] BYREF
  int v86; // [esp+160h] [ebp-10h]
  int v87; // [esp+164h] [ebp-Ch]
  int v88; // [esp+168h] [ebp-8h]

  v61 = a2;
  v73 = (int)a3;
  v72 = (int)a8;
  v71 = (int)a9;
  v70 = (int)a10;
  memset(&v80, 0, sizeof(v80));
  v11 = 0;
  v12 = a1;
  v74 = 0;
  v75 = 0;
  v69 = 0;
  memset(&v81, 0, 16);
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  memset(&v84, 0, sizeof(v84));
  if ( a4 && LOBYTE(a4[2].y) )
  {
    v84 = *(RECTL *)&a4->y;
    if ( ERECTL::bEmpty((ERECTL *)&v84) )
      return 1;
    v85 = *v14;
    v86 = v14[1];
    v87 = v14[2];
    v88 = v14[3];
    ERECTL::operator*=(&v85, v13);
    v12 = a1;
    a6 = v15;
  }
  *(_DWORD *)&v81.iDComplexity = 0;
  v81.rclBounds.bottom = 0;
  v83 = 0;
  hdev = a2->hdev;
  v82 = 0;
  v16 = hdev + 16;
  v67 = hdev + 16;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)&v81.rclBounds.bottom);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v77, _ghsemSprite, v17);
  if ( UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)&v81.rclBounds.bottom) )
  {
    if ( bInsideDriverCall(v57) || SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v79, (struct PDEVOBJ *)&hdev);
      if ( *((_DWORD *)v16 + 205) )
      {
        y = a7->y;
        v80.left = a7->x;
        v80.top = y;
        v80.right = v80.left + a6->right - a6->left;
        v80.bottom = y + a6->bottom - a6->top;
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v81.rclBounds.bottom, (struct _SPRITESTATE *)v16, &v80);
        v12 = a1;
        if ( v81.rclBounds.bottom )
          vSpRedrawAreaExMirror(v58, v59);
        v61 = (struct _SURFOBJ *)*((_DWORD *)v16 + 205);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v81.rclBounds.bottom);
      }
      p_lDelta = 0;
      if ( v12 )
      {
        hsurf = v12[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v12[-1].lDelta;
          GreLockDisplayDevice(v12->hdev);
        }
      }
      v43 = v61;
      v44 = 0;
      if ( v61 )
      {
        v45 = v61[1].hsurf;
        if ( ((unsigned int)v45 & 0x80004000) != 0 && ((unsigned __int16)v45 & 0x200) == 0 )
        {
          v44 = &v61[-1].lDelta;
          GreLockDisplayDevice(v61->hdev);
          v43 = v61;
        }
      }
      if ( a11 == 52428 )
      {
        v46 = INVOKEOFFCOPYBITS(
                a1,
                &gptlZero.x,
                &gptlZero,
                v43,
                a4,
                a5,
                (struct _CLIPOBJ *)a6,
                (struct _XLATEOBJ *)a7,
                (struct _RECTL *)v58,
                (struct _POINTL *)v59);
      }
      else
      {
        if ( a1->iType == 1 )
        {
          if ( bAllowShareAccess(a1)
            && (v47 = KeGetCurrentThread(), W32GetThreadWin32Thread(v47))
            && (v48 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v48) + 156))
            && ((v49 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v49) + 52))
             || (v50 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v50) + 56)))
            && (v51 = KeGetCurrentThread(), (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v51) + 156) + 20) & 1) != 0) )
          {
            CurrentThread = KeGetCurrentThread();
            W32GetThreadWin32Thread(CurrentThread);
          }
          else if ( a1->iType == 1 )
          {
            if ( bAllowShareAccess(a1) )
            {
              v53 = KeGetCurrentThread();
              if ( W32GetThreadWin32Thread(v53) )
              {
                v54 = KeGetCurrentThread();
                if ( *(_DWORD *)(W32GetThreadWin32Thread(v54) + 156) )
                {
                  v55 = KeGetCurrentThread();
                  if ( !*(_DWORD *)(W32GetThreadWin32Thread(v55) + 52) )
                  {
                    v56 = KeGetCurrentThread();
                    W32GetThreadWin32Thread(v56);
                  }
                }
              }
            }
          }
        }
        v46 = OffBitBlt(
                (int)a1,
                (int)&gptlZero,
                (int)v61,
                v73,
                (struct _CLIPOBJ *)a4,
                (int)a5,
                (int)a6,
                (int)a7,
                v72,
                v71,
                v70,
                a11);
      }
      v11 = v46;
      if ( v44 )
        GreUnlockDisplayDevice(v44[7]);
      if ( p_lDelta )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v79, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      v64 = (struct _XLATEOBJ *)(a6->left - a7->x);
      v19 = a6->top - a7->y;
      v80.top = a7->y;
      v80.right = a6->right - (_DWORD)v64;
      v20 = a6->bottom - v19;
      v80.left = x;
      v80.bottom = v20;
      v65 = v19;
      GreAcquireSemaphoreSharedInternal(*((_DWORD *)v16 + 22));
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_DWORD *)v16 + 22));
      if ( *((_DWORD *)v16 + 161) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)a6, a4, (struct _RECTL *)1, (struct _CLIPOBJ *)v58, (int)v59);
      EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)v16 + 22));
      GreReleaseSemaphoreInternal(*((_DWORD *)v16 + 22));
      if ( (int)v64 <= 0 )
      {
        if ( v65 <= 0 )
          v21 = 0;
        else
          v21 = 2;
      }
      else
      {
        v21 = 2 * (v65 > 0) + 1;
      }
      v23 = a4;
      if ( a4 )
      {
        v60 = a4[2].y;
        if ( v60 )
        {
          v84 = *(RECTL *)&a4->y;
          v16 = v67;
          v23 = a4;
        }
      }
      else
      {
        v60 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v78, (struct _SPRITESTATE *)v16, &v80, v21, 0);
      do
      {
        v76 = ENUMAREAS::bEnum((ENUMAREAS *)v78, &v69, &v80);
        v81.iUniq = (ULONG)v64 + v80.left;
        v81.rclBounds.top = (LONG)v64 + v80.right;
        v81.rclBounds.left = v65 + v80.top;
        v81.rclBounds.right = v65 + v80.bottom;
        if ( !v60 || bIntersect((const struct _RECTL *)&v81, &v84, (struct _RECTL *)&v23->y) )
        {
          if ( v69 )
          {
            v24 = (struct _SURFOBJ *)*((_DWORD *)v69 + 28);
            v66 = (POINTL *)((char *)v69 + 116);
          }
          else
          {
            v24 = (struct _SURFOBJ *)*((_DWORD *)v16 + 4);
            v66 = &gptlZero;
          }
          v25 = 0;
          v62 = v24;
          if ( a1 )
          {
            v26 = a1[1].hsurf;
            if ( ((unsigned int)v26 & 0x80004000) != 0 && ((unsigned __int16)v26 & 0x200) == 0 )
            {
              v25 = &a1[-1].lDelta;
              GreLockDisplayDevice(a1->hdev);
            }
          }
          v27 = v62;
          v28 = 0;
          if ( v62 )
          {
            v29 = v62[1].hsurf;
            if ( ((unsigned int)v29 & 0x80004000) != 0 && ((unsigned __int16)v29 & 0x200) == 0 )
            {
              v28 = &v62[-1].lDelta;
              GreLockDisplayDevice(v62->hdev);
              v27 = v62;
            }
          }
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(
              a1,
              &gptlZero.x,
              v66,
              v27,
              a4,
              a5,
              &v81,
              (struct _XLATEOBJ *)&v80,
              (struct _RECTL *)v58,
              (struct _POINTL *)v59);
          }
          else
          {
            if ( v72 )
            {
              v74 = *(_DWORD *)v72 + v81.iUniq - a6->left;
              v75 = v81.rclBounds.left + *(_DWORD *)(v72 + 4) - a6->top;
            }
            if ( a1->iType == 1 )
            {
              if ( bAllowShareAccess(a1)
                && (v30 = KeGetCurrentThread(), W32GetThreadWin32Thread(v30))
                && (v31 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v31) + 156))
                && ((v32 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v32) + 52))
                 || (v33 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v33) + 56)))
                && (v34 = KeGetCurrentThread(),
                    (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v34) + 156) + 20) & 1) != 0) )
              {
                v35 = KeGetCurrentThread();
                W32GetThreadWin32Thread(v35);
              }
              else if ( a1->iType == 1 )
              {
                if ( bAllowShareAccess(a1) )
                {
                  v36 = KeGetCurrentThread();
                  if ( W32GetThreadWin32Thread(v36) )
                  {
                    v37 = KeGetCurrentThread();
                    if ( *(_DWORD *)(W32GetThreadWin32Thread(v37) + 156) )
                    {
                      v38 = KeGetCurrentThread();
                      if ( !*(_DWORD *)(W32GetThreadWin32Thread(v38) + 52) )
                      {
                        v39 = KeGetCurrentThread();
                        W32GetThreadWin32Thread(v39);
                      }
                    }
                  }
                }
              }
            }
            OffBitBlt(
              (int)a1,
              (int)v66,
              (int)v62,
              v73,
              (struct _CLIPOBJ *)a4,
              (int)a5,
              (int)&v81,
              (int)&v80,
              (int)&v74,
              v71,
              v70,
              a11);
          }
          if ( v28 )
            GreUnlockDisplayDevice(v28[7]);
          if ( v25 )
            GreUnlockDisplayDevice(v25[7]);
          v23 = a4;
          v16 = v67;
        }
      }
      while ( v76 );
      if ( v60 )
        *(struct _RECTL *)&v23->y = v84;
      v11 = 1;
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v78);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v79);
  }
  SEMOBJEXORSHARED::~SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v77);
  return v11;
}
