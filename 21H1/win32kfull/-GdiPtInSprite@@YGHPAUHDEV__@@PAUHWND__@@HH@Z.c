/*
 * XREFs of ?GdiPtInSprite@@YGHPAUHDEV__@@PAUHWND__@@HH@Z @ 0x1DB02B
 * Callers:
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 * Callees:
 *     ?pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x9FC28 (-pSpGetSprite@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 *     ?bSpPtInSprite@@YGHPAVSPRITE@@HH@Z @ 0x1DE2FD (-bSpPtInSprite@@YGHPAVSPRITE@@HH@Z.c)
 *     ?pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF410 (-pSpGetMetaSprite@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z.c)
 */

int __userpurge GdiPtInSprite@<eax>(int a1@<edx>, int a2@<ecx>, HDEV a3, struct SPRITE *a4, int a5, int a6)
{
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  HWND v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+0h] [ebp-20h]
  int v13; // [esp+0h] [ebp-20h]
  void *v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+4h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-1Ch]
  _BYTE v17[4]; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h] BYREF

  v20 = a2;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v17, (struct PDEVOBJ *)&v20);
  v8 = v20;
  v19 = *(_DWORD *)(v20 + 104);
  if ( v19 )
  {
    if ( pSpGetMetaSprite(0, v11, v14) )
    {
      v9 = 0;
      if ( v19 )
      {
        while ( !bSpPtInSprite(
                   (struct SPRITE *)((char *)a4 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 108) + 4 * v9) + 1840)),
                   v12,
                   v15) )
        {
          if ( (unsigned int)++v9 >= *(_DWORD *)(v8 + 104) )
            goto LABEL_10;
        }
        v7 = 1;
      }
    }
  }
  else if ( pSpGetSprite(a1, v20 + 64, 0, v11, v14) )
  {
    v7 = bSpPtInSprite(a4, v13, v16);
  }
LABEL_10:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v17);
  return v7;
}
