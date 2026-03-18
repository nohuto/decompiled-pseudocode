/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00BDD90
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C0014440 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00BDD60 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0142164 (-Free@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpTypeIsolation;
  v3 = gpTypeIsolation[6];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<913408,3568>::Free(v3, a1);
  return result;
}
