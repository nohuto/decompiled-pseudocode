/*
 * XREFs of _GreEnableMirrorRendering@8 @ 0x1E3682
 * Callers:
 *     _NtUserSetMirrorRendering@8 @ 0x1699CF (_NtUserSetMirrorRendering@8.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpDeleteExMirror@@YGXPAUHDEV__@@@Z @ 0x9E672 (-vSpDeleteExMirror@@YGXPAUHDEV__@@@Z.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

unsigned int __usercall GreEnableMirrorRendering@<eax>(int a1@<edx>, int a2@<ecx>, HWND a3@<ebx>)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ecx
  struct _METASPRITE *MetaSprite; // eax
  int v8; // ecx
  _DWORD **v9; // edi
  _DWORD *v10; // eax
  struct SPRITE *Sprite; // edi
  void *v14; // [esp+0h] [ebp-18h]
  int v15; // [esp+8h] [ebp-10h] BYREF
  _BYTE v16[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h] BYREF

  v18 = a2;
  v4 = 0;
  v15 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( v18 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v18);
    v5 = v18;
    v6 = v18 + 64;
    if ( *(_DWORD *)(v18 + 104) )
    {
      MetaSprite = pSpGetMetaSprite(a1, v6, 0, a3, v14);
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 2) &= ~0x100u;
        if ( *(_DWORD *)(v5 + 104) )
        {
          v8 = -16 - (_DWORD)MetaSprite;
          v9 = (_DWORD **)((char *)MetaSprite + 16);
          v17 = -16 - (_DWORD)MetaSprite;
          do
          {
            vSpDeleteExMirror(*(SURFOBJ ***)((char *)v9 + v8 + *(_DWORD *)(v5 + 108)));
            v8 = v17;
            **v9 &= ~0x100u;
            v10 = *v9++;
            v10[41] &= ~0x10000000u;
            ++v4;
          }
          while ( v4 < *(_DWORD *)(v5 + 104) );
        }
        goto LABEL_10;
      }
    }
    else
    {
      Sprite = pSpGetSprite(a1, v6, 0, a3, v14);
      if ( Sprite )
      {
        vSpDeleteExMirror(*(SURFOBJ ***)(v5 + 64));
        *(_DWORD *)Sprite &= ~0x100u;
        *((_DWORD *)Sprite + 41) &= ~0x10000000u;
LABEL_10:
        v4 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v4;
}
