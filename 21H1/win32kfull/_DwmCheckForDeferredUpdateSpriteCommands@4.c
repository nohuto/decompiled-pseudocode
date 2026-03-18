/*
 * XREFs of _DwmCheckForDeferredUpdateSpriteCommands@4 @ 0xF61EA
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall DwmCheckForDeferredUpdateSpriteCommands(void *this)
{
  int result; // eax
  int v2; // esi
  void **i; // edx

  result = 0;
  v2 = 0;
  if ( g_cDelayedUpdateSpriteNotifications )
  {
    for ( i = (void **)&unk_272930; *i != this; i += 45 )
    {
      if ( ++v2 >= g_cDelayedUpdateSpriteNotifications )
        return result;
    }
    return 1;
  }
  return result;
}
