/*
 * XREFs of DifRtlWriteRegistryValueWrapper @ 0x14061C4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall DifRtlWriteRegistryValueWrapper(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
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
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(434);
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
  *(_QWORD *)&v21 = ReturnAddressForWrappers;
LABEL_13:
  *(_QWORD *)&v22 = ValueData;
  DWORD2(v21) = ValueLength;
  LODWORD(v24) = RelativeTo;
  *((_QWORD *)&v23 + 1) = Path;
  *(_QWORD *)&v23 = ValueName;
  DWORD2(v22) = ValueType;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v21);
  }
LABEL_18:
  result = RtlWriteRegistryValue(RelativeTo, Path, ValueName, ValueType, ValueData, ValueLength);
  HIDWORD(v24) = result;
  if ( APIThunkContextById )
  {
    v19 = (_QWORD **)(APIThunkContextById + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v20 - 1))(&v21);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return HIDWORD(v24);
    }
  }
  return result;
}
