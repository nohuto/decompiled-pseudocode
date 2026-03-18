/*
 * XREFs of DifKeLeaveGuardedRegionWrapper @ 0x140613B00
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

char DifKeLeaveGuardedRegionWrapper()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  __int64 *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(264);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v1 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v5 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v5 & 0x18) == 0 )
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v1, v0, v3, v4);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v14 = ReturnAddressForWrappers;
LABEL_13:
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v14);
  }
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    CurrentThread = (struct _KTHREAD *)((char *)CurrentThread + 152);
    if ( *(struct _KTHREAD **)&CurrentThread->Header.Lock != CurrentThread )
      LOBYTE(CurrentThread) = KiCheckForKernelApcDelivery();
  }
  if ( APIThunkContextById )
  {
    v10 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v10; j = (__int64 *)*j )
    {
      CurrentThread = (struct _KTHREAD *)(j - 2);
      if ( j != (__int64 *)16 )
        LOBYTE(CurrentThread) = ((__int64 (__fastcall *)(__int64 *))CurrentThread->Header.WaitListHead.Flink)(&v14);
    }
  }
  return (char)CurrentThread;
}
