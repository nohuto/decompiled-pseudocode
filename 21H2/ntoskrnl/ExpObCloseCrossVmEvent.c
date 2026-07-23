/*
 * XREFs of ExpObCloseCrossVmEvent @ 0x14095C900
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x14095C8B0 (ExpGetExtensionHostForCrossVmObject.c)
 */

void __fastcall ExpObCloseCrossVmEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  struct _EX_RUNDOWN_REF *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v9);
  if ( ExtensionHostForCrossVmObject )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(ExtensionHostForCrossVmObject + 48))(a1, a2, a3, a4);
    ExReleaseExtensionTable(v9);
  }
}
