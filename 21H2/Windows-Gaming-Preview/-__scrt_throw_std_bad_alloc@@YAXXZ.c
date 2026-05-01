/*
 * XREFs of ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180045544
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180044B4C (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x180045450 (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1800456F8 (_CxxThrowException_0.c)
 */

void __noreturn __scrt_throw_std_bad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
