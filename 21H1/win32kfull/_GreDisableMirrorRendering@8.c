/*
 * XREFs of _GreDisableMirrorRendering@8 @ 0x1E359E
 * Callers:
 *     _NtUserSetMirrorRendering@8 @ 0x1699CF (_NtUserSetMirrorRendering@8.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC (-vSpCreateExMirror@@YGXPAUHDEV__@@@Z.c)
 */

unsigned int __fastcall GreDisableMirrorRendering(int a1, int a2)
{
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // ecx
  struct _METASPRITE *MetaSprite; // eax
  _DWORD **v7; // edi
  _DWORD *v8; // eax
  struct SPRITE *Sprite; // edi
  HWND v11; // [esp+0h] [ebp-20h]
  HDEV v12; // [esp+0h] [ebp-20h]
  HDEV v13; // [esp+0h] [ebp-20h]
  void *v14; // [esp+4h] [ebp-1Ch]
  _DWORD v15[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v16[4]; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v15[0] = a1;
  v3 = 0;
  v17 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( v15[0] )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)v15);
    v4 = v15[0];
    v5 = v15[0] + 64;
    if ( *(_DWORD *)(v15[0] + 104) )
    {
      MetaSprite = pSpGetMetaSprite(a2, v5, 0, v11, v14);
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 2) |= 0x100u;
        if ( *(_DWORD *)(v4 + 104) )
        {
          v7 = (_DWORD **)((char *)MetaSprite + 16);
          v15[1] = -16 - (_DWORD)MetaSprite;
          do
          {
            vSpCreateExMirror(v12);
            **v7 |= 0x100u;
            v8 = *v7++;
            v8[41] |= 0x10000000u;
            ++v3;
          }
          while ( v3 < *(_DWORD *)(v4 + 104) );
        }
        goto LABEL_10;
      }
    }
    else
    {
      Sprite = pSpGetSprite(a2, v5, 0, v11, v14);
      if ( Sprite )
      {
        vSpCreateExMirror(v13);
        *(_DWORD *)Sprite |= 0x100u;
        *((_DWORD *)Sprite + 41) |= 0x10000000u;
LABEL_10:
        v3 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v3;
}
