/*
 * XREFs of _xxxDesktopWndProc@16 @ 0x16118
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x12790 (-xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 * Callees:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 */

int __stdcall xxxDesktopWndProc(int a1, int a2, struct tagWND *a3, unsigned int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int result; // eax
  unsigned int v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+4h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 20);
      if ( v7 )
      {
        v4 = *(_DWORD *)(v7 + 28);
        v8 = *(_DWORD *)(v4 + 16);
        if ( v8 >= 0x20 )
          return 0;
        v5 = 1;
        *(_DWORD *)(v4 + 16) = v8 + 1;
      }
    }
  }
  result = xxxDesktopWndProcWorker(a3, a4, v10, v11);
  if ( v5 )
    --*(_DWORD *)(v4 + 16);
  return result;
}
