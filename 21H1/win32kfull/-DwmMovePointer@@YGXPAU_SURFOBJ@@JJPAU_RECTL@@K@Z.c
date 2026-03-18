/*
 * XREFs of ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2
 * Callers:
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     _EngpMovePointer@20 @ 0x1CDDEA (_EngpMovePointer@20.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDwmZorderSprite@@YGXPAUHSPRITE__@@0@Z @ 0x24B82 (-vSpDwmZorderSprite@@YGXPAUHSPRITE__@@0@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84 (-hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z @ 0xD0592 (-vSpDwmUpdateSpriteVisibility@@YGXPAVDWMSPRITE@@_N@Z.c)
 */

void __userpurge DwmMovePointer(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        int a4,
        char a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  int v7; // ebx
  _DWORD *v8; // esi
  struct DwmState *v9; // eax
  int v10; // ecx
  struct DwmState **v11; // edx
  struct DwmState **v12; // edx
  HDEV v13; // edi
  HDEV v14; // esi
  int v15; // edx
  int v16; // esi
  LONG y; // ebx
  LONG v18; // ecx
  int v19; // edi
  unsigned int v20; // edx
  struct DwmState *v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // ebx
  int v28; // esi
  int v29; // eax
  int v30; // ebx
  struct DwmState **v31; // edx
  struct DwmState **v32; // edx
  int NeighborSprite; // edi
  int v34; // esi
  HDEV v35; // ebx
  struct DWMSPRITE *v36; // [esp+0h] [ebp-B0h]
  int v37; // [esp+4h] [ebp-ACh]
  int v38; // [esp+Ch] [ebp-A4h]
  _DWORD *v39; // [esp+10h] [ebp-A0h]
  struct tagPOINT v40; // [esp+14h] [ebp-9Ch] BYREF
  int v41; // [esp+1Ch] [ebp-94h]
  int v42; // [esp+20h] [ebp-90h]
  int v43; // [esp+24h] [ebp-8Ch] BYREF
  char *v44; // [esp+28h] [ebp-88h] BYREF
  int v45; // [esp+2Ch] [ebp-84h] BYREF
  _DWORD Parameter[16]; // [esp+30h] [ebp-80h] BYREF
  _DWORD v47[16]; // [esp+70h] [ebp-40h] BYREF

  v7 = a2;
  v42 = a1;
  v8 = *(_DWORD **)(a2 + 12);
  v41 = a2;
  v39 = v8;
  if ( *((_DWORD *)g_pDwmState + 14) && *((_DWORD *)g_pDwmState + 19) )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    if ( *((_DWORD *)g_pDwmState + 20) == *((_DWORD *)g_pDwmState + 19) )
      goto LABEL_4;
    y = MEMORY[0xFFDF0004];
    v40.y = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v19 = MEMORY[0xFFDF0324];
      v20 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v19 = MEMORY[0xFFDF0324];
          v20 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        y = v40.y;
      }
      v18 = y * (v19 << 8) + (((unsigned int)y * (unsigned __int64)v20) >> 24);
    }
    else
    {
      v18 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v40.y = v18;
    v21 = g_pDwmState;
    if ( (unsigned int)(v18 - *((_DWORD *)g_pDwmState + 24)) < *((_DWORD *)g_pDwmState + 25) )
    {
LABEL_55:
      v7 = v41;
LABEL_4:
      v9 = (struct DwmState *)(v8 + 580);
      v10 = v8[580];
      if ( v42 == -1 )
      {
        if ( *(struct DwmState **)(v10 + 4) == v9 )
        {
          v31 = (struct DwmState **)v8[581];
          if ( *v31 == v9 )
          {
            *v31 = (struct DwmState *)v10;
            *(_DWORD *)(v10 + 4) = v31;
            v32 = (struct DwmState **)*((_DWORD *)g_pDwmState + 16);
            if ( *v32 == (struct DwmState *)((char *)g_pDwmState + 60) )
            {
              *(_DWORD *)v9 = (char *)g_pDwmState + 60;
              v8[581] = v32;
              *v32 = v9;
              *((_DWORD *)g_pDwmState + 16) = v9;
              if ( *((struct DwmState **)g_pDwmState + 17) == (struct DwmState *)((char *)g_pDwmState + 68) )
              {
                NeighborSprite = *((_DWORD *)g_pDwmState + 20);
                while ( NeighborSprite )
                {
                  LOBYTE(v32) = 15;
                  v34 = HmgLock(NeighborSprite, v32);
                  if ( v34 )
                    vSpDwmUpdateSpriteVisibility(v36, v37);
                  NeighborSprite = hspGetNeighborSprite(1, NeighborSprite, 0, (bool)v36, v37);
                  if ( v34 )
                    _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
                }
              }
              goto LABEL_17;
            }
          }
        }
      }
      else if ( *(struct DwmState **)(v10 + 4) == v9 )
      {
        v11 = (struct DwmState **)v8[581];
        if ( *v11 == v9 )
        {
          *v11 = (struct DwmState *)v10;
          *(_DWORD *)(v10 + 4) = v11;
          v12 = (struct DwmState **)*((_DWORD *)g_pDwmState + 18);
          if ( *v12 == (struct DwmState *)((char *)g_pDwmState + 68) )
          {
            *(_DWORD *)v9 = (char *)g_pDwmState + 68;
            v8[581] = v12;
            *v12 = v9;
            *((_DWORD *)g_pDwmState + 18) = v9;
            v43 = v42 + v8[459] - *((_DWORD *)g_pDwmState + 21);
            v44 = (char *)a3 + v8[460] - *((_DWORD *)g_pDwmState + 22);
            v13 = (HDEV)*((_DWORD *)g_pDwmState + 19);
            DrvPixelSpaceToUniformSpacePoint(&v43, &v44);
            v14 = *(HDEV *)(v7 + 12);
            if ( GreStackExpansionRequired(0x2000) )
            {
              Parameter[4] = &v43;
              Parameter[0] = v14;
              Parameter[13] = 1;
              Parameter[1] = 0;
              Parameter[2] = v13;
              Parameter[3] = 0;
              memset(&Parameter[5], 0, 28);
              Parameter[12] = 1075838976;
              Parameter[14] = 0;
              Parameter[15] = 0;
              KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000u, 1u, 0);
            }
            else
            {
              GreUpdateSpriteInternal(
                0,
                v14,
                v13,
                0,
                &v43,
                0,
                0,
                0,
                0,
                0,
                0x40200000u,
                0,
                0,
                (struct tagRECT *)1,
                0,
                (int)v36,
                v37);
            }
            v16 = 0;
            if ( v13 )
            {
              LOBYTE(v15) = 15;
              v16 = HmgShareLockCheck(v13, v15);
              if ( !v16 )
              {
LABEL_17:
                EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
                GreReleaseSemaphoreInternal(_ghsemDwmState);
                return;
              }
              if ( (a5 & 4) != 0 )
              {
                v35 = *(HDEV *)(v7 + 12);
                v40.x = 0x1000000;
                if ( GreStackExpansionRequired(0x2000) )
                {
                  v47[8] = &v40;
                  v47[0] = v35;
                  v47[13] = 1;
                  v47[1] = 0;
                  v47[2] = v13;
                  memset(&v47[3], 0, 20);
                  memset(&v47[9], 0, 12);
                  v47[12] = 555745282;
                  v47[14] = 0;
                  v47[15] = 0;
                  KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, v47, 0x2000u, 1u, 0);
                }
                else
                {
                  GreUpdateSpriteInternal(
                    0,
                    v35,
                    v13,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    &v40,
                    0x21200002u,
                    0,
                    0,
                    (struct tagRECT *)1,
                    0,
                    (int)v36,
                    v37);
                }
              }
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v45, (struct _EX_PUSH_LOCK *)(v16 + 60));
              vSpDwmUpdateSpriteVisibility(v36, v37);
              if ( v45 )
              {
                ExReleasePushLockExclusiveEx(v45, 0);
                KeLeaveCriticalRegion();
              }
            }
            if ( v16 )
              DEC_SHARE_REF_CNT(v16);
            goto LABEL_17;
          }
        }
      }
      __fastfail(3u);
    }
    v22 = *((_DWORD *)g_pDwmState + 19);
    v23 = 0;
    if ( v22 )
    {
      LOBYTE(v21) = 15;
      v23 = HmgLock(v22, v21);
    }
    v25 = hspGetNeighborSprite(0, *((_DWORD *)g_pDwmState + 19), 0, (bool)v36, v37);
    v26 = 0;
    v38 = 0;
    if ( v25 )
    {
      LOBYTE(v24) = 15;
      v26 = HmgLock(v25, v24);
      v38 = v26;
    }
    if ( !v23 )
      goto LABEL_51;
    if ( !v26 )
    {
LABEL_53:
      if ( v23 )
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
      goto LABEL_55;
    }
    if ( *(_DWORD *)(v26 + 32) == *(_DWORD *)(v23 + 32) && *(_DWORD *)(v26 + 36) == *(_DWORD *)(v23 + 36) )
    {
      v27 = *((_DWORD *)g_pDwmState + 20);
      if ( v27 == *((_DWORD *)g_pDwmState + 19) )
      {
LABEL_50:
        *((_DWORD *)g_pDwmState + 24) = v40.y;
LABEL_51:
        if ( v26 )
          _InterlockedDecrement((volatile signed __int32 *)(v26 + 8));
        goto LABEL_53;
      }
      while ( 1 )
      {
        v28 = 0;
        if ( v27 )
        {
          LOBYTE(v24) = 15;
          v29 = HmgLock(v27, v24);
          v28 = v29;
          if ( v29 )
          {
            if ( (*(_BYTE *)(v29 + 132) & 1) != 0 )
              break;
          }
        }
        v27 = hspGetNeighborSprite(1, v27, 0, (bool)v36, v37);
        if ( v28 )
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 8));
        if ( v27 == *((_DWORD *)g_pDwmState + 19) )
          goto LABEL_49;
      }
      vSpDwmUpdateSpriteVisibility(v36, v37);
    }
    else
    {
      v28 = 0;
      v30 = *((_DWORD *)g_pDwmState + 20);
      if ( v30 )
      {
        LOBYTE(v24) = 15;
        v28 = HmgLock(*((_DWORD *)g_pDwmState + 20), v24);
        if ( v28 )
          vSpDwmUpdateSpriteVisibility(v36, v37);
      }
      *((_DWORD *)g_pDwmState + 20) = hspGetNeighborSprite(1, v30, 0, (bool)v36, v37);
      vSpDwmZorderSprite(v30, *((_DWORD *)g_pDwmState + 19));
      *((_DWORD *)g_pDwmState + 19) = v30;
      if ( !v28 )
        goto LABEL_49;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v28 + 8));
LABEL_49:
    v8 = v39;
    v26 = v38;
    goto LABEL_50;
  }
}
