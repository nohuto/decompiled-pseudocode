/*
 * XREFs of ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C011B89C
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00B20A8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 281) + 252LL) == *a2;
}
