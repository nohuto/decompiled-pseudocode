/*
 * XREFs of ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D
 * Callers:
 *     _EngpMovePointer@20 @ 0x1CDDEA (_EngpMovePointer@20.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ @ 0xAED46 (-vUnlock@PIDLOCKSPRITEAREA@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F (-vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QAEXXZ @ 0x1DFBCD (-vLock@SINGLEREADERLOCK@@QAEXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

void __userpurge GdiMovePointer(
        ULONG a1@<edx>,
        LONG a2@<ecx>,
        struct _SURFOBJ *a3,
        int a4,
        int a5,
        struct _RECTL *a6,
        int a7)
{
  DHPDEV dhpdev; // esi
  int v8; // eax
  unsigned int hdev; // ecx
  int v10; // ebx
  int v11; // edi
  unsigned int v12; // edx
  int *v13; // edi
  int *v14; // edx
  int *v15; // ecx
  LONG cx; // ecx
  int v17; // ebx
  ULONG cjBits; // edi
  int i; // edi
  SPRITEDDIACCESS *v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // ecx
  HDEV v26; // [esp-4h] [ebp-1ACh]
  int v27; // [esp+0h] [ebp-1A8h]
  struct SPRITE *v28; // [esp+0h] [ebp-1A8h]
  int v29; // [esp+4h] [ebp-1A4h]
  struct SPRITE *v30; // [esp+4h] [ebp-1A4h]
  int v31; // [esp+10h] [ebp-198h] BYREF
  struct _SURFOBJ v32[2]; // [esp+14h] [ebp-194h] BYREF
  _BYTE v33[112]; // [esp+A0h] [ebp-108h] BYREF
  _BYTE v34[112]; // [esp+110h] [ebp-98h] BYREF
  _DWORD v35[5]; // [esp+180h] [ebp-28h] BYREF
  struct _RECTL v36; // [esp+194h] [ebp-14h] BYREF

  v32[0].cjBits = a1;
  v32[0].sizlBitmap.cx = a2;
  v31 = *(_DWORD *)(a2 + 12);
  dhpdev = (DHPDEV)(v31 + 64);
  v8 = *(_DWORD *)(v31 + 768);
  v32[0].dhpdev = (DHPDEV)(v31 + 64);
  if ( v8 )
  {
    if ( *(_DWORD *)(v31 + 772) != v8 )
    {
      v32[0].sizlBitmap.cy = _ghsemSprite;
      GreAcquireSemaphore(_ghsemSprite);
      hdev = MEMORY[0xFFDF0004];
      v32[0].hdev = (HDEV)MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v11 = MEMORY[0xFFDF0324];
        v12 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v11 = MEMORY[0xFFDF0324];
            v12 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          dhpdev = v32[0].dhpdev;
          hdev = (unsigned int)v32[0].hdev;
        }
        v10 = hdev * (v11 << 8) + ((hdev * (unsigned __int64)v12) >> 24);
      }
      else
      {
        v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      if ( (unsigned int)(v10 - *((_DWORD *)dhpdev + 170)) >= *((_DWORD *)dhpdev + 171) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)&v32[0].pvBits, (struct PDEVOBJ *)&v31);
        v13 = (int *)*((_DWORD *)dhpdev + 177);
        v14 = v13;
        v15 = (int *)*((_DWORD *)dhpdev + 176);
        while ( (int *)v14[4] != v15 )
          v14 = (int *)v14[4];
        if ( v14[11] == v15[11] && v14[12] == v15[12] )
        {
          while ( v13 != v15 )
          {
            if ( (*(_BYTE *)v13 & 0x20) != 0 )
            {
              bSpUpdatePosition(0, v13, 0, 0, v27, v29);
              break;
            }
            v13 = (int *)v13[4];
          }
        }
        else
        {
          bSpUpdatePosition(0, v13, 0, 0, v27, v29);
          cx = v32[0].sizlBitmap.cx;
          v26 = (HDEV)*((_DWORD *)dhpdev + 176);
          *((_DWORD *)dhpdev + 177) = v13[4];
          vSpZorderSprite((int)v13, *(_DWORD *)(cx + 12), v26, v28, v30);
          *((_DWORD *)dhpdev + 176) = v13;
        }
        *((_DWORD *)dhpdev + 170) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)&v32[0].pvBits);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v32[0].sizlBitmap.cy);
    }
    v17 = a5;
    if ( !a5 )
      v17 = GreIsSemaphoreOwnedByCurrentThread(_ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v31) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(_ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", _ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(_ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
    }
    if ( !v17 )
      GreIncNonRBLockCount(_ghsemSprite);
    memset(v35, 0, sizeof(v35));
    cjBits = v32[0].cjBits;
    if ( v32[0].cjBits == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&v31);
      v32[0].dhsurf = (DHSURF)0x7FFFFFFF;
      v32[0].hsurf = (HSURF)0x7FFFFFFF;
      for ( i = *((_DWORD *)dhpdev + 177); i; i = *(_DWORD *)(i + 16) )
      {
        if ( !v17 )
        {
          GreAcquireSemaphore(*((_DWORD *)dhpdev + 22));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_DWORD *)dhpdev + 22), 8);
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)dhpdev, (struct _RECTL *)(i + 44));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(i + 180));
          *((_DWORD *)dhpdev + 206) = i;
        }
        if ( v35[0] || v17 )
        {
          bSpUpdatePosition(v32, (int *)i, 0, 0, v27, v29);
          if ( v17 )
            continue;
        }
        *((_DWORD *)dhpdev + 206) = 0;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(i + 180));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
        EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)dhpdev + 22));
        GreReleaseSemaphoreInternal(*((_DWORD *)dhpdev + 22));
      }
      v20 = (SPRITEDDIACCESS *)v33;
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&v31);
      v32[0].dhsurf = (DHSURF)(cjBits - *((_DWORD *)dhpdev + 166));
      v32[0].hsurf = (HSURF)((char *)a3 - *((_DWORD *)dhpdev + 167));
      v21 = *((_DWORD *)dhpdev + 176);
      if ( !v17 )
      {
        GreAcquireSemaphore(*((_DWORD *)dhpdev + 22));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_DWORD *)dhpdev + 22), 8);
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)dhpdev, (struct _RECTL *)(v21 + 44));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v21 + 180));
        *((_DWORD *)dhpdev + 206) = v21;
      }
      bSpUpdatePosition(v32, (int *)v21, 0, 0, v27, v29);
      if ( !v17 )
      {
        *((_DWORD *)dhpdev + 206) = 0;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v21 + 180));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
        EtwTraceGreLockReleaseSemaphore(L"hsem", *((_DWORD *)dhpdev + 22));
        GreReleaseSemaphoreInternal(*((_DWORD *)dhpdev + 22));
      }
      v36 = *(struct _RECTL *)(v21 + 44);
      if ( !v17 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)dhpdev, &v36);
      if ( !v35[0] && !v17 || (vSpRedrawSprite((_DWORD *)v21), !v17) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
      v20 = (SPRITEDDIACCESS *)v34;
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v20);
    if ( !v17 )
      GreDecNonRBLockCount(_ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
    v22 = v31;
    if ( *(char *)(v31 + 1416) < 0 )
    {
      v23 = 0;
      v24 = *(_DWORD *)(v31 + 1820) != 0 ? *(_DWORD *)(v31 + 1820) + 16 : 0;
      if ( v24 )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(v31 + 1820) != 0 ? *(_DWORD *)(v31 + 1820) + 16 + 0x38 : 56);
        if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
        {
          v23 = v24 - 16;
          GreLockDisplayDevice(*(_DWORD *)((*(_DWORD *)(v31 + 1820) != 0 ? *(_DWORD *)(v31 + 1820) + 16 - 16 : -16)
                                         + 0x1C));
          v22 = v31;
        }
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v31,
        *(_DWORD *)(v22 + 1820) != 0 ? (struct _SURFOBJ *)(*(_DWORD *)(v22 + 1820) + 16) : 0,
        0,
        1u);
      if ( v23 )
        GreUnlockDisplayDevice(*(_DWORD *)(v23 + 28));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
  }
}
