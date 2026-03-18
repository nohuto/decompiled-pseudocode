/*
 * XREFs of ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008E314
 * Callers:
 *     xxxQueryInformationThread @ 0x1C007CDC8 (xxxQueryInformationThread.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D344 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C008D3F0 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C008E238 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     zzzCalcStartCursorHide @ 0x1C00CC4C0 (zzzCalcStartCursorHide.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00EA8B0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015D94C (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015DD48 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C015E2D8 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02B9CF8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

AutoSharedPushLock *__fastcall AutoSharedPushLock::AutoSharedPushLock(
        AutoSharedPushLock *this,
        struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(a2);
  return this;
}
