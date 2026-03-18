/*
 * XREFs of _W32SetCurrentThreadDpiAwarenessContext@4 @ 0x6B6B0
 * Callers:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 * Callees:
 *     _CaptureAndValidateUserModeDpiAwarenessContext@4 @ 0x6B7E0 (_CaptureAndValidateUserModeDpiAwarenessContext@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

unsigned int __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  int v3; // edi
  int *ThreadWin32Thread; // eax
  int *v5; // eax
  PKTHREAD CurrentThread; // [esp+18h] [ebp-20h]

  v1 = 0;
  v2 = a1 < 0 ? 0 : a1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v5 = *(int **)(v3 + 204);
    if ( v5 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v3);
      v5 = *(int **)(v3 + 204);
    }
    v1 = *(_DWORD *)(v3 + 192);
    *(_DWORD *)(v3 + 192) = v2;
    if ( v5 )
      *v5 = v2;
  }
  if ( !v1 )
    v1 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 156) | 0x80000000;
  if ( v3 && (*(_BYTE *)(v3 + 180) & 4) != 0 && (v1 & 0xF) == 2 && (v1 & 0xF0) == 0x20 )
    v1 |= 0x20000000u;
  return v1;
}
