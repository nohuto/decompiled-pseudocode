/*
 * XREFs of vEnableSynchronize @ 0x1C00BD194
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00C1F50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall vEnableSynchronize(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C024F2C8;
  if ( qword_1C024F2C8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C024F2C8(a1);
  return result;
}
