/*
 * XREFs of DifCcFastCopyWriteWrapper @ 0x140605C60
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

char __fastcall DifCcFastCopyWriteWrapper(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *v16; // rax
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v4 = a2;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(3);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v9 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v9, v8, v11, v12);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v21 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v22 + 1) = a1;
  *(_QWORD *)&v22 = __PAIR64__(v4, a3);
  *((_QWORD *)&v21 + 1) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v21);
  }
LABEL_18:
  v20 = v4;
  LOBYTE(v16) = CcCopyWriteEx(a1, &v20, a3, 1, a4, 0LL);
  if ( APIThunkContextById )
  {
    v17 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      v16 = j - 2;
      if ( j != (_QWORD *)16 )
        LOBYTE(v16) = ((__int64 (__fastcall *)(__int128 *))v16[1])(&v21);
    }
  }
  return (char)v16;
}
