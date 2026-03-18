/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0107C04
 * Callers:
 *     EngpMovePointer @ 0x1C0107610 (EngpMovePointer.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010786C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C003D068 (GreUpdateSprite.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0097118 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C33AC (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00FE16C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0107E40 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C010CD60 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // r14
  int v6; // ebx
  int v7; // esi
  struct DwmState *v9; // rax
  __int64 v10; // rcx
  struct DwmState **v11; // rdx
  struct DwmState **v12; // rdx
  HSPRITE v13; // rdi
  struct DWMSPRITE *v14; // rbx
  unsigned __int64 v15; // r15
  HSPRITE v16; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  HSPRITE v20; // rsi
  struct DWMSPRITE *v21; // rbx
  HSPRITE v22; // r12
  struct DWMSPRITE *v23; // rsi
  struct DwmState **v24; // rdx
  struct DwmState **v25; // rdx
  HSPRITE v26; // rdi
  struct DWMSPRITE *v27; // rbx
  HSPRITE v28; // rax
  HDEV v29; // rcx
  void *v30; // [rsp+58h] [rbp-61h]
  void *v31; // [rsp+58h] [rbp-61h]
  __int64 v32; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v33; // [rsp+90h] [rbp-29h] BYREF
  struct DWMSPRITE *v34; // [rsp+98h] [rbp-21h] BYREF
  struct DWMSPRITE *v35; // [rsp+A0h] [rbp-19h] BYREF
  struct DWMSPRITE *v36; // [rsp+A8h] [rbp-11h] BYREF
  struct DWMSPRITE *v37; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v38[80]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v39; // [rsp+118h] [rbp+5Fh] BYREF
  int v40; // [rsp+120h] [rbp+67h]
  int v41; // [rsp+128h] [rbp+6Fh]
  struct _RECTL *v42; // [rsp+130h] [rbp+77h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  hdev = a1->hdev;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)g_pDwmState + 25) && *((_QWORD *)g_pDwmState + 17) )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( *((_QWORD *)g_pDwmState + 18) == *((_QWORD *)g_pDwmState + 17) )
      goto LABEL_4;
    v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v15 - *((_DWORD *)g_pDwmState + 41)) < *((_DWORD *)g_pDwmState + 42) )
      goto LABEL_4;
    v16 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
    v32 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v32, v16);
    NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
    v39 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v39, NeighborSprite);
    v18 = v32;
    v19 = v39;
    if ( !v32 )
      goto LABEL_33;
    if ( !v39 )
    {
LABEL_35:
      v6 = v41;
      if ( v18 )
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
LABEL_4:
      v9 = (struct DwmState *)(hdev + 882);
      v10 = *((_QWORD *)hdev + 441);
      if ( v7 == -1 )
      {
        if ( *(struct DwmState **)(v10 + 8) == v9 )
        {
          v24 = (struct DwmState **)*((_QWORD *)hdev + 442);
          if ( *v24 == v9 )
          {
            *v24 = (struct DwmState *)v10;
            *(_QWORD *)(v10 + 8) = v24;
            v25 = (struct DwmState **)*((_QWORD *)g_pDwmState + 14);
            if ( *v25 == (struct DwmState *)((char *)g_pDwmState + 104) )
            {
              *(_QWORD *)v9 = (char *)g_pDwmState + 104;
              *((_QWORD *)hdev + 442) = v25;
              *v25 = v9;
              *((_QWORD *)g_pDwmState + 14) = v9;
              if ( *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
              {
                v26 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
                if ( v26 )
                {
                  do
                  {
                    v36 = 0LL;
                    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v36, v26);
                    v27 = v36;
                    if ( v36 )
                      vSpDwmUpdateSpriteVisibility(v36, 0);
                    v28 = hspGetNeighborSprite(v26, 1, 0);
                    v26 = v28;
                    if ( v27 )
                      _InterlockedDecrement((volatile signed __int32 *)v27 + 3);
                  }
                  while ( v28 );
                }
              }
              goto LABEL_12;
            }
          }
        }
      }
      else if ( *(struct DwmState **)(v10 + 8) == v9 )
      {
        v11 = (struct DwmState **)*((_QWORD *)hdev + 442);
        if ( *v11 == v9 )
        {
          *v11 = (struct DwmState *)v10;
          *(_QWORD *)(v10 + 8) = v11;
          v12 = (struct DwmState **)*((_QWORD *)g_pDwmState + 16);
          if ( *v12 == (struct DwmState *)((char *)g_pDwmState + 120) )
          {
            *(_QWORD *)v9 = (char *)g_pDwmState + 120;
            *((_QWORD *)hdev + 442) = v12;
            *v12 = v9;
            *((_QWORD *)g_pDwmState + 16) = v9;
            v33.x = v7 + *((_DWORD *)hdev + 646) - *((_DWORD *)g_pDwmState + 38);
            v33.y = v6 + *((_DWORD *)hdev + 647) - *((_DWORD *)g_pDwmState + 39);
            v13 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
            DrvPixelSpaceToUniformSpacePoint(&v33, &v33.y);
            LODWORD(v30) = 1075838976;
            GreUpdateSprite(a1->hdev, 0LL, v13, 0LL, &v33, 0LL, 0LL, 0LL, 0, 0LL, v30, 0LL, 0LL, 1, 0);
            v37 = 0LL;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v37, v13);
            v14 = v37;
            if ( v37 )
            {
              if ( (a5 & 4) != 0 )
              {
                v29 = a1->hdev;
                LODWORD(v31) = 555745282;
                LODWORD(v42) = 0x1000000;
                GreUpdateSprite(
                  v29,
                  0LL,
                  v13,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  (struct _BLENDFUNCTION *)&v42,
                  v31,
                  0LL,
                  0LL,
                  1,
                  0);
              }
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v38, (struct DWMSPRITE *)((char *)v14 + 88));
              vSpDwmUpdateSpriteVisibility(v14, 1);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v38);
              DEC_SHARE_REF_CNT(v14);
            }
LABEL_12:
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            GreReleaseSemaphoreInternal(ghsemDwmState);
            return;
          }
        }
      }
      __fastfail(3u);
    }
    if ( *(_DWORD *)(v39 + 56) == *(_DWORD *)(v32 + 56) && *(_DWORD *)(v39 + 60) == *(_DWORD *)(v32 + 60) )
    {
      v20 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
      if ( v20 == *((HSPRITE *)g_pDwmState + 17) )
      {
LABEL_32:
        v7 = v40;
        *((_DWORD *)g_pDwmState + 41) = v15;
LABEL_33:
        if ( v19 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
          v18 = v32;
        }
        goto LABEL_35;
      }
      while ( 1 )
      {
        v34 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v34, v20);
        v21 = v34;
        if ( v34 )
        {
          if ( (*((_DWORD *)v34 + 41) & 1) != 0 )
            break;
        }
        v20 = hspGetNeighborSprite(v20, 1, 0);
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
        if ( v20 == *((HSPRITE *)g_pDwmState + 17) )
          goto LABEL_31;
      }
      vSpDwmUpdateSpriteVisibility(v34, 0);
      _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
    }
    else
    {
      v35 = 0LL;
      v22 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v35, v22);
      v23 = v35;
      if ( v35 )
        vSpDwmUpdateSpriteVisibility(v35, 0);
      *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v22, 1, 0);
      vSpDwmZorderSprite(v22, *((HSPRITE *)g_pDwmState + 17));
      *((_QWORD *)g_pDwmState + 17) = v22;
      if ( !v23 )
        goto LABEL_32;
      _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
    }
LABEL_31:
    v18 = v32;
    v19 = v39;
    goto LABEL_32;
  }
}
