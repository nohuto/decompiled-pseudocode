/*
 * XREFs of ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00161A0
 * Callers:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C0015D38 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0015F18 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015166C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _EnumClipboardFormats @ 0x1C0154350 (_EnumClipboardFormats.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EBEC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021ED94 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EF44 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C021F020 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021F12C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C001696C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021E958 (-IsFmtBlocked@@YAHI@Z.c)
 */

struct tagCLIP *__fastcall FindClipFormat(struct tagWINDOWSTATION *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax

  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 16);
    if ( v4 )
    {
      for ( i = *((_DWORD *)a1 + 34); i; --i )
      {
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return (struct tagCLIP *)v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v4 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 880))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return (struct tagCLIP *)v4;
          }
          v8 = PsGetCurrentProcessWin32Process();
          EtwTraceUIPIClipboardError(0LL, v8, a2, *(_QWORD *)(v4 + 20));
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
