/*
 * XREFs of DifKeAcquireInStackQueuedSpinLockWrapper @ 0x140612280
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifKeAcquireInStackQueuedSpinLockWrapper(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v12; // rdi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  PKSPIN_LOCK v15; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(231);
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
  *(_QWORD *)&v14 = ReturnAddressForWrappers;
LABEL_13:
  v15 = SpinLock;
  *((_QWORD *)&v14 + 1) = LockHandle;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v14);
  }
LABEL_18:
  KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  if ( APIThunkContextById )
  {
    v12 = (_QWORD **)(APIThunkContextById + 6);
    for ( j = *v12; j != v12; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v14);
    }
  }
}
