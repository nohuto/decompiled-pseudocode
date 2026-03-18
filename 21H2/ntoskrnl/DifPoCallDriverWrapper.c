/*
 * XREFs of DifPoCallDriverWrapper @ 0x140618E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifPoCallDriverWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64))
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v17; // rdi
  _QWORD *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(367);
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
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v20 + 1) = a1;
  *(_QWORD *)&v20 = a2;
  *((_QWORD *)&v19 + 1) = a3;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_18:
  result = a4(a1, a2, a3);
  LODWORD(v21) = result;
  if ( APIThunkContextById )
  {
    v17 = (_QWORD **)(APIThunkContextById + 6);
    v18 = *v17;
    if ( *v17 != v17 )
    {
      do
      {
        if ( v18 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v18 - 1))(&v19);
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v17 );
      return (unsigned int)v21;
    }
  }
  return result;
}
