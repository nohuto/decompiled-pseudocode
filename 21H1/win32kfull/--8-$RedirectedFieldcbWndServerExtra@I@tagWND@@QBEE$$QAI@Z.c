/*
 * XREFs of ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEE$$QAI@Z @ 0xAAE66
 * Callers:
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(char *this, _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 173) + 160) == *a2;
}
