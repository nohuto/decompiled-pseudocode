/*
 * XREFs of ?GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x1DA897
 * Callers:
 *     _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8 (_GreDeleteSpriteDelayDelete@16.c)
 * Callees:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF43D (-pSpGetMetaSpriteDelayDelete@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF46A (-pSpGetSpriteDelayDelete@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

unsigned int __userpurge GdiDeleteSpriteDelayDelete@<eax>(
        int a1@<ecx>,
        const struct _SPRITESTATE *a2,
        HWND a3,
        void *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  struct _METASPRITE *v6; // edi
  HDEV v7; // ecx
  _DWORD **v8; // edx
  int v9; // eax
  W32PIDLOCK *v10; // esi
  unsigned int v11; // eax
  _DWORD **v12; // edi
  int v13; // ecx
  struct SPRITE *v14; // eax
  struct SPRITE *v15; // edi
  int v16; // esi
  HWND v18; // [esp+0h] [ebp-24h]
  void *v19; // [esp+4h] [ebp-20h]
  char v20[4]; // [esp+Ch] [ebp-18h] BYREF
  struct _METASPRITE *v21; // [esp+10h] [ebp-14h]
  int v22; // [esp+14h] [ebp-10h]
  _DWORD *v23; // [esp+18h] [ebp-Ch]
  _DWORD **v24; // [esp+1Ch] [ebp-8h]
  int v25; // [esp+20h] [ebp-4h] BYREF
  HDEV v26; // [esp+2Ch] [ebp+8h]

  v25 = a1;
  v4 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v25);
  v5 = v25 + 64;
  v22 = v25 + 64;
  v24 = *(_DWORD ***)(v25 + 104);
  if ( v24 )
  {
    v6 = pSpGetMetaSpriteDelayDelete(a2, v18, v19);
    v21 = v6;
    if ( v6 )
    {
      v7 = 0;
      v26 = 0;
      if ( v24 )
      {
        v8 = (_DWORD **)((char *)v6 + 16);
        v24 = (_DWORD **)((char *)v6 + 16);
        do
        {
          v23 = *v8;
          v9 = v23[22];
          if ( v9 && (*(_DWORD *)(v9 + 140) || (*(_BYTE *)(v9 + 60) & 1) != 0) )
          {
            v10 = (W32PIDLOCK *)(v9 + 152);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 152));
            *v23 &= ~0x400u;
            *((_DWORD *)v6 + 2) &= ~0x400u;
            W32PIDLOCK::vUnlockSingleThread(v10);
            v5 = v22;
            v7 = v26;
            v8 = v24;
          }
          v11 = *(_DWORD *)(v5 + 40);
          v7 = (HDEV)((char *)v7 + 1);
          ++v8;
          v26 = v7;
          v24 = v8;
        }
        while ( (unsigned int)v7 < v11 );
        if ( v11 )
        {
          v12 = (_DWORD **)((char *)v6 + 16);
          do
          {
            vSpDeleteSprite(*v12);
            ++v4;
            ++v12;
          }
          while ( v4 < *(_DWORD *)(v5 + 40) );
          v6 = v21;
        }
      }
      v13 = *(_DWORD *)(v5 + 48);
      if ( (struct _METASPRITE *)v13 == v6 )
      {
        *(_DWORD *)(v5 + 48) = *((_DWORD *)v6 + 1);
      }
      else
      {
        while ( *(struct _METASPRITE **)(v13 + 4) != v6 )
          v13 = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(v13 + 4) = *((_DWORD *)v6 + 1);
      }
      Win32FreePool(v6);
LABEL_26:
      v4 = 1;
    }
  }
  else
  {
    v14 = pSpGetSpriteDelayDelete(a2, v18, v19);
    v15 = v14;
    if ( v14 )
    {
      v16 = *((_DWORD *)v14 + 22);
      if ( v16 && (*(_DWORD *)(v16 + 140) || (*(_BYTE *)(v16 + 60) & 1) != 0) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 152));
        *(_DWORD *)v15 &= ~0x400u;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v16 + 152));
      }
      vSpDeleteSprite(v15);
      goto LABEL_26;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  return v4;
}
