/*
 * XREFs of DifMmFreePagesFromMdlWrapper @ 0x140616FD0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 *__fastcall DifMmFreePagesFromMdlWrapper(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 *result; // rax
  __int64 *v11; // rdi
  __int64 *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(328);
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
  *(_QWORD *)&v13 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v13 + 1) = BugCheckParameter2;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v13);
  }
LABEL_18:
  result = (__int64 *)MiFreePagesFromMdl(BugCheckParameter2, 0);
  if ( APIThunkContextById )
  {
    v11 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v11; j = (__int64 *)*j )
    {
      result = j - 2;
      if ( j != (__int64 *)16 )
        result = (__int64 *)((__int64 (__fastcall *)(__int128 *))result[1])(&v13);
    }
  }
  return result;
}
