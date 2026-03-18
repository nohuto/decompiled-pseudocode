/*
 * XREFs of DifDriverStartIoWrapper @ 0x1406063E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifDriverStartIoWrapper(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v13; // rdi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435485);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v5 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v9 & 0x18) == 0 )
  {
    if ( (v9 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v5, v4, v7, v8);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v15 = ReturnAddressForWrappers;
LABEL_13:
  v16 = a1;
  *((_QWORD *)&v15 + 1) = a2;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v15);
  }
LABEL_18:
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
                                                       + 8LL))(
             a1,
             a2);
  if ( APIThunkContextById )
  {
    v13 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v13; j != v13; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v15);
    }
  }
  return result;
}
