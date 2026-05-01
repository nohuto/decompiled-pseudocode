/*
 * XREFs of sub_18002606C @ 0x18002606C
 * Callers:
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002606C(DWORD *a1)
{
  __int64 result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  a1[1] = SystemTimeAsFileTime.dwHighDateTime;
  result = SystemTimeAsFileTime.dwLowDateTime;
  *a1 = SystemTimeAsFileTime.dwLowDateTime;
  return result;
}
