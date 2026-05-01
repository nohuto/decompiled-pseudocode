/*
 * XREFs of sub_1800029F0 @ 0x1800029F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002724 @ 0x180002724 (sub_180002724.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800029F0(__int64 a1)
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  sub_180002724((__int64)pExceptionObject, a1);
  throw (wil::ResultException *)pExceptionObject;
}
