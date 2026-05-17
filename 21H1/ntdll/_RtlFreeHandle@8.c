/*
 * XREFs of _RtlFreeHandle@8 @ 0x4B2E7780
 * Callers:
 *     _RtlpFreeHandleForAtom@8 @ 0x4B2A7933 (_RtlpFreeHandleForAtom@8.c)
 *     _RtlpInsertStringAtom@8 @ 0x4B2E0590 (_RtlpInsertStringAtom@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char __stdcall RtlFreeHandle(int a1, _DWORD *a2)
{
  char result; // al

  memset(a2, 0, *(_DWORD *)(a1 + 4));
  *a2 = *(_DWORD *)(a1 + 16);
  result = 1;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
