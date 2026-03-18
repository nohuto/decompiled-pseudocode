/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001EDB0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0018DF0 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C001CBFC (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013FAC8 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(int a1)
{
  _QWORD *v2; // rbx

  if ( gpTypeIsolation[6] )
    v2 = (_QWORD *)NSInstrumentation::CTypeIsolation<913408,3568>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return 0LL;
  if ( !a1 && !AcquireReferenceCountedObjectHandle(1u, v2, v2 + 443) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>((__int64)v2);
    return 0LL;
  }
  return (struct PDEV *)v2;
}
