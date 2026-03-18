/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x14095EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x14095EE70 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObDeleteCrossVmEvent(__int64 a1)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  struct _EX_RUNDOWN_REF *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v3);
  if ( ExtensionHostForCrossVmObject )
  {
    (*(void (__fastcall **)(__int64))(ExtensionHostForCrossVmObject + 56))(a1);
    ExReleaseExtensionTable(v3);
  }
}
