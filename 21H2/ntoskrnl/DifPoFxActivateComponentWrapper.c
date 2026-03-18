/*
 * XREFs of DifPoFxActivateComponentWrapper @ 0x140618F80
 * Callers:
 *     <none>
 * Callees:
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

char __fastcall DifPoFxActivateComponentWrapper(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD *v14; // rax
  _QWORD **v15; // rdi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  v5 = BugCheckParameter3;
  APIThunkContextById = DifGetAPIThunkContextById(368);
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
  *(_QWORD *)&v18 = ReturnAddressForWrappers;
LABEL_13:
  v19 = BugCheckParameter2;
  *((_QWORD *)&v18 + 1) = __PAIR64__(v5, a3);
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_18:
  LOBYTE(v14) = PoFxActivateComponent(BugCheckParameter2, v5, a3);
  if ( APIThunkContextById )
  {
    v15 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v15; j != v15; j = (_QWORD *)*j )
    {
      v14 = j - 2;
      if ( j != (_QWORD *)16 )
        LOBYTE(v14) = ((__int64 (__fastcall *)(__int128 *))v14[1])(&v18);
    }
  }
  return (char)v14;
}
