/*
 * XREFs of DifIoReleaseRemoveLockExWrapper @ 0x140610A00
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifIoReleaseRemoveLockExWrapper(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(199);
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
  *(_QWORD *)&v16 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v17 + 1) = RemoveLock;
  *(_QWORD *)&v17 = Tag;
  DWORD2(v16) = RemlockSize;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_18:
  IoReleaseRemoveLockEx(RemoveLock, Tag, RemlockSize);
  if ( APIThunkContextById )
  {
    v14 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v16);
    }
  }
}
