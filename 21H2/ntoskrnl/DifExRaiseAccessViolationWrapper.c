/*
 * XREFs of DifExRaiseAccessViolationWrapper @ 0x140608EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 */

void __noreturn DifExRaiseAccessViolationWrapper()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *v7; // rdi
  __int64 *i; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(56);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v1 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
  }
  else
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_12:
      v10 = ReturnAddressForWrappers;
LABEL_13:
      v7 = APIThunkContextById + 4;
      for ( i = (__int64 *)APIThunkContextById[4]; i != v7; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          ((void (__fastcall *)(__int64 *))*(i - 1))(&v10);
      }
LABEL_18:
      ExRaiseAccessViolation();
    }
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
  }
  ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v1, v0, v3, v4);
  goto LABEL_12;
}
