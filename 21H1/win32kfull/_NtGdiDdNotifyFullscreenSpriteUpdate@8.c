/*
 * XREFs of _NtGdiDdNotifyFullscreenSpriteUpdate@8 @ 0x1D4753
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 */

int __userpurge NtGdiDdNotifyFullscreenSpriteUpdate@<eax>(unsigned int *a1@<esi>, HDC a2, void *a3)
{
  return SpDdNotifyFullscreenSpriteUpdate(a3, a2, a1);
}
