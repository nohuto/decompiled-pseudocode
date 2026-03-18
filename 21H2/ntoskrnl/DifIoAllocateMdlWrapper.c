/*
 * XREFs of DifIoAllocateMdlWrapper @ 0x14060CCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifIoAllocateMdlWrapper(
        __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, _QWORD, __int64, __int64, __int64, __int64))
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int128 v24; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(133);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v12 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) == 0 )
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v22 = ReturnAddressForWrappers;
LABEL_13:
  *(_QWORD *)&v23 = a5;
  *((_QWORD *)&v22 + 1) = a6;
  *(_QWORD *)&v24 = a1;
  HIDWORD(v23) = a2;
  BYTE9(v23) = a3;
  BYTE8(v23) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v22);
  }
LABEL_18:
  LOBYTE(v15) = a4;
  LOBYTE(v14) = a3;
  result = a7(a1, a2, v14, v15, a5, a6);
  *((_QWORD *)&v24 + 1) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v21 - 1))(&v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return *((_QWORD *)&v24 + 1);
    }
  }
  return result;
}
