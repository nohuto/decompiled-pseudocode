/*
 * XREFs of ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01D38AC
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__fastcall InputTraceLogging::GetCursorOrFrame(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)**((_QWORD **)a1 + 12);
  else
    return a1;
}
