/*
 * XREFs of __RegisterErrorReportingDialog@8 @ 0x1704ED
 * Callers:
 *     _NtUserRegisterErrorReportingDialog@8 @ 0x1680C1 (_NtUserRegisterErrorReportingDialog@8.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     ?SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z @ 0xC205C (-SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z.c)
 */

BOOL __thiscall _RegisterErrorReportingDialog(_DWORD *this)
{
  int v1; // esi

  v1 = 0;
  if ( !IsWindowBeingDestroyed(this) )
    return SendAsyncSGHOSTINFO();
  return v1;
}
