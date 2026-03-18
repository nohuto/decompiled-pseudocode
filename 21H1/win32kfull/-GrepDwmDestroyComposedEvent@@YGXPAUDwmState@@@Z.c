/*
 * XREFs of ?GrepDwmDestroyComposedEvent@@YGXPAUDwmState@@@Z @ 0x1CCE36
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     <none>
 */

void __thiscall GrepDwmDestroyComposedEvent(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this[62];
  if ( v2 )
  {
    ObCloseHandle(v2, 0);
    this[62] = 0;
  }
}
