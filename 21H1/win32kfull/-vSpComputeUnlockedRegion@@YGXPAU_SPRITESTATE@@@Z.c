/*
 * XREFs of ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E14C8 (-vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?sizl@PDEVOBJ@@QAE?AUtagSIZE@@XZ @ 0x1D37FE (-sizl@PDEVOBJ@@QAE-AUtagSIZE@@XZ.c)
 *     _DxDdEnumLockedSurfaceRect@12 @ 0x1D3850 (_DxDdEnumLockedSurfaceRect@12.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall vSpComputeUnlockedRegion(int this)
{
  REGION *v2; // ecx
  struct TRACKOBJ *v3; // esi
  int v4; // edi
  BOOL v5; // eax
  void (__thiscall *v6)(RGNOBJ *__hidden); // edi
  struct TRACKOBJ *v7; // eax
  struct _SPRITESTATE *v8; // esi
  _DWORD *v9; // edi
  REGION *v10; // edx
  struct _SPRITESTATE *v11; // [esp+0h] [ebp-98h]
  _BYTE v12[20]; // [esp+Ch] [ebp-8Ch] BYREF
  int v13; // [esp+20h] [ebp-78h]
  int v14; // [esp+24h] [ebp-74h]
  int v15; // [esp+28h] [ebp-70h]
  char v16; // [esp+2Ch] [ebp-6Ch]
  char v17; // [esp+2Dh] [ebp-6Bh]
  _BYTE v18[12]; // [esp+3Ch] [ebp-5Ch] BYREF
  int v19; // [esp+4Ch] [ebp-4Ch] BYREF
  _DWORD v20[2]; // [esp+50h] [ebp-48h] BYREF
  int v21; // [esp+58h] [ebp-40h]
  _DWORD v22[2]; // [esp+5Ch] [ebp-3Ch] BYREF
  struct _SPRITESTATE *v23; // [esp+64h] [ebp-34h]
  REGION *v24[2]; // [esp+68h] [ebp-30h] BYREF
  struct TRACKOBJ *v25; // [esp+70h] [ebp-28h] BYREF
  struct _RECTL v26; // [esp+74h] [ebp-24h] BYREF
  struct _RECTL v27; // [esp+84h] [ebp-14h] BYREF

  memset(&v27, 0, sizeof(v27));
  v23 = (struct _SPRITESTATE *)this;
  v2 = *(REGION **)(this + 644);
  v3 = *(struct TRACKOBJ **)v23;
  v25 = *(struct TRACKOBJ **)v23;
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *(_DWORD *)(this + 644) = 0;
  }
  if ( gpto || *(_DWORD *)(this + 648) )
  {
    v5 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v12, (struct PDEVOBJ *)&v25);
    v4 = *((_DWORD *)v3 + 468);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
    v5 = v4 != 0;
  }
  if ( !v5 )
  {
    v8 = v23;
    goto LABEL_42;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24, 0, 1);
  v6 = RGNOBJ::vDeleteRGNOBJ;
  if ( v24[0] )
  {
    v21 = 0;
    v27.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v25).cx;
    v27.bottom = *(_DWORD *)(PDEVOBJ::sizl((PDEVOBJ *)&v25).cx + 4);
    RGNOBJ::vSet((RGNOBJ *)v24, &v27);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
    if ( v20[0] && v22[0] )
    {
      memset(&v26, 0, sizeof(v26));
      GreLockDisplayDevice(v3);
      while ( DxDdEnumLockedSurfaceRect(&v26) )
      {
        RGNOBJ::vSet((RGNOBJ *)v20, &v26);
        RGNOBJ::bCopy((RGNOBJ *)v22, (struct RGNOBJ *)v24);
        if ( RGNOBJ::bMerge((RGNOBJ *)v24, (struct RGNOBJ *)v22, (struct RGNOBJ *)v20, 4u) )
          v21 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)v24);
      }
      GreUnlockDisplayDevice(v3);
      v19 = _ghsemWndobj;
      GreAcquireSemaphore(_ghsemWndobj);
      v7 = gpto;
      v8 = v23;
      while ( 1 )
      {
        v25 = v7;
        if ( !v7 )
          break;
        v9 = (_DWORD *)*((_DWORD *)v7 + 3);
        if ( v9 )
        {
          do
          {
            UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18, (struct EWNDOBJ *)v9, v8);
            if ( (v9[35] & 0x1000000) != 0 )
            {
              RGNOBJ::bCopy((RGNOBJ *)v22, (struct RGNOBJ *)v24);
              if ( RGNOBJ::bMerge((RGNOBJ *)v24, (struct RGNOBJ *)v22, (struct RGNOBJ *)(v9 + 12), 4u) )
                v21 = 1;
              else
                RGNOBJ::vSet((RGNOBJ *)v24);
            }
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v18);
            v9 = (_DWORD *)v9[32];
          }
          while ( v9 );
          v7 = v25;
        }
        v7 = (struct TRACKOBJ *)*((_DWORD *)v7 + 1);
      }
      if ( *((_DWORD *)v8 + 162) )
      {
        v25 = (struct TRACKOBJ *)*((_DWORD *)v8 + 162);
        RGNOBJ::bCopy((RGNOBJ *)v22, (struct RGNOBJ *)v24);
        if ( RGNOBJ::bMerge((RGNOBJ *)v24, (struct RGNOBJ *)v22, (struct RGNOBJ *)&v25, 8u) )
          v21 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)v24);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
      if ( v21 == 1 )
      {
        v10 = v24[0];
        *((_DWORD *)v10 + 5) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
        *((REGION **)v8 + 161) = v24[0];
LABEL_34:
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v22);
        v6 = RGNOBJ::vDeleteRGNOBJ;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v22);
        if ( v22[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v22);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v20);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
        if ( v20[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
        goto LABEL_39;
      }
    }
    else
    {
      v8 = v23;
    }
    REGION::vDeleteREGION(v24[0]);
    goto LABEL_34;
  }
  v8 = v23;
LABEL_39:
  if ( v24[1] == (REGION *)1 )
    v6((RGNOBJ *)v24);
LABEL_42:
  *((_DWORD *)v8 + 21) = 0;
  vSpComputeSpriteRanges(v11);
  ++giSpriteUniqueness;
}
