/*
 * XREFs of unknown_libname_8 @ 0x180114DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180114D3C @ 0x180114D3C (sub_180114D3C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Microsoft VisualC v7/14 64bit runtime
void __noreturn unknown_libname_8()
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_180114D3C((__int64)pExceptionObject, (__int64)"Not implemented yet");
  throw (std::logic_error *)pExceptionObject;
}
