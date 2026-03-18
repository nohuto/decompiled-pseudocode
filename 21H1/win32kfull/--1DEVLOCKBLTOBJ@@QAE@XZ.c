/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8
 * Callers:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A96A (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x975C2 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

void __thiscall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  int v2; // eax
  char *v3; // edi
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  DC **v9; // edi
  int v10; // ecx
  int v11; // eax
  DC *v12; // eax
  DC *v13; // ecx
  int v14; // edx
  int v15; // ebx
  PKTHREAD CurrentThread; // edi
  int *ThreadWin32Thread; // eax
  int v18; // eax
  int v19; // eax
  char *v20; // edi
  int v21; // eax
  int *v22; // ecx
  int v23; // edx
  int v24; // ebx
  int v25; // eax
  int *v26; // ecx
  int v27; // edx
  int v28; // edi
  struct XDCOBJ *v29; // [esp+0h] [ebp-18h]
  HSURF *v30; // [esp+0h] [ebp-18h]
  const unsigned int *v31; // [esp+4h] [ebp-14h]
  const unsigned int *v32; // [esp+4h] [ebp-14h]
  signed __int32 v33; // [esp+14h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 10);
  if ( (v2 & 0x1000) != 0 )
  {
    if ( (v2 & 0x8000) != 0 )
    {
      v3 = (char *)this + 48;
      if ( *((_DWORD *)this + 12) && *((_BYTE *)this + 61) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      v33 = 0;
      _InterlockedOr(&v33, 0);
      if ( *((_DWORD *)this + 16) && *((_BYTE *)this + 77) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_DWORD *)this + 16) && *((_BYTE *)this + 77) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      v33 = 0;
      _InterlockedOr(&v33, 0);
      v3 = (char *)this + 48;
      if ( *((_DWORD *)this + 12) && *((_BYTE *)this + 61) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    }
    v4 = *(_DWORD **)v3;
    if ( *(_DWORD *)v3
      && v3[13]
      && (*((_DWORD *)this + 10) & 0x1000) != 0
      && (v4[6] & 0x4000) != 0
      && v4[122]
      && v4[124] )
    {
      GreUpdateSpriteDevLockEnd(v29, (int)v31);
    }
  }
  v5 = (int *)((char *)this + 20);
  v6 = *((_DWORD *)this + 5);
  if ( v6 )
  {
    v7 = (_DWORD *)**((_DWORD **)this + 9);
    if ( v7 )
    {
      hbmSelectBitmap(*v7, *((_DWORD *)this + 8), 1, 0);
      v6 = *v5;
    }
    if ( v6 )
    {
      DEC_SHARE_REF_CNT(v6);
      v6 = *v5;
    }
    bDeleteSurface(*(_DWORD *)(v6 + 20));
    *v5 = 0;
    *((_DWORD *)this + 9) = 0;
  }
  v8 = *((_DWORD *)this + 10);
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (v8 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      v33 = 0;
      _InterlockedOr(&v33, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 10) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      v33 = 0;
      _InterlockedOr(&v33, 0);
      v9 = (DC **)((char *)this + 48);
      v10 = *((_DWORD *)this + 12);
      if ( v10 && *((_BYTE *)this + 61) )
      {
        v11 = *(_DWORD *)(v10 + 36);
        if ( (*((_BYTE *)this + 40) & 0x10) != 0 )
        {
          *(_DWORD *)(v10 + 24) &= ~0x4000u;
          DC::pSurface(*v9, *(struct SURFACE **)(v11 + 1820));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 48));
        v12 = *v9;
        if ( *v9 )
        {
          if ( *((_BYTE *)this + 60) )
          {
            *((_DWORD *)v12 + 7) &= ~2u;
            v12 = *v9;
            *((_BYTE *)this + 60) = 0;
          }
          if ( v12 )
          {
            v13 = v12;
            if ( *((_DWORD *)this + 13) && (*((_BYTE *)v12 + 32) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 48));
              *((_DWORD *)*v9 + 8) &= ~2u;
              v13 = *v9;
              *((_DWORD *)this + 13) = 0;
            }
            v14 = *((_DWORD *)this + 14);
            v33 = 0;
            v15 = *(_DWORD *)v13;
            HmgDecrementExclusiveReferenceCountEx(v13, v14, &v33);
            if ( v33 )
              bDeleteDCInternalEx(v15, 0);
          }
        }
        *v9 = 0;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 10) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v18 = *ThreadWin32Thread;
        if ( v18 )
        {
          *(_DWORD *)(v18 + 176) = 0;
          *(_DWORD *)(v18 + 172) = 0;
        }
      }
    }
  }
  else if ( (v8 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 10) &= ~0x800000u;
  }
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_DWORD *)this);
    GreReleaseSemaphoreInternal(*(_DWORD *)this);
  }
  if ( *((_DWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_DWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 1));
  }
  v19 = *((_DWORD *)this + 10);
  if ( (v19 & 8) != 0 )
    *((_DWORD *)this + 10) = v19 & 0xFFFFFFF7;
  if ( *((_DWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_DWORD *)this + 2));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 2));
  }
  UntrapAppContainerRenderingWorker((HDC *)this + 21, (HSURF *)this + 11, (HSURF *)v29, v31);
  UntrapAppContainerRenderingWorker((HDC *)this + 24, 0, v30, v32);
  v20 = (char *)this + 64;
  v21 = *((_DWORD *)this + 16);
  if ( v21 )
  {
    if ( *((_BYTE *)this + 76) )
    {
      *(_DWORD *)(v21 + 28) &= ~2u;
      v21 = *(_DWORD *)v20;
      *((_BYTE *)this + 76) = 0;
    }
    if ( v21 )
    {
      v22 = (int *)v21;
      if ( *((_DWORD *)this + 17) && (*(_BYTE *)(v21 + 32) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 64));
        *(_DWORD *)(*(_DWORD *)v20 + 32) &= ~2u;
        v22 = *(int **)v20;
        *((_DWORD *)this + 17) = 0;
      }
      v23 = *((_DWORD *)this + 18);
      v33 = 0;
      v24 = *v22;
      HmgDecrementExclusiveReferenceCountEx(v22, v23, &v33);
      if ( v33 )
        bDeleteDCInternalEx(v24, 0);
    }
    *(_DWORD *)v20 = 0;
  }
  v25 = *((_DWORD *)this + 12);
  if ( v25 )
  {
    if ( *((_BYTE *)this + 60) )
    {
      *(_DWORD *)(v25 + 28) &= ~2u;
      v25 = *((_DWORD *)this + 12);
      *((_BYTE *)this + 60) = 0;
    }
    if ( v25 )
    {
      v26 = (int *)v25;
      if ( *((_DWORD *)this + 13) && (*(_BYTE *)(v25 + 32) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 48));
        *(_DWORD *)(*((_DWORD *)this + 12) + 32) &= ~2u;
        v26 = (int *)*((_DWORD *)this + 12);
        *((_DWORD *)this + 13) = 0;
      }
      v27 = *((_DWORD *)this + 14);
      v33 = 0;
      v28 = *v26;
      HmgDecrementExclusiveReferenceCountEx(v26, v27, &v33);
      if ( v33 )
        bDeleteDCInternalEx(v28, 0);
    }
    *((_DWORD *)this + 12) = 0;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 20));
}
