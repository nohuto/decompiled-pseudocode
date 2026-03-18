/*
 * XREFs of ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QBEEABH@Z @ 0xA5026
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldcbwndExtra<int>::operator!=(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 77) + 128) != *a2;
}
