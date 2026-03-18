/*
 * XREFs of ?CursorResourcePathToString@InputTraceLogging@@CGPBGPAU_UNICODE_STRING@@PAGI@Z @ 0x142FA4
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 */

unsigned __int16 *__userpurge InputTraceLogging::CursorResourcePathToString@<eax>(
        int a1@<ecx>,
        struct _UNICODE_STRING *a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned __int16 *result; // eax

  if ( !a1 )
    return L"Empty";
  result = *(unsigned __int16 **)(a1 + 4);
  if ( ((unsigned int)result & 0xFFFF0000) == 0 )
  {
    RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104u, L"ResourceID %i", (unsigned __int16)result);
    return &gStrBufSetSystemCursorPath;
  }
  return result;
}
