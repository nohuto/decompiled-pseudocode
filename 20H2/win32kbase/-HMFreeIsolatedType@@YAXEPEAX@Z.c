/*
 * XREFs of ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0059CC4
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0057A20 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0059DB0 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118CA8 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118DC4 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118EE0 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall HMFreeIsolatedType(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = HMTagToIsolatedType() - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = *((_QWORD *)gpUserTypeIsolation + 3);
        if ( v5 )
          NSInstrumentation::CTypeIsolation<81920,160>::Free(v5, a2);
      }
    }
    else
    {
      v6 = *((_QWORD *)gpUserTypeIsolation + 2);
      if ( v6 )
        NSInstrumentation::CTypeIsolation<86016,336>::Free(v6, a2);
    }
  }
  else
  {
    v7 = *((_QWORD *)gpUserTypeIsolation + 1);
    if ( v7 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v7, a2);
  }
}
