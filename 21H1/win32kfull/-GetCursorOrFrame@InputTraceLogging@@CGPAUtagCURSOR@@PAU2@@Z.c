/*
 * XREFs of ?GetCursorOrFrame@InputTraceLogging@@CGPAUtagCURSOR@@PAU2@@Z @ 0x1430FC
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__thiscall InputTraceLogging::GetCursorOrFrame(int this)
{
  if ( (*(_BYTE *)(this + 44) & 8) != 0 )
    return **(struct tagCURSOR ***)(this + 56);
  else
    return (struct tagCURSOR *)this;
}
