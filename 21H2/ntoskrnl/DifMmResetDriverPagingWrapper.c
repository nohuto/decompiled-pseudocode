/*
 * XREFs of DifMmResetDriverPagingWrapper @ 0x1406176B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 */

void __fastcall DifMmResetDriverPagingWrapper(PVOID AddressWithinSection)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 *v10; // rdi
  __int64 *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(342);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v3, v2, v5, v6);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v12 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v12 + 1) = AddressWithinSection;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v12);
  }
LABEL_18:
  MmResetDriverPaging(AddressWithinSection);
  if ( APIThunkContextById )
  {
    v10 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v10; j = (__int64 *)*j )
    {
      if ( j != (__int64 *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v12);
    }
  }
}
