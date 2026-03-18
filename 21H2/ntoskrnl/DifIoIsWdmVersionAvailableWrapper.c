/*
 * XREFs of DifIoIsWdmVersionAvailableWrapper @ 0x14060FC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     IoIsWdmVersionAvailable @ 0x140662010 (IoIsWdmVersionAvailable.c)
 */

BOOLEAN __fastcall DifIoIsWdmVersionAvailableWrapper(UCHAR a1, UCHAR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  BOOLEAN result; // al
  _QWORD **v13; // rdi
  _QWORD *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(182);
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
  BYTE9(v15) = a1;
  BYTE8(v15) = a2;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v15);
  }
LABEL_18:
  result = IoIsWdmVersionAvailable(a1, a2);
  BYTE10(v15) = result;
  if ( APIThunkContextById )
  {
    v13 = (_QWORD **)(APIThunkContextById + 6);
    v14 = *v13;
    if ( *v13 != v13 )
    {
      do
      {
        if ( v14 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v14 - 1))(&v15);
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != v13 );
      return BYTE10(v15);
    }
  }
  return result;
}
