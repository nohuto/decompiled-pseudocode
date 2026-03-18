/*
 * XREFs of hfontCreate @ 0x1C0046D7C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall hfontCreate(__int64 a1, __int64 a2))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  result = qword_1C0257668;
  if ( qword_1C0257668 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0257668(a1, a2, 2LL);
  return result;
}
