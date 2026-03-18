/*
 * XREFs of _NtUserSetClipboardViewer@4 @ 0x169146
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSetClipboardViewer@4 @ 0x183220 (_xxxSetClipboardViewer@4.c)
 */

int __stdcall NtUserSetClipboardViewer(int a1)
{
  int v1; // esi
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v5; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v1 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    if ( !v2 )
      goto LABEL_10;
  }
  else
  {
    v2 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v7 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v7;
  v8 = v2;
  if ( v2 )
    HMLockObject(v2);
  v5 = (int *)xxxSetClipboardViewer(v2);
  if ( v5 )
    v1 = *v5;
  ThreadUnlock1();
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v1;
}
