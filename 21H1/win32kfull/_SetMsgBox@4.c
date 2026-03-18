/*
 * XREFs of _SetMsgBox@4 @ 0x145C45
 * Callers:
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

int __stdcall SetMsgBox(int a1)
{
  int v1; // eax

  v1 = **(_DWORD **)(*(_DWORD *)(a1 + 12) + 4);
  ++*(_DWORD *)(v1 + 24);
  SetOrClrWF(1, a1, 0x20u, 1);
  return 1;
}
