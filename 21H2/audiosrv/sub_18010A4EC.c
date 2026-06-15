/*
 * XREFs of sub_18010A4EC @ 0x18010A4EC
 * Callers:
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_18010B0CC @ 0x18010B0CC (sub_18010B0CC.c)
 * Callees:
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 */

__int64 __fastcall sub_18010A4EC(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    sub_1800BB330(
      (int)retaddr,
      143,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      -2005139200);
    __debugbreak();
  }
  *a2 = *(_DWORD *)(v2 + 20) - *(_DWORD *)(v2 + 24);
  return 0LL;
}
