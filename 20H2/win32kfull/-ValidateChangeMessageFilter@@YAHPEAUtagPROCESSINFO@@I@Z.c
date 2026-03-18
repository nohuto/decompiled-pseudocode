/*
 * XREFs of ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C001A148
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0019E78 (_ChangeWindowMessageFilterEx.c)
 *     _ChangeWindowMessageFilter @ 0x1C001A010 (_ChangeWindowMessageFilter.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateChangeMessageFilter(struct tagPROCESSINFO *a1, int a2)
{
  if ( *((_DWORD *)a1 + 220) <= 0x1000u )
  {
    UserSetLastError(5LL);
    EtwTraceUIPISystemError(a1, 0LL, 3LL);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1LL;
    UserSetLastError(87LL);
  }
  return 0LL;
}
