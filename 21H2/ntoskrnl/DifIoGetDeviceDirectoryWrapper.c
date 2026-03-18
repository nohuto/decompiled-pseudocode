/*
 * XREFs of DifIoGetDeviceDirectoryWrapper @ 0x14060F0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 */

__int64 __fastcall DifIoGetDeviceDirectoryWrapper(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v18; // rdi
  _QWORD *v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(165);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v10 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) == 0 )
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v12, v13);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v20 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v20 + 1) = a5;
  *(_QWORD *)&v22 = a1;
  *((_QWORD *)&v21 + 1) = __PAIR64__(a2, a3);
  *(_QWORD *)&v21 = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_18:
  result = IoGetDeviceDirectory(a1, a2, a3, a4, a5);
  DWORD2(v22) = result;
  if ( APIThunkContextById )
  {
    v18 = (_QWORD **)(APIThunkContextById + 6);
    v19 = *v18;
    if ( *v18 != v18 )
    {
      do
      {
        if ( v19 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v19 - 1))(&v20);
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      return DWORD2(v22);
    }
  }
  return result;
}
