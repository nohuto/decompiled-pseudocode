/*
 * XREFs of DifCmRegisterCallbackWrapper @ 0x140605F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     CmRegisterCallback @ 0x1408651C0 (CmRegisterCallback.c)
 */

NTSTATUS __fastcall DifCmRegisterCallbackWrapper(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v15; // rdi
  _QWORD *v16; // rbx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+18h]

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(5);
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
  *(_QWORD *)&v17 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v18 + 1) = Function;
  *(_QWORD *)&v18 = Context;
  *((_QWORD *)&v17 + 1) = Cookie;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_18:
  result = CmRegisterCallback(Function, Context, Cookie);
  LODWORD(v19) = result;
  if ( APIThunkContextById )
  {
    v15 = (_QWORD **)(APIThunkContextById + 6);
    v16 = *v15;
    if ( *v15 != v15 )
    {
      do
      {
        if ( v16 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v16 - 1))(&v17);
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != v15 );
      return v19;
    }
  }
  return result;
}
