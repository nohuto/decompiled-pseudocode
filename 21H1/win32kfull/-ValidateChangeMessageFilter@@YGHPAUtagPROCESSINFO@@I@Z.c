/*
 * XREFs of ?ValidateChangeMessageFilter@@YGHPAUtagPROCESSINFO@@I@Z @ 0x7FFEC
 * Callers:
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall ValidateChangeMessageFilter(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 496) <= 0x1000u )
  {
    UserSetLastError(5);
    EtwTraceUIPISystemError(a1, 0, 3);
  }
  else
  {
    if ( !HIWORD(a2) )
      return 1;
    UserSetLastError(87);
  }
  return 0;
}
