/*
 * XREFs of DifZwQueryValueKeyWrapper @ 0x140625D40
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwQueryValueKeyWrapper(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  _QWORD v21[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  memset(v21, 0, sizeof(v21));
  APIThunkContextById = DifGetAPIThunkContextById(602);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v13, v14);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v21[0] = ReturnAddressForWrappers;
LABEL_13:
  LODWORD(v21[2]) = Length;
  v21[1] = ResultLength;
  v21[6] = KeyHandle;
  v21[5] = ValueName;
  LODWORD(v21[4]) = KeyValueInformationClass;
  v21[3] = KeyValueInformation;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v21);
  }
LABEL_18:
  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValueInformationClass, KeyValueInformation, Length, ResultLength);
  LODWORD(v21[7]) = result;
  if ( APIThunkContextById )
  {
    v19 = (_QWORD **)(APIThunkContextById + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v20 - 1))(v21);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return v21[7];
    }
  }
  return result;
}
