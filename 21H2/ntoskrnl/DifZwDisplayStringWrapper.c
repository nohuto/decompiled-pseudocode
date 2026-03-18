/*
 * XREFs of DifZwDisplayStringWrapper @ 0x14061FB10
 * Callers:
 *     <none>
 * Callees:
 *     ZwDisplayString @ 0x14041D380 (ZwDisplayString.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwDisplayStringWrapper(PUNICODE_STRING String)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v11; // rdi
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(522);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v3, v2, v5, v6);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v13 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v13 + 1) = String;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v13);
  }
LABEL_18:
  result = ZwDisplayString(String);
  LODWORD(v14) = result;
  if ( APIThunkContextById )
  {
    v11 = (_QWORD **)(APIThunkContextById + 6);
    v12 = *v11;
    if ( *v11 != v11 )
    {
      do
      {
        if ( v12 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v12 - 1))(&v13);
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != v11 );
      return v14;
    }
  }
  return result;
}
