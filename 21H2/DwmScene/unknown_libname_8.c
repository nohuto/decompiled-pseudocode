/*
 * XREFs of unknown_libname_8 @ 0x18011A680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011A60C @ 0x18011A60C (sub_18011A60C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Microsoft VisualC v7/14 64bit runtime
void __noreturn unknown_libname_8()
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_18011A60C((__int64)pExceptionObject, (__int64)"Not implemented yet");
  throw (std::logic_error *)pExceptionObject;
}
