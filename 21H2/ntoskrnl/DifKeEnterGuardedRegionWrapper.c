/*
 * XREFs of DifKeEnterGuardedRegionWrapper @ 0x140612D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

struct _KTHREAD *DifKeEnterGuardedRegionWrapper()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  struct _KTHREAD *result; // rax
  __int64 *v9; // rdi
  __int64 *j; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(248);
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
  v12 = ReturnAddressForWrappers;
LABEL_13:
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int64 *))*(i - 1))(&v12);
  }
LABEL_18:
  result = KeGetCurrentThread();
  --result->SpecialApcDisable;
  if ( APIThunkContextById )
  {
    v9 = APIThunkContextById + 6;
    for ( j = (__int64 *)APIThunkContextById[6]; j != v9; j = (__int64 *)*j )
    {
      result = (struct _KTHREAD *)(j - 2);
      if ( j != (__int64 *)16 )
        result = (struct _KTHREAD *)((__int64 (__fastcall *)(__int64 *))result->Header.WaitListHead.Flink)(&v12);
    }
  }
  return result;
}
