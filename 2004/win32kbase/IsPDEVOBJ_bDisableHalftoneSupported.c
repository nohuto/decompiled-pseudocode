/*
 * XREFs of IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00BD934
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00BF0A0 (bDynamicProcessAllDriverRealizations.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C2650 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPDEVOBJ_bDisableHalftoneSupported()
{
  if ( qword_1C02515D0 )
    return qword_1C02515D0();
  else
    return 3221225659LL;
}
