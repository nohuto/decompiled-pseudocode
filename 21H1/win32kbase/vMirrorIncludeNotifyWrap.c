/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C00199FC
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vMirrorIncludeNotifyWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257138;
  if ( qword_1C0257138 )
    return (__int64 (*)(void))qword_1C0257138();
  return result;
}
