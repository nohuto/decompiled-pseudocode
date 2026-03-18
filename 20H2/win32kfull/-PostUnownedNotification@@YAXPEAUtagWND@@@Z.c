/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C012D4F0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  unsigned int v1; // edx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( !gpqForeground || (v1 = 26, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
      v1 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v1, *(_QWORD *)a1);
  }
}
