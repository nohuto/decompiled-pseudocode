/*
 * XREFs of DifZwDeleteBootEntryWrapper @ 0x14061F510
 * Callers:
 *     <none>
 * Callees:
 *     ZwDeleteBootEntry @ 0x14041D220 (ZwDeleteBootEntry.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifZwDeleteBootEntryWrapper(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(517);
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
  DWORD2(v13) = a1;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v13);
  }
LABEL_18:
  result = ZwDeleteBootEntry(a1, v2);
  HIDWORD(v13) = result;
  if ( APIThunkContextById )
  {
    v11 = APIThunkContextById + 6;
    v12 = (__int64 *)APIThunkContextById[6];
    if ( v12 != v11 )
    {
      do
      {
        if ( v12 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v12 - 1))(&v13);
        v12 = (__int64 *)*v12;
      }
      while ( v12 != v11 );
      return HIDWORD(v13);
    }
  }
  return result;
}
