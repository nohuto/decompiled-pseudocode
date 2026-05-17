/*
 * XREFs of _RtlSidIsHigherLevel@12 @ 0x4B347530
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall RtlSidIsHigherLevel(int a1, int a2, bool *a3)
{
  int Buf2; // [esp+Ch] [ebp-Ch] BYREF
  __int16 v5; // [esp+10h] [ebp-8h]

  Buf2 = 0;
  v5 = 4096;
  if ( memcmp((const void *)(a1 + 2), &Buf2, 6u) || memcmp((const void *)(a2 + 2), &Buf2, 6u) )
    return -1073741811;
  *a3 = *(_DWORD *)(a1 + 8) > *(_DWORD *)(a2 + 8);
  return 0;
}
