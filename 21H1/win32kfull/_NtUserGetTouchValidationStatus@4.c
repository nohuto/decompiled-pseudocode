/*
 * XREFs of _NtUserGetTouchValidationStatus@4 @ 0x16494D
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetTouchValidationStatus@4 @ 0x14B414 (__GetTouchValidationStatus@4.c)
 */

int __stdcall NtUserGetTouchValidationStatus(int a1)
{
  int TouchValidationStatus; // esi
  int v2; // edi

  TouchValidationStatus = 0;
  v2 = 0;
  EnterCrit(0, 1);
  if ( !a1 || (v2 = HMValidateHandle(a1, 19)) != 0 )
  {
    TouchValidationStatus = _GetTouchValidationStatus(v2);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit();
  return TouchValidationStatus;
}
