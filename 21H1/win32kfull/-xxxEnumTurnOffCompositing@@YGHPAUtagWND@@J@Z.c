/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YGHPAUtagWND@@J@Z @ 0x1535A5
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 */

int __stdcall xxxEnumTurnOffCompositing(struct tagWND *a1, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 19) & 2) != 0 )
    xxxSetWindowStyle(a1, 0xFFFFFFEC, *(_DWORD *)(v2 + 16) & 0x87F77FF);
  return 1;
}
