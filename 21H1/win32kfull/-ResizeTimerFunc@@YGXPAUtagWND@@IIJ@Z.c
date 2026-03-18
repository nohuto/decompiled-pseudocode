/*
 * XREFs of ?ResizeTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x172059
 * Callers:
 *     <none>
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _GreCancelSynchronizedWindowResize@4 @ 0x1CDE96 (_GreCancelSynchronizedWindowResize@4.c)
 */

void __stdcall ResizeTimerFunc(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // eax

  FindTimer((unsigned int)a1, a3, 2u, 1, 0);
  v4 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 368);
  if ( v4 && *(struct tagWND **)(v4 + 8) == a1 )
    *(_DWORD *)(v4 + 188) |= 2u;
  GreCancelSynchronizedWindowResize(*(_DWORD *)a1);
}
