/*
 * XREFs of ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0153090
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C000D58C (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideT.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C000DC28 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(char *P)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(P + 48));
  NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
