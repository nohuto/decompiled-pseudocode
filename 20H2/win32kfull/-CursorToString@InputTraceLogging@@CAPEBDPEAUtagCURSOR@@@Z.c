/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01D36F8
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C002B2A8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     LockQCursor @ 0x1C00FC500 (LockQCursor.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01D36C8 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  struct tagCURSOR **i; // rax

  v5 = 0LL;
  if ( !a1 )
    return "Empty";
  v7 = 0LL;
  for ( i = (struct tagCURSOR **)&gasyscur[1]; *i != a1; i += 69 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( ++v7 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v5, v7, (__int64)a1, a4);
}
