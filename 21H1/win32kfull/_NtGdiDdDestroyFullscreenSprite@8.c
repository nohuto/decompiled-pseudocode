/*
 * XREFs of _NtGdiDdDestroyFullscreenSprite@8 @ 0x1D473A
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0 (-SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z.c)
 */

unsigned int __stdcall NtGdiDdDestroyFullscreenSprite(HDC a1, HDEV a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}
