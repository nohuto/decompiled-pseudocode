/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010786C
 * Callers:
 *     EngSetPointerShape @ 0x1C0107700 (EngSetPointerShape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C0EEC (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C33AC (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00C6A5C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0107C04 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0107E40 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0107E74 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C01080C8 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C010CD60 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  HDEV hdev; // rbx
  unsigned int v12; // r14d
  char v13; // si
  unsigned int v14; // edi
  unsigned int v15; // ebp
  struct _RECTL *v16; // r12
  struct DwmState *v17; // rcx
  HSPRITE v18; // rdx
  HSPRITE v19; // rdi
  HSPRITE v20; // rbx
  struct _SURFOBJ *v21; // rbp
  HSPRITE v22; // rdi
  struct _XLATEOBJ *v23; // r9
  struct _RECTL *v24; // r9
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  struct SPRITE *SpriteInternal; // rax
  HSPRITE v31; // rbx
  HSPRITE NeighborSprite; // rax
  HSPRITE v33; // rbp
  struct DWMSPRITE *v34; // rbx
  _BYTE v35[88]; // [rsp+60h] [rbp-58h] BYREF
  struct DWMSPRITE *v36; // [rsp+C0h] [rbp+8h] BYREF
  struct _SURFOBJ *v37; // [rsp+C8h] [rbp+10h]
  struct _SURFOBJ *v38; // [rsp+D0h] [rbp+18h]
  struct _XLATEOBJ *v39; // [rsp+D8h] [rbp+20h] BYREF

  v39 = a4;
  v38 = a3;
  v37 = a2;
  hdev = a1->hdev;
  v12 = 2;
  if ( *((_DWORD *)g_pDwmState + 25) )
  {
    if ( a2 || a3 )
    {
      v13 = a10;
      v14 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v15 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v15 = 0;
      LODWORD(v39) = 0x1000000;
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v16 = (struct _RECTL *)a9;
      while ( *((_DWORD *)g_pDwmState + 40) < v14 )
      {
        if ( a7 == -1 && a8 == -1 || (v29 = 1, (v13 & 0x40) != 0) )
          v29 = 0;
        SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v16, 0LL, 0x9900u, 1, v29, 0, 0, 0, 0LL);
        if ( !SpriteInternal )
          break;
        if ( !*((_QWORD *)g_pDwmState + 17) )
          *((_QWORD *)g_pDwmState + 17) = SpriteInternal;
        *((_QWORD *)g_pDwmState + 18) = SpriteInternal;
        ++*((_DWORD *)g_pDwmState + 40);
      }
      while ( *((_DWORD *)g_pDwmState + 40) > v14 )
      {
        v31 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v31, 1, 0);
        GreDeleteSpriteInternal(a1->hdev, 0LL, v31, 1);
        --*((_DWORD *)g_pDwmState + 40);
      }
      *((_DWORD *)g_pDwmState + 42) = v15;
      v17 = g_pDwmState;
      v18 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      if ( v18 )
      {
        v19 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        if ( v19 != v18 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v19, 1, 0);
            v36 = 0LL;
            v33 = NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v36, v19);
            v34 = v36;
            if ( v36 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v35, (struct DWMSPRITE *)((char *)v36 + 88));
              vSpDwmUpdateSpriteVisibility(v34, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v35);
              v19 = v33;
              DEC_SHARE_REF_CNT(v34);
            }
            else
            {
              v19 = v33;
            }
            v17 = g_pDwmState;
          }
          while ( v33 != *((HSPRITE *)g_pDwmState + 17) );
        }
        v20 = *(HSPRITE *)(*(_QWORD *)v17 + 144LL);
        if ( v20 )
        {
          v21 = v38;
          while ( 1 )
          {
            v22 = hspGetNeighborSprite(v20, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(
                                  v20,
                                  v37,
                                  v21,
                                  v23,
                                  v16,
                                  (struct _BLENDFUNCTION *)((unsigned __int64)&v39 & -(__int64)((v13 & 0x40) != 0))) )
              break;
            v20 = v22;
            if ( !v22 )
              goto LABEL_15;
          }
          v12 = 0;
        }
LABEL_15:
        *((_DWORD *)g_pDwmState + 38) = a5 - v16->left;
        *((_DWORD *)g_pDwmState + 39) = a6 - v16->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DwmMovePointer(a1, a7, a8, v24, (v13 & 0x60) != 0 ? 4 : 0);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v26 = hdev + 882;
      v27 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v26[1] = v26;
      *v26 = v26;
      if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
        && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
      {
        vSpDwmDestroyCursorSprites(a1->hdev);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
    }
  }
  return v12;
}
