/*
 * XREFs of ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00BC6D4
 * Callers:
 *     NtUserSetWindowFNID @ 0x1C00C5070 (NtUserSetWindowFNID.c)
 *     SetDialogPointer @ 0x1C00E87B0 (SetDialogPointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(__int64 a1, _DWORD *a2)
{
  return *(_DWORD *)(*(_QWORD *)(a1 - 281) + 252LL) != *a2;
}
