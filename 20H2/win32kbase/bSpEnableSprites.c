/*
 * XREFs of bSpEnableSprites @ 0x1C00BD1B8
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00C1F50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*bSpEnableSprites())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024F2B8;
  if ( qword_1C024F2B8 )
    return (__int64 (*)(void))qword_1C024F2B8();
  return result;
}
