/*
 * XREFs of _IsChildWindowDpiIsolationEnabled@8 @ 0xA8DE2
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

int __fastcall IsChildWindowDpiIsolationEnabled(int a1, int a2)
{
  int v2; // edi
  int v4; // edx
  int v6; // ecx
  char CurrentThreadDpiAwarenessContext; // al

  v2 = 0;
  if ( gfDwmChildWindowDpiIsolationEnabled )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(a2 + 20);
      if ( *(_DWORD *)(v4 + 188) == 1 )
      {
        if ( a1 )
        {
          v6 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 184);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
          v4 = *(_DWORD *)(a2 + 20);
          LOBYTE(v6) = CurrentThreadDpiAwarenessContext;
        }
        if ( (*(_DWORD *)(v4 + 184) & 0xF) == 2 || (v6 & 0xF) != 2 )
          return 1;
      }
    }
  }
  return v2;
}
