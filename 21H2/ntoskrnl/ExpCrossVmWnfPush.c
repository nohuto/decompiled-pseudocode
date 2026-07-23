/*
 * XREFs of ExpCrossVmWnfPush @ 0x14095C820
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpNtDeleteWnfStateData @ 0x1407CD97C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int64 ExtensionTable; // rax
  unsigned int v11; // ebx

  v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( a2 )
    v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  ExtensionTable = ExGetExtensionTable(v6);
  if ( ExtensionTable )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))(ExtensionTable + 112))(
            0LL,
            a2,
            a3,
            a4,
            a5,
            a6);
    ExReleaseExtensionTable(v6);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
