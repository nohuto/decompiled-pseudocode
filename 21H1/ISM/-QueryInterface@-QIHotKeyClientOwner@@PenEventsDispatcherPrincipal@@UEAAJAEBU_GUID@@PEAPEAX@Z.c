/*
 * XREFs of ?QueryInterface@?QIHotKeyClientOwner@@PenEventsDispatcherPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801340F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _QueryInterface__QIHotKeyClientOwner__PenEventsDispatcherPrincipal__UEAAJAEBU_GUID__PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v5 = *a2 - *(_QWORD *)&GUID_42237e99_10a8_4e8f_bc5c_d498afe7bd12.Data1;
  if ( *a2 == *(_QWORD *)&GUID_42237e99_10a8_4e8f_bc5c_d498afe7bd12.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_42237e99_10a8_4e8f_bc5c_d498afe7bd12.Data4;
  if ( v5 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
      goto LABEL_14;
    v7 = *a2 - *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1;
    if ( *a2 == *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1 )
      v7 = a2[1] - *(_QWORD *)GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data4;
    if ( v7 )
      v8 = 0LL;
    else
LABEL_14:
      v8 = (a1 - 48) & -(__int64)(a1 != 56);
    *a3 = v8;
    if ( v8 )
      (**(void (__fastcall ***)(__int64))(a1 - 56))(a1 - 56);
    else
      return (unsigned int)-2147467262;
    return v3;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 - 32));
    *a3 = a1 & -(__int64)(a1 != 56);
    return 0LL;
  }
}
