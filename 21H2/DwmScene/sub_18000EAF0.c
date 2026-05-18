/*
 * XREFs of sub_18000EAF0 @ 0x18000EAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BED4 @ 0x18000BED4 (sub_18000BED4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn sub_18000EAF0()
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  sub_18000BED4((__int64)pExceptionObject);
  throw (wil::ResultException *)pExceptionObject;
}
