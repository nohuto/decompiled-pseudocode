/*
 * XREFs of _LdrpCalloutExceptionFilter@4 @ 0x4B334818
 * Callers:
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpIsImageArmadilloProtected@4 @ 0x4B2E760B (_LdrpIsImageArmadilloProtected@4.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __thiscall LdrpCalloutExceptionFilter(int this)
{
  ULONG v1; // esi
  PIMAGE_NT_HEADERS v3; // eax

  v1 = 11;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( v3 && LdrpIsImageArmadilloProtected(v3) )
    v1 = 15;
  RtlReportException(*(PEXCEPTION_RECORD *)this, *(PCONTEXT *)(this + 4), v1);
  return 1;
}
