/*
 * XREFs of _bSpEnableSprites@4 @ 0x9E6C6
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??1RGNMEMOBJ@@QAE@XZ @ 0x9E99E (--1RGNMEMOBJ@@QAE@XZ.c)
 *     ?vSpHook@@YGXPAU_SPRITESTATE@@@Z @ 0x9E9AC (-vSpHook@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vSpSetNullRange@@YGXPAU_SPRITESTATE@@PAU_SPRITESCAN@@@Z @ 0xA132A (-vSpSetNullRange@@YGXPAU_SPRITESTATE@@PAU_SPRITESCAN@@@Z.c)
 *     ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A (-psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z.c)
 */

int __stdcall bSpEnableSprites(int a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // ecx
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  struct REGION *v12; // [esp-Ch] [ebp-3Ch]
  int v13; // [esp+0h] [ebp-30h]
  struct _SPRITESTATE *v14; // [esp+0h] [ebp-30h]
  struct _SPRITESTATE *v15; // [esp+0h] [ebp-30h]
  int v16; // [esp+4h] [ebp-2Ch]
  struct _SPRITESCAN *v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+10h] [ebp-20h]
  struct _SURFOBJ *Surface; // [esp+14h] [ebp-1Ch]
  _DWORD v20[2]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v21[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD v22[2]; // [esp+28h] [ebp-8h] BYREF

  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 1820);
    *(_DWORD *)(a1 + 64) = a1;
    v3 = v2 != 0 ? v2 + 16 : 0;
    v4 = (_DWORD *)(v3 - 16);
    *(_DWORD *)(a1 + 80) = v3 != 16 ? v3 : 0;
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(v3 - 16 + 60);
    v5 = *(unsigned __int16 *)(v3 - 16 + 64);
    *(_DWORD *)(a1 + 128) = v5;
    v6 = v4[18];
    *(_DWORD *)(a1 + 124) = v6;
    *(_DWORD *)(a1 + 136) = v5;
    *(_DWORD *)(a1 + 132) = v6;
    v7 = **(_DWORD **)(v4[22] + 76) | *(_DWORD *)(*(_DWORD *)(v4[22] + 76) + 8);
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 144) = v7;
    v8 = v4[8];
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 92) = v8;
    *(_DWORD *)(a1 + 96) = v4[9];
    *(_DWORD *)(a1 + 152) = GreCreateSemaphore();
    *(_DWORD *)(a1 + 156) = GreCreateSemaphore();
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 424), (PULONG)(a1 + 432), 0x40u);
    GreInitializePushLock(a1 + 440);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
    if ( *(_DWORD *)(a1 + 152) )
    {
      if ( *(_DWORD *)(a1 + 156) )
      {
        if ( v22[0] )
        {
          if ( v21[0] )
          {
            if ( v20[0] )
            {
              v1 = 1;
              v18 = PALLOCMEM2(0x1Cu, 1919972167, 1);
              if ( v18 )
              {
                Surface = psoSpCreateSurface((struct _SPRITESTATE *)1, 1u, v9, v13, v16);
                if ( Surface )
                {
                  vSpSetNullRange(v14, v17);
                  *(_DWORD *)(a1 + 704) = Surface;
                  RGNOBJ::vSet((RGNOBJ *)v20, (struct _RECTL *)(a1 + 84));
                  v12 = (struct REGION *)v20[0];
                  *(_DWORD *)(a1 + 576) = v20[0];
                  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 580), v12, (struct ERECTL *)(a1 + 84), 1);
                  v10 = v22[0];
                  *(_DWORD *)(a1 + 444) = v22[0];
                  *(_DWORD *)(v10 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
                  *(_DWORD *)(a1 + 448) = v21[0];
                  *(_DWORD *)(a1 + 720) = GreCreateRectRgn(0, 0, 0, 0);
                  *(_DWORD *)(a1 + 816) = *(_DWORD *)(a1 + 1964);
                  *(_DWORD *)(a1 + 820) = *(_DWORD *)(a1 + 1956);
                  *(_DWORD *)(a1 + 824) = *(_DWORD *)(a1 + 1960);
                  *(_DWORD *)(a1 + 832) = *(_DWORD *)(a1 + 1972);
                  *(_DWORD *)(a1 + 836) = *(_DWORD *)(a1 + 1976);
                  *(_DWORD *)(a1 + 840) = *(_DWORD *)(a1 + 1980);
                  *(_DWORD *)(a1 + 844) = *(_DWORD *)(a1 + 1992);
                  *(_DWORD *)(a1 + 848) = *(_DWORD *)(a1 + 2024);
                  *(_DWORD *)(a1 + 852) = *(_DWORD *)(a1 + 2196);
                  *(_DWORD *)(a1 + 856) = *(_DWORD *)(a1 + 2184);
                  *(_DWORD *)(a1 + 860) = *(_DWORD *)(a1 + 2180);
                  *(_DWORD *)(a1 + 864) = *(_DWORD *)(a1 + 2172);
                  *(_DWORD *)(a1 + 872) = *(_DWORD *)(a1 + 2176);
                  *(_DWORD *)(a1 + 868) = *(_DWORD *)(a1 + 2060);
                  *(_DWORD *)(a1 + 876) = *(_DWORD *)(a1 + 2260);
                  if ( ((unsigned int)&loc_20000 & *(_DWORD *)(a1 + 24)) == 0 )
                    vSpHook(v15);
LABEL_18:
                  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v20);
                  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v21);
                  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v22);
                  return v1;
                }
                Win32FreePool(v18);
              }
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 152) )
      GreDeleteSemaphore(*(_DWORD *)(a1 + 152));
    if ( *(_DWORD *)(a1 + 156) )
      GreDeleteSemaphore(*(_DWORD *)(a1 + 156));
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 156) = 0;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v22);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
    v1 = 0;
    goto LABEL_18;
  }
  return 1;
}
