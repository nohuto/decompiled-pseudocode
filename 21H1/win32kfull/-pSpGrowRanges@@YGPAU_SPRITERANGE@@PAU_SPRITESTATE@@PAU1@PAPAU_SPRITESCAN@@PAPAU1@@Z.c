/*
 * XREFs of ?pSpGrowRanges@@YGPAU_SPRITERANGE@@PAU_SPRITESTATE@@PAU1@PAPAU_SPRITESCAN@@PAPAU1@@Z @ 0xA12A8
 * Callers:
 *     ?bSpComputeScan@@YGHPAU_SPRITESTATE@@PAVSPRITE@@JJPAPAU_SPRITESCAN@@PAK@Z @ 0xA095C (-bSpComputeScan@@YGHPAU_SPRITESTATE@@PAVSPRITE@@JJPAPAU_SPRITESCAN@@PAK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vSpSetNullRange@@YGXPAU_SPRITESTATE@@PAU_SPRITESCAN@@@Z @ 0xA132A (-vSpSetNullRange@@YGXPAU_SPRITESTATE@@PAU_SPRITESCAN@@@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

struct _SPRITERANGE *__userpurge pSpGrowRanges@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct _SPRITERANGE *a4,
        struct _SPRITESCAN **a5,
        struct _SPRITERANGE **a6)
{
  int v7; // eax
  size_t v8; // ebx
  char *v9; // eax
  char *v10; // edi
  struct _SPRITESTATE *v12; // [esp+0h] [ebp-14h]
  struct _SPRITESCAN *v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+Ch] [ebp-8h]
  size_t MaxCount; // [esp+10h] [ebp-4h]

  v7 = *(_DWORD *)(a2 + 96);
  MaxCount = a1 - v7;
  v14 = *(_DWORD *)a3 - v7;
  v8 = *(_DWORD *)(a2 + 100) - v7 + 268;
  v9 = (char *)PALLOCMEM2(v8, 1919972167, 0);
  v10 = v9;
  if ( v9 )
  {
    memcpy(v9, *(const void **)(a2 + 96), MaxCount);
    Win32FreePool(*(_DWORD *)(a2 + 96));
    *(_DWORD *)(a2 + 100) = &v10[v8];
    *(_DWORD *)(a2 + 96) = v10;
    *(_DWORD *)a3 = &v10[v14];
    *(_DWORD *)a4 = &v10[v8 - 40];
    return (struct _SPRITERANGE *)&v10[MaxCount];
  }
  else
  {
    vSpSetNullRange(v12, v13);
    return 0;
  }
}
