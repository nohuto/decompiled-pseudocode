/*
 * XREFs of DifKeRaiseIrqlToDpcLevelWrapper @ 0x140613EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

unsigned __int8 DifKeRaiseIrqlToDpcLevelWrapper()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(270);
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
  *(_QWORD *)&v13 = ReturnAddressForWrappers;
LABEL_13:
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v13);
  }
LABEL_18:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  BYTE8(v13) = CurrentIrql;
  if ( APIThunkContextById )
  {
    v10 = APIThunkContextById + 6;
    v11 = (__int64 *)APIThunkContextById[6];
    if ( v11 != v10 )
    {
      do
      {
        if ( v11 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v11 - 1))(&v13);
        v11 = (__int64 *)*v11;
      }
      while ( v11 != v10 );
      return BYTE8(v13);
    }
  }
  return CurrentIrql;
}
