/*
 * XREFs of sub_180016294 @ 0x180016294
 * Callers:
 *     sub_180010F18 @ 0x180010F18 (sub_180010F18.c)
 *     sub_180011568 @ 0x180011568 (sub_180011568.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 * Callees:
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180016294(__int64 a1, int a2)
{
  DWORD CurrentProcessId; // eax
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+38h] [rbp-20h]

  v7[0] = 32;
  v7[1] = 0x4000;
  CurrentProcessId = GetCurrentProcessId();
  v5 = *(unsigned int *)(a1 + 192);
  v8 = CurrentProcessId;
  v9 = a2;
  return MMDevAPI_12(v7, v5);
}
