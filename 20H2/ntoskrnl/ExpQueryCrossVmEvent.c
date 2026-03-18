/*
 * XREFs of ExpQueryCrossVmEvent @ 0x14095F090
 * Callers:
 *     NtQueryEvent @ 0x1406D0F00 (NtQueryEvent.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x14095EE70 (ExpGetExtensionHostForCrossVmObject.c)
 */

__int64 __fastcall ExpQueryCrossVmEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 ExtensionHostForCrossVmObject; // rax
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(a1, (__int64 *)&v9);
  if ( ExtensionHostForCrossVmObject )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(ExtensionHostForCrossVmObject + 16))(a1, a2, a3);
    ExReleaseExtensionTable(v9);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v7;
}
