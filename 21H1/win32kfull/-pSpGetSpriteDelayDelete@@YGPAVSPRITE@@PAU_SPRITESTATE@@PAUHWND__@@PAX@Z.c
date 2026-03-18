/*
 * XREFs of ?pSpGetSpriteDelayDelete@@YGPAVSPRITE@@PAU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF46A
 * Callers:
 *     ?GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x1DA897 (-GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49 (-GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

struct SPRITE *__userpurge pSpGetSpriteDelayDelete@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SPRITESTATE *a3,
        HWND a4,
        void *a5)
{
  struct SPRITE *result; // eax

  result = a3;
  if ( !a3 && a1 )
  {
    for ( result = *(struct SPRITE **)(a2 + 4);
          result && (*((_DWORD *)result + 10) != a1 || (*(_DWORD *)result & 0x400) == 0);
          result = (struct SPRITE *)*((_DWORD *)result + 4) )
    {
      ;
    }
  }
  return result;
}
