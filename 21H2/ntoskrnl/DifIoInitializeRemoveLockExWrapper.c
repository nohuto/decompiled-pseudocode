/*
 * XREFs of DifIoInitializeRemoveLockExWrapper @ 0x14060F8E0
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x14025A9C0 (IoInitializeRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifIoInitializeRemoveLockExWrapper(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(178);
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
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_13:
  *((_QWORD *)&v19 + 1) = __PAIR64__(HighWatermark, RemlockSize);
  *((_QWORD *)&v20 + 1) = Lock;
  *(_QWORD *)&v20 = __PAIR64__(AllocateTag, MaxLockedMinutes);
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_18:
  IoInitializeRemoveLockEx(Lock, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
  if ( APIThunkContextById )
  {
    v17 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v19);
    }
  }
}
