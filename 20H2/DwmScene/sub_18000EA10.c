/*
 * XREFs of sub_18000EA10 @ 0x18000EA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BE14 @ 0x18000BE14 (sub_18000BE14.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn sub_18000EA10()
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  sub_18000BE14((__int64)pExceptionObject);
  throw (wil::ResultException *)pExceptionObject;
}
