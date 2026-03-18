/*
 * XREFs of DifIoSetShareAccessWrapper @ 0x140611170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     IoSetShareAccess @ 0x14074B8F0 (IoSetShareAccess.c)
 */

void __fastcall DifIoSetShareAccessWrapper(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(213);
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
  *(_QWORD *)&v18 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v19 + 1) = __PAIR64__(DesiredAccess, DesiredShareAccess);
  *(_QWORD *)&v19 = FileObject;
  *((_QWORD *)&v18 + 1) = ShareAccess;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_18:
  IoSetShareAccess(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess);
  if ( APIThunkContextById )
  {
    v16 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v16; j != v16; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v18);
    }
  }
}
