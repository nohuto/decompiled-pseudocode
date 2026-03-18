/*
 * XREFs of ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E
 * Callers:
 *     _EngSetPointerShape@40 @ 0xD00A2 (_EngSetPointerShape@40.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84 (-hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592 (-vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     ?vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z @ 0xD07F2 (-vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z.c)
 */

int __userpurge DwmSetPointerShape@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _XLATEOBJ *a6,
        int a7,
        struct _SURFOBJ *a8,
        HDEV a9,
        unsigned int a10,
        struct _RECTL *a11,
        unsigned int a12)
{
  int v12; // esi
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // edi
  struct DwmState *v16; // eax
  struct DwmState *v17; // ecx
  struct DwmState *v18; // ecx
  int v19; // esi
  struct _XLATEOBJ *v20; // edi
  int v21; // esi
  struct _SURFOBJ *v22; // ecx
  int v23; // ecx
  _DWORD *v25; // esi
  int v26; // ecx
  _DWORD *v27; // eax
  int v28; // esi
  unsigned int v29; // eax
  void *SpriteInternal; // edx
  int v31; // ebx
  HDEV v32; // esi
  int v33; // ebx
  int v34; // esi
  int v35; // edx
  struct DWMSPRITE *v36; // [esp+0h] [ebp-28h]
  struct _RECTL *v37; // [esp+0h] [ebp-28h]
  void *v38; // [esp+0h] [ebp-28h]
  const unsigned __int16 *v39; // [esp+4h] [ebp-24h]
  struct _BLENDFUNCTION *v40; // [esp+4h] [ebp-24h]
  int v41; // [esp+4h] [ebp-24h]
  int v42; // [esp+10h] [ebp-18h] BYREF
  int v43; // [esp+14h] [ebp-14h]
  unsigned int NeighborSprite; // [esp+18h] [ebp-10h]
  int v45; // [esp+1Ch] [ebp-Ch]
  _DWORD v46[2]; // [esp+20h] [ebp-8h] BYREF

  v46[1] = a1;
  v43 = a2;
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 2;
  v45 = 2;
  if ( *((_DWORD *)g_pDwmState + 14) )
  {
    if ( a1 || a3 )
    {
      v14 = a10;
      v15 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        NeighborSprite = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        NeighborSprite = 0;
      v42 = 0x1000000;
      GreAcquireSemaphore(_ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
      if ( *((_DWORD *)g_pDwmState + 23) < v15 )
      {
        v28 = v43;
        do
        {
          v29 = (a7 != -1 || a8 != (struct _SURFOBJ *)-1) && (a10 & 0x40) == 0;
          SpriteInternal = GreCreateSpriteInternal(
                             0,
                             *(struct PDEVOBJ **)(v28 + 12),
                             a9,
                             0,
                             (struct tagRECT *)0x9900,
                             (struct tagMINIWINDOWINFO *)1,
                             v29,
                             0,
                             0,
                             0,
                             0,
                             (int)v36,
                             v39);
          if ( !SpriteInternal )
            break;
          if ( !*((_DWORD *)g_pDwmState + 19) )
            *((_DWORD *)g_pDwmState + 19) = SpriteInternal;
          *((_DWORD *)g_pDwmState + 20) = SpriteInternal;
          ++*((_DWORD *)g_pDwmState + 23);
        }
        while ( *((_DWORD *)g_pDwmState + 23) < v15 );
      }
      v16 = g_pDwmState;
      v17 = g_pDwmState;
      if ( *((_DWORD *)g_pDwmState + 23) > v15 )
      {
        v31 = v43;
        do
        {
          v32 = (HDEV)*((_DWORD *)v17 + 20);
          *((_DWORD *)g_pDwmState + 20) = hspGetNeighborSprite(1, (int)v32, 0, (bool)v36, (bool)v39);
          GreDeleteSpriteInternal(0, *(struct PDEVOBJ **)(v31 + 12), v32, (HWND)1, v38, v41);
          --*((_DWORD *)g_pDwmState + 23);
          v16 = g_pDwmState;
          v17 = g_pDwmState;
        }
        while ( *((_DWORD *)g_pDwmState + 23) > v15 );
        v14 = a10;
      }
      *(_DWORD *)(*(_DWORD *)v16 + 100) = NeighborSprite;
      v18 = g_pDwmState;
      v19 = *((_DWORD *)g_pDwmState + 19);
      if ( v19 )
      {
        v20 = (v14 & 0x40) != 0 ? (struct _XLATEOBJ *)&v42 : 0;
        if ( *((_DWORD *)g_pDwmState + 20) != v19 )
        {
          v33 = *((_DWORD *)g_pDwmState + 20);
          do
          {
            v34 = 0;
            NeighborSprite = hspGetNeighborSprite(1, v33, 0, (bool)v36, (bool)v39);
            if ( v33 )
            {
              LOBYTE(v35) = 15;
              v34 = HmgShareLockCheck(v33, v35);
              if ( v34 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v46, (struct _EX_PUSH_LOCK *)(v34 + 60));
                vSpDwmUpdateSpriteVisibility(v36, (bool)v39);
                if ( v46[0] )
                {
                  ExReleasePushLockExclusiveEx(v46[0], 0);
                  KeLeaveCriticalRegion();
                }
              }
            }
            v33 = NeighborSprite;
            if ( v34 )
              DEC_SHARE_REF_CNT(v34);
            v18 = g_pDwmState;
          }
          while ( NeighborSprite != *((_DWORD *)g_pDwmState + 19) );
          v14 = a10;
        }
        v21 = *(_DWORD *)(*(_DWORD *)v18 + 80);
        if ( v21 )
        {
          while ( 1 )
          {
            v46[0] = hspGetNeighborSprite(1, v21, 0, (bool)v36, (bool)v39);
            if ( !bSpDwmUpdateCursor((HSPRITE)a3, v22, (struct _SURFOBJ *)a9, v20, v37, v40) )
              break;
            v21 = v46[0];
            if ( !v46[0] )
              goto LABEL_13;
          }
          v45 = 0;
        }
LABEL_13:
        *((_DWORD *)g_pDwmState + 21) = (char *)a5 - *(_DWORD *)a9;
        *((_DWORD *)g_pDwmState + 22) = (char *)a6 - *((_DWORD *)a9 + 1);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
      GreReleaseSemaphoreInternal(_ghsemDwmState);
      DwmMovePointer(a8, v23, (v14 & 0x60) != 0 ? 4 : 0, (struct _RECTL *)v36, (unsigned int)v39);
      return v45;
    }
    else
    {
      GreAcquireSemaphore(_ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
      v25 = (_DWORD *)(v12 + 2320);
      v26 = *v25;
      if ( *(_DWORD **)(*v25 + 4) != v25 || (v27 = (_DWORD *)v25[1], (_DWORD *)*v27 != v25) )
        __fastfail(3u);
      *v27 = v26;
      *(_DWORD *)(v26 + 4) = v27;
      v25[1] = v25;
      *v25 = v25;
      if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 60)
        && *((struct DwmState **)g_pDwmState + 17) == (struct DwmState *)((char *)g_pDwmState + 68) )
      {
        vSpDwmDestroyCursorSprites((HDEV)v36);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
      GreReleaseSemaphoreInternal(_ghsemDwmState);
    }
  }
  return v13;
}
