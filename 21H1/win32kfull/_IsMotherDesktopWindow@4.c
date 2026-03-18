/*
 * XREFs of _IsMotherDesktopWindow@4 @ 0x72C60
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsMotherDesktopWindow(void *this)
{
  int v1; // edx

  v1 = 0;
  if ( this == (void *)_gTermIO[1] || this == (void *)dword_273C38 )
    return 1;
  return v1;
}
