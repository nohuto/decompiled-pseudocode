/*
 * XREFs of ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00857AC
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00856F8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00C31E8 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02806CC (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C028263C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02828E0 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0285850 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00858E0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02760DC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DxDdEnumLockedSurfaceRect @ 0x1C0276138 (DxDdEnumLockedSurfaceRect.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027D444 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027D560 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpComputeUnlockedRegion(struct _SPRITESTATE *a1)
{
  __int64 v1; // rbx
  REGION *v3; // rcx
  int v4; // edi
  BOOL v5; // eax
  int v6; // r15d
  __int64 i; // rdx
  __int64 locked; // rdi
  TRACKOBJ *j; // rdi
  __int64 k; // rbx
  REGION *v11; // rdx
  REGION *v12; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+28h] [rbp-D8h]
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int16 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  _BYTE v27[16]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v28; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v29; // [rsp+F0h] [rbp-10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = (REGION *)*((_QWORD *)a1 + 129);
  v15 = v1;
  v28 = 0LL;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_QWORD *)a1 + 129) = 0LL;
  }
  if ( gpto || *((_QWORD *)a1 + 130) )
  {
    v5 = 1;
  }
  else
  {
    v23 = 0LL;
    v21 = 1;
    v19 = 0LL;
    v24 = 256;
    v26 = 0LL;
    v25 = 0LL;
    v22 = 0LL;
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(v1 + 48);
      v20 = v1;
      GreAcquireSemaphore(v19);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
    }
    v4 = *(_DWORD *)(v1 + 2640);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
    v5 = v4 != 0;
  }
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0, 1);
    if ( v12 )
    {
      v6 = 0;
      *(_QWORD *)&v28.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v15);
      RGNOBJ::vSet((RGNOBJ *)&v12, &v28);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
      if ( !v16[0] || !v14[0] )
        goto LABEL_36;
      v29 = 0LL;
      GreLockDisplayDevice(v1);
      for ( i = 0LL; ; i = locked )
      {
        locked = DxDdEnumLockedSurfaceRect(v1, i, &v29);
        if ( !locked )
          break;
        RGNOBJ::vSet((RGNOBJ *)v16, &v29);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)v16, 4u) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      GreUnlockDisplayDevice(v1);
      v18 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      for ( j = gpto; j; j = (TRACKOBJ *)*((_QWORD *)j + 1) )
      {
        for ( k = *((_QWORD *)j + 3); k; k = *(_QWORD *)(k + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v27, (struct EWNDOBJ *)k, a1);
          if ( (*(_DWORD *)(k + 184) & 0x1000000) != 0 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
            if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)(k + 56), 4u) )
              v6 = 1;
            else
              RGNOBJ::vSet((RGNOBJ *)&v12);
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v27);
        }
      }
      if ( *((_QWORD *)a1 + 130) )
      {
        v17 = *((_QWORD *)a1 + 130);
        RGNOBJ::bCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)&v17, 8u) )
          v6 = 1;
        else
          RGNOBJ::vSet((RGNOBJ *)&v12);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      if ( v6 == 1 )
      {
        v11 = v12;
        *((_DWORD *)v11 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        *((_QWORD *)a1 + 129) = v12;
      }
      else
      {
LABEL_36:
        REGION::vDeleteREGION(v12);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    }
    if ( v13 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  }
  *((_DWORD *)a1 + 29) = 0;
  vSpComputeSpriteRanges(a1);
  ++giSpriteUniqueness;
}
