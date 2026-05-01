/*
 * XREFs of sub_180029184 @ 0x180029184
 * Callers:
 *     sub_180029064 @ 0x180029064 (sub_180029064.c)
 *     sub_180037A20 @ 0x180037A20 (sub_180037A20.c)
 * Callees:
 *     sub_180029234 @ 0x180029234 (sub_180029234.c)
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 */

__int64 __fastcall sub_180029184(void *a1, int a2, HKEY *a3)
{
  int v5; // ebx
  HKEY v6; // rcx
  HKEY v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v5 = sub_180029234(a1);
  if ( v5 < 0 || (v5 = sub_180029764(0, (unsigned int)L"Volatile", 1, a2, (__int64)&v8), v5 < 0) )
  {
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *a3 = v8;
    v5 = 0;
    v8 = 0LL;
  }
  if ( v6 )
    RegCloseKey(v6);
  return (unsigned int)v5;
}
