/*
 * XREFs of ?pSpGetMetaSpriteDelayDelete@@YGPAU_METASPRITE@@PBU_SPRITESTATE@@PAUHWND__@@PAX@Z @ 0x1DF43D
 * Callers:
 *     ?GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x1DA897 (-GdiDeleteSpriteDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z @ 0x1DAA49 (-GdiHintSpriteShapeDelayDelete@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

struct _METASPRITE *__userpurge pSpGetMetaSpriteDelayDelete@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        const struct _SPRITESTATE *a3,
        HWND a4,
        void *a5)
{
  struct _METASPRITE *result; // eax

  result = a3;
  if ( !a3 && a1 )
  {
    for ( result = *(struct _METASPRITE **)(a2 + 48);
          result && (*(_DWORD *)result != a1 || (*((_DWORD *)result + 2) & 0x400) == 0);
          result = (struct _METASPRITE *)*((_DWORD *)result + 1) )
    {
      ;
    }
  }
  return result;
}
