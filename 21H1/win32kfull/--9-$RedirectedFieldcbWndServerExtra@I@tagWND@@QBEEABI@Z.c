/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEEABI@Z @ 0x1433FD
 * Callers:
 *     _NtUserSetWindowFNID@8 @ 0x1F1C6 (_NtUserSetWindowFNID@8.c)
 *     _SetDialogPointer@8 @ 0xA756E (_SetDialogPointer@8.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 173) + 160) != *a2;
}
