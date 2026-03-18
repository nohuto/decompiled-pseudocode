/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C008622C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C0086258 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(P);
  ExFreePoolWithTag(P, 0);
}
