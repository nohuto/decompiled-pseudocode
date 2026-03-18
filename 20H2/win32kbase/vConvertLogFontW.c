/*
 * XREFs of vConvertLogFontW @ 0x1C00B5CD8
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vConvertLogFontW())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024F698;
  if ( qword_1C024F698 )
    return (__int64 (*)(void))qword_1C024F698();
  return result;
}
