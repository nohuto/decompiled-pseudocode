/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027F2C8
 * Callers:
 *     EngpMovePointer @ 0x1C0053A18 (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027F8F8 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C004F8F0 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C004FA84 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C004FC08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00503BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00A7C18 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7EE8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015744C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282ECC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0285F98 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // rax
  struct SPRITE *v15; // r8
  int v16; // edi
  __int64 j; // rsi
  __int64 v18; // rsi
  HDEV v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ecx
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v27; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v29[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v30[24]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v31[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v32; // [rsp+280h] [rbp+180h] BYREF
  __int64 v33; // [rsp+290h] [rbp+190h]
  struct _RECTL v34; // [rsp+298h] [rbp+198h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 22;
  v9 = *((_QWORD *)hdev + 150);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 151) != v9 )
    {
      v28 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 294)) >= *((_DWORD *)hdev + 295) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v29, (struct PDEVOBJ *)&hdev);
        v11 = *((_QWORD *)v8 + 140);
        v12 = *((_QWORD *)v8 + 139);
        v13 = v11;
        for ( i = *(_QWORD *)(v11 + 24); i != v12; i = *(_QWORD *)(i + 24) )
          v13 = i;
        if ( *(_DWORD *)(v13 + 80) == *(_DWORD *)(v12 + 80) && *(_DWORD *)(v13 + 84) == *(_DWORD *)(v12 + 84) )
        {
          while ( v11 != v12 )
          {
            if ( (*(_DWORD *)v11 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v11, 0LL, 0, 0);
              break;
            }
            v11 = *(_QWORD *)(v11 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 140), 0LL, 0, 0);
          v15 = (struct SPRITE *)*((_QWORD *)v8 + 139);
          *((_QWORD *)v8 + 140) = *(_QWORD *)(v11 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v11, v15);
          *((_QWORD *)v8 + 139) = v11;
        }
        *((_DWORD *)v8 + 272) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v29);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
    }
    v16 = a5;
    if ( !a5 )
      v16 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v16 )
      GreIncNonRBLockCount(ghsemSprite);
    v33 = 0LL;
    v32 = 0LL;
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v30, (struct PDEVOBJ *)&hdev);
      v27.x = 0x7FFFFFFF;
      v27.y = 0x7FFFFFFF;
      for ( j = *((_QWORD *)v8 + 140); j; j = *(_QWORD *)(j + 24) )
      {
        if ( !v16 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v8, (struct _RECTL *)(j + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(j + 248));
          *((_QWORD *)v8 + 167) = j;
        }
        if ( (_QWORD)v32 || v16 )
        {
          bSpUpdatePosition((struct SPRITE *)j, &v27, 0, 0);
          if ( v16 )
            continue;
        }
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(j + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v30);
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v31, (struct PDEVOBJ *)&hdev);
      v27.x = a2 - *((_DWORD *)v8 + 268);
      v27.y = a3 - *((_DWORD *)v8 + 269);
      v18 = *((_QWORD *)v8 + 139);
      if ( !v16 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v18 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v18 + 248));
        *((_QWORD *)v8 + 167) = v18;
      }
      bSpUpdatePosition((struct SPRITE *)v18, &v27, 0, 0);
      if ( !v16 )
      {
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v18 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
      v34 = *(struct _RECTL *)(v18 + 80);
      if ( !v16 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v32, (struct _SPRITESTATE *)v8, &v34);
      if ( !(_QWORD)v32 && !v16 || (vSpRedrawSprite((struct SPRITE *)v18), !v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v31);
    }
    if ( !v16 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    v19 = hdev;
    if ( (*((_DWORD *)hdev + 532) & 0x80u) != 0 )
    {
      v20 = *((_QWORD *)hdev + 319);
      v21 = 0LL;
      v22 = v20 + 24;
      v23 = -v20;
      v24 = v22 & -(__int64)(v23 != 0);
      if ( v24 )
      {
        v25 = *(_DWORD *)((v22 & -(__int64)(v23 != 0)) + 0x58);
        if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
        {
          v21 = v24 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v24 - 24 + 48));
          v19 = hdev;
        }
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)v19 + 319) + 24LL) & -(__int64)(*((_QWORD *)v19 + 319) != 0LL)),
        0LL,
        1u);
      if ( v21 )
        GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v32);
  }
}
