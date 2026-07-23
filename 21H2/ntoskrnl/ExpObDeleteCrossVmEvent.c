/*
 * XREFs of ExpObDeleteCrossVmEvent @ 0x14095C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x14095C8B0 (ExpGetExtensionHostForCrossVmObject.c)
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
