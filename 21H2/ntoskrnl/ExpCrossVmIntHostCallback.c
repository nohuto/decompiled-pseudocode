/*
 * XREFs of ExpCrossVmIntHostCallback @ 0x14095C750
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall ExpCrossVmIntHostCallback(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  int (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // rax
  int (__fastcall **v4)(_QWORD, _QWORD, _QWORD); // rdi
  void (__fastcall *v5)(__int64 (__fastcall *)(__int64, __int64, __int64 *, int, __int64, unsigned int), _QWORD); // rax
  void (__fastcall *v6)(__int64 (__fastcall *)(__int64, __int64, __int64 *, int, __int64, unsigned int), __int64); // rax

  if ( a1 == 1 )
  {
    v2 = *a2;
    ExtensionTable = (int (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable(*a2);
    v4 = ExtensionTable;
    if ( ExtensionTable )
    {
      if ( (*ExtensionTable)(ExpObCloseCrossVmEvent, ExpObDeleteCrossVmEvent, &ExCrossVmEventObjectType) >= 0
        && ((int (__fastcall **)(__int64 (__fastcall *)(), __int64 (__fastcall *)(), POBJECT_TYPE *))v4)[8](
             ExpObCloseCrossVmMutant,
             ExpObDeleteCrossVmMutant,
             &ExCrossVmMutantObjectType) >= 0 )
      {
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest )
        {
          v5 = (void (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64 *, int, __int64, unsigned int), _QWORD))v4[16];
          if ( v5 )
            v5(ExWnfCrossVmCallback, 0LL);
        }
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot )
        {
          v6 = (void (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64 *, int, __int64, unsigned int), __int64))v4[16];
          if ( v6 )
            v6(ExWnfCrossVmCallback, 1LL);
        }
      }
      ExReleaseExtensionTable(v2);
    }
  }
}
