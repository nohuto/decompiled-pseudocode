/*
 * XREFs of NtGdiDdCreateFullscreenSprite @ 0x1C0277600
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  return SpDdCreateFullscreenSprite(a1, a2, a3, a4);
}
