/*
 * XREFs of ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62
 * Callers:
 *     ?SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x65C80 (-SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z @ 0x1E262E (-vSpSmallUnderlayCopy@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@12JJPAU_RECTL@@3@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3184 (-vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge INVOKEOFFCOPYBITS@<eax>(
        SURFOBJ *a1@<edx>,
        int *a2@<ecx>,
        struct _POINTL *a3,
        struct _SURFOBJ *a4,
        struct _POINTL *a5,
        XLATEOBJ *a6,
        struct _CLIPOBJ *a7,
        struct _XLATEOBJ *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  bool v10; // zf
  PKTHREAD (__stdcall *v11)(); // esi
  PKTHREAD v12; // eax
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  PKTHREAD v16; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  PKTHREAD v19; // eax
  PKTHREAD v20; // eax
  struct _SURFOBJ *v21; // ebx
  PKTHREAD v22; // eax
  PKTHREAD v23; // eax
  PKTHREAD v24; // eax
  PKTHREAD v25; // eax
  PKTHREAD v26; // eax
  PKTHREAD v27; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  struct _POINTL *v33; // ecx
  LONG y; // eax
  struct _CLIPOBJ *v35; // ecx
  int v36; // edi
  int v37; // ebx
  int v38; // esi
  struct _SURFOBJ *v40; // [esp+0h] [ebp-48h]
  LONG v41; // [esp+10h] [ebp-38h]
  ULONG v42; // [esp+1Ch] [ebp-2Ch] BYREF
  int *v43; // [esp+20h] [ebp-28h]
  struct _POINTL *v44; // [esp+24h] [ebp-24h]
  struct _CLIPOBJ *v45; // [esp+28h] [ebp-20h]
  struct _SURFOBJ *v46; // [esp+2Ch] [ebp-1Ch]
  SURFOBJ *v47; // [esp+30h] [ebp-18h]
  _DWORD v48[4]; // [esp+34h] [ebp-14h] BYREF

  v44 = a3;
  v43 = a2;
  v10 = ((int)a1[1].hsurf & 0x400) == 0;
  v47 = a1;
  v46 = a4;
  v45 = (struct _CLIPOBJ *)a5;
  if ( !v10 || !a4->hdev )
  {
    v11 = KeGetCurrentThread;
    if ( a1->iType != 1
      || !bAllowShareAccess(v40)
      || (v22 = KeGetCurrentThread(), !W32GetThreadWin32Thread(v22))
      || (v23 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v23) + 156))
      || (v24 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v24) + 52))
      && (v25 = KeGetCurrentThread(), !*(_DWORD *)(W32GetThreadWin32Thread(v25) + 56))
      || (v26 = KeGetCurrentThread(), (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v26) + 156) + 20) & 0x400) == 0) )
    {
      if ( v47->iType == 1 )
      {
        if ( bAllowShareAccess(v40) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(CurrentThread) )
          {
            v30 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v30) + 156) )
            {
              v31 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v31) + 52) )
                goto LABEL_34;
              v32 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v32) + 56) )
                goto LABEL_34;
            }
          }
        }
      }
      v21 = v47;
      goto LABEL_32;
    }
LABEL_24:
    v27 = v11();
    v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_DWORD *)(W32GetThreadWin32Thread(v27) + 156)
                                                                                               + 52);
    goto LABEL_35;
  }
  v11 = KeGetCurrentThread;
  if ( a4->iType == 1 )
  {
    if ( bAllowShareAccess(v40) )
    {
      v12 = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(v12) )
      {
        v13 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v13) + 156) )
        {
          v14 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v14) + 52)
            || (v15 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v15) + 56)) )
          {
            v16 = KeGetCurrentThread();
            if ( (*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v16) + 156) + 20) & 0x400) != 0 )
              goto LABEL_24;
          }
        }
      }
    }
  }
  if ( v46->iType == 1 )
  {
    if ( bAllowShareAccess(v40) )
    {
      v17 = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread(v17) )
      {
        v18 = KeGetCurrentThread();
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v18) + 156) )
        {
          v19 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v19) + 52) )
            goto LABEL_34;
          v20 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v20) + 56) )
            goto LABEL_34;
        }
      }
    }
  }
  v21 = v46;
LABEL_32:
  if ( ((int)v21[1].hsurf & 0x400) != 0 )
  {
    v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_DWORD *)v21->hdev + 209);
    goto LABEL_35;
  }
LABEL_34:
  v28 = EngCopyBits;
LABEL_35:
  v33 = v44;
  v44 = (struct _POINTL *)v44->x;
  y = v33->y;
  v35 = v45;
  v41 = y;
  v36 = *v43;
  v37 = v43[1];
  if ( v45 )
  {
    CLIPOBJ_vOffset(v45, v36, v43[1]);
    v35 = v45;
  }
  v48[0] = v36 + a7->iUniq;
  v48[2] = v36 + a7->rclBounds.top;
  v48[1] = v37 + a7->rclBounds.left;
  v48[3] = v37 + a7->rclBounds.right;
  v42 = (ULONG)v44 + a8->iUniq;
  v43 = (int *)(v41 + a8->flXlate);
  if ( v28 )
    v38 = v28(v47, v46, v35, a6, (RECTL *)v48, (POINTL *)&v42);
  else
    v38 = 0;
  if ( v45 )
    CLIPOBJ_vOffset(v45, -v36, -v37);
  return v38;
}
