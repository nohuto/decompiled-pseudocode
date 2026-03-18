/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QBEEABI@Z @ 0xA53F2
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 66) + 52) != *a2;
}
