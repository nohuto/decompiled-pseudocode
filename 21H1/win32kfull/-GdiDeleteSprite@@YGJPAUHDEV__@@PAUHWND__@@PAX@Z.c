/*
 * XREFs of ?GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x9EAA8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

unsigned int __userpurge GdiDeleteSprite@<eax>(int a1@<edx>, int a2@<ecx>, struct _SPRITESTATE *a3, HWND a4, void *a5)
{
  int v5; // ebx
  struct _METASPRITE *MetaSprite; // edi
  unsigned int v7; // esi
  unsigned int v8; // ecx
  _DWORD **v9; // edx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  char *v14; // edi
  int v15; // ecx
  struct SPRITE *Sprite; // eax
  struct SPRITE *v17; // ebx
  int v18; // edi
  int v19; // eax
  HWND v21; // [esp+0h] [ebp-3Ch]
  struct SPRITE *v22; // [esp+0h] [ebp-3Ch]
  struct SPRITE *v23; // [esp+0h] [ebp-3Ch]
  void *v24; // [esp+4h] [ebp-38h]
  _BYTE v25[4]; // [esp+10h] [ebp-2Ch] BYREF
  struct _METASPRITE *v26; // [esp+14h] [ebp-28h]
  W32PIDLOCK *v27; // [esp+18h] [ebp-24h]
  _DWORD *v28; // [esp+1Ch] [ebp-20h]
  _DWORD *v29; // [esp+20h] [ebp-1Ch]
  int v30; // [esp+24h] [ebp-18h]
  int v31; // [esp+28h] [ebp-14h]
  int v32; // [esp+2Ch] [ebp-10h]
  _DWORD **v33; // [esp+30h] [ebp-Ch]
  unsigned int v34; // [esp+34h] [ebp-8h]
  int v35; // [esp+38h] [ebp-4h] BYREF

  v31 = a2;
  v35 = a2;
  v30 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v25, (struct PDEVOBJ *)&v35);
  v5 = v35;
  v33 = *(_DWORD ***)(v35 + 104);
  if ( !v33 )
  {
    Sprite = pSpGetSprite(a3, v21, v24);
    v17 = Sprite;
    if ( Sprite )
    {
      v18 = *((_DWORD *)Sprite + 22);
      v7 = 0;
      v32 = 1;
      if ( !v18 || !*(_DWORD *)(v18 + 140) && (*(_BYTE *)(v18 + 60) & 1) == 0 )
        goto LABEL_34;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 152));
      if ( *(_DWORD *)(v18 + 192) )
      {
        v19 = *(_DWORD *)(v18 + 60);
        if ( (v19 & 2) == 0 )
        {
          *(_DWORD *)(v18 + 348) = v31;
          *(_DWORD *)(v18 + 352) = v30;
          *(_DWORD *)(v18 + 356) = a3;
          *(_DWORD *)(v18 + 360) = 1;
          *(_DWORD *)(v18 + 60) = v19 | 2;
          *(_DWORD *)v17 |= 0x400u;
        }
        v32 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 152));
      if ( v32 )
LABEL_34:
        vSpDeleteSprite(v23);
      goto LABEL_36;
    }
LABEL_35:
    v7 = -2143354870;
    goto LABEL_36;
  }
  MetaSprite = pSpGetMetaSprite(a3, v21, v24);
  v26 = MetaSprite;
  if ( !MetaSprite )
    goto LABEL_35;
  v7 = 0;
  v32 = 1;
  v8 = 0;
  v34 = 0;
  if ( !v33 )
  {
LABEL_19:
    v15 = *(_DWORD *)(v5 + 112);
    if ( (struct _METASPRITE *)v15 == MetaSprite )
    {
      *(_DWORD *)(v5 + 112) = *((_DWORD *)MetaSprite + 1);
    }
    else
    {
      while ( *(struct _METASPRITE **)(v15 + 4) != MetaSprite )
        v15 = *(_DWORD *)(v15 + 4);
      *(_DWORD *)(v15 + 4) = *((_DWORD *)MetaSprite + 1);
    }
    Win32FreePool(MetaSprite);
    goto LABEL_36;
  }
  v9 = (_DWORD **)((char *)MetaSprite + 16);
  v33 = (_DWORD **)((char *)MetaSprite + 16);
  do
  {
    v28 = *v9;
    v10 = v28[22];
    v29 = (_DWORD *)v10;
    if ( v10 && (*(_DWORD *)(v10 + 140) || (*(_BYTE *)(v10 + 60) & 1) != 0) )
    {
      v27 = (W32PIDLOCK *)(v10 + 152);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v10 + 152));
      v11 = v29;
      if ( v29[48] )
      {
        v12 = v29[15];
        if ( (v12 & 2) == 0 )
        {
          v29[87] = v31;
          v11[88] = v30;
          v11[89] = a3;
          v11[90] = 1;
          v11[15] = v12 | 2;
          *v28 |= 0x400u;
          *((_DWORD *)MetaSprite + 2) |= 0x400u;
        }
        v32 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread(v27);
      v8 = v34;
      v9 = v33;
    }
    v13 = *(_DWORD *)(v5 + 104);
    ++v8;
    ++v9;
    v34 = v8;
    v33 = v9;
  }
  while ( v8 < v13 );
  if ( v32 )
  {
    if ( v13 )
    {
      v14 = (char *)MetaSprite + 16;
      do
      {
        vSpDeleteSprite(v22);
        ++v7;
        v14 += 4;
      }
      while ( v7 < *(_DWORD *)(v5 + 104) );
      MetaSprite = v26;
      v7 = 0;
    }
    goto LABEL_19;
  }
LABEL_36:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v25);
  return v7;
}
