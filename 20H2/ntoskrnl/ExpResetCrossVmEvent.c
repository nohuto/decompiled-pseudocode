/*
 * XREFs of ExpResetCrossVmEvent @ 0x14095F158
 * Callers:
 *     NtClearEvent @ 0x1406B2DF0 (NtClearEvent.c)
 *     NtResetEvent @ 0x1406D1170 (NtResetEvent.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x14095EE70 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpResetCrossVmEvent(__int64 a1, __int64 a2)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  unsigned int v5; // ebx
  struct _EX_RUNDOWN_REF *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v7);
  if ( ExtensionHostForCrossVmObject )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(ExtensionHostForCrossVmObject + 32))(a1, a2);
    ExReleaseExtensionTable(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
