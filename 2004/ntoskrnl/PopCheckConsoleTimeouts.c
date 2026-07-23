/*
 * XREFs of PopCheckConsoleTimeouts @ 0x1408F1BD4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140783E00 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x140712274 (PopDiagTraceInputTimeout.c)
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopDiagTraceDisplayTimeout @ 0x14071257C (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x140760734 (PopGetDisplayTimeout.c)
 */

char PopCheckConsoleTimeouts()
{
  unsigned int v0; // esi
  unsigned int DisplayTimeout; // eax
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8

  PopPrintEx(3u, (__int64)"PopAdaptive: >>>>> Policy parameters change\n");
  v0 = PopConsoleContext;
  DisplayTimeout = PopGetDisplayTimeout(PopConsoleContext);
  v2 = PopInputTimeout;
  v3 = DisplayTimeout;
  if ( !BYTE9(PopConsoleContext) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == DWORD1(PopConsoleContext) )
        goto LABEL_8;
    }
    else
    {
      BYTE9(PopConsoleContext) = 0;
    }
    PopPrintEx(3u, (__int64)"PopAdaptive: Input timeout: %u->%u\n", DWORD1(PopConsoleContext), PopInputTimeout);
    DWORD1(PopConsoleContext) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE9(PopConsoleContext), BYTE8(PopConsoleContext));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_140C20390) = 1;
    BYTE4(qword_140C20360) = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( (_BYTE)xmmword_140C20350 && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (HIDWORD(xmmword_140C20350) - DWORD2(xmmword_140C20350)) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != HIDWORD(PopConsoleContext) )
  {
    PopPrintEx(3u, (__int64)"PopAdaptive: Display timeout: %u->%u\n", HIDWORD(PopConsoleContext), v3);
    HIDWORD(PopConsoleContext) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(
                               v3,
                               BYTE1(xmmword_140C20350),
                               (unsigned __int8)xmmword_140C20350);
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_140C20390) = 1;
  }
  return DisplayTimeout;
}
