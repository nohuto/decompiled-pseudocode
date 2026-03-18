/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C00296AC
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vMirrorIncludeNotifyWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0251178;
  if ( qword_1C0251178 )
    return (__int64 (*)(void))qword_1C0251178();
  return result;
}
