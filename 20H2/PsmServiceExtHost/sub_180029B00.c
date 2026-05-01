/*
 * XREFs of sub_180029B00 @ 0x180029B00
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_180029148 @ 0x180029148 (sub_180029148.c)
 *     sub_1800293D0 @ 0x1800293D0 (sub_1800293D0.c)
 *     sub_180029AC8 @ 0x180029AC8 (sub_180029AC8.c)
 */

__int64 __fastcall sub_180029B00(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  const wchar_t *v5; // rax
  BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  DWORD v8; // [rsp+50h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = sub_1800293D0(a1, 0, &hKey);
  if ( v4 >= 0 )
  {
    v5 = sub_180029AC8(*(_DWORD *)(a1 + 560));
    v8 = 8;
    v4 = sub_180029148(hKey, v5, v7, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 == 8 )
      {
        v4 = 0;
        *a2 = *(_QWORD *)v7;
      }
      else
      {
        v4 = -1073739509;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
