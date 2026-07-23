/*
 * XREFs of _LdrpInitializeProcessWrapperFilter@8 @ 0x4B332F56
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __fastcall LdrpInitializeProcessWrapperFilter(const void **a1, _DWORD *a2)
{
  char v2; // al

  v2 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      2011,
      (int)"LdrpInitializeProcessWrapperFilter",
      0,
      "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v2 = ShowSnaps;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  *a2 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) >= 0;
  return 1;
}
