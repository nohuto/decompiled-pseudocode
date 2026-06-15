/*
 * XREFs of sub_180009F20 @ 0x180009F20
 * Callers:
 *     sub_1800089D0 @ 0x1800089D0 (sub_1800089D0.c)
 *     sub_18000AFC0 @ 0x18000AFC0 (sub_18000AFC0.c)
 *     sub_18000C694 @ 0x18000C694 (sub_18000C694.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18000E890 @ 0x18000E890 (sub_18000E890.c)
 *     sub_18000ED88 @ 0x18000ED88 (sub_18000ED88.c)
 *     sub_18000FEA0 @ 0x18000FEA0 (sub_18000FEA0.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_180018520 @ 0x180018520 (sub_180018520.c)
 *     sub_180019CA4 @ 0x180019CA4 (sub_180019CA4.c)
 *     sub_180025854 @ 0x180025854 (sub_180025854.c)
 *     sub_18002DD08 @ 0x18002DD08 (sub_18002DD08.c)
 *     sub_18002E9C0 @ 0x18002E9C0 (sub_18002E9C0.c)
 *     sub_18002FC9C @ 0x18002FC9C (sub_18002FC9C.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180009F20(SIZE_T dwBytes)
{
  SIZE_T v2; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v4; // rax
  __int64 v5; // rdx
  LPVOID v6; // rcx
  _QWORD *result; // rax
  HANDLE v8; // rax

  if ( dwBytes >= 0x1000 )
  {
    v2 = dwBytes + 39;
    if ( dwBytes + 39 < dwBytes )
      v2 = -1LL;
    ProcessHeap = GetProcessHeap();
    v4 = HeapAlloc(ProcessHeap, 0, v2);
    v6 = v4;
    if ( v4 )
    {
      result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(result - 1) = v6;
      return result;
    }
    o__invalid_parameter_noinfo_noreturn(0LL, v5);
    __debugbreak();
  }
  if ( !dwBytes )
    return 0LL;
  v8 = GetProcessHeap();
  return HeapAlloc(v8, 0, dwBytes);
}
