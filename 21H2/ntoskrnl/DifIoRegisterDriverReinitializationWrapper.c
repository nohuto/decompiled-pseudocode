/*
 * XREFs of DifIoRegisterDriverReinitializationWrapper @ 0x140610690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     IoRegisterDriverReinitialization @ 0x140855570 (IoRegisterDriverReinitialization.c)
 */

void __fastcall DifIoRegisterDriverReinitializationWrapper(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(193);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v7 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v11 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v11 & 0x18) == 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v7, v6, v9, v10);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v16 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v17 + 1) = DriverObject;
  *(_QWORD *)&v17 = DriverReinitializationRoutine;
  *((_QWORD *)&v16 + 1) = Context;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_18:
  IoRegisterDriverReinitialization(DriverObject, DriverReinitializationRoutine, Context);
  if ( APIThunkContextById )
  {
    v14 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v16);
    }
  }
}
