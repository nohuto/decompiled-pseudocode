/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C0014440
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C2650 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01416B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0014A0C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00BDD90 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0141F90 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(int a1)
{
  __int64 v2; // rbx

  if ( gpTypeIsolation[6] )
    v2 = NSInstrumentation::CTypeIsolation<913408,3568>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return 0LL;
  if ( !a1 && !(unsigned __int8)AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 3544) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(v2);
    return 0LL;
  }
  return (struct PDEV *)v2;
}
