/*
 * XREFs of DifKeSetTimerWrapper @ 0x140615930
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

char __fastcall DifKeSetTimerWrapper(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  char result; // al
  __int64 *v15; // rbx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(301);
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
  *((_QWORD *)&v17 + 1) = a1;
  *(_QWORD *)&v17 = a2;
  *((_QWORD *)&v16 + 1) = a3;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_18:
  result = KiSetTimerEx(a1, a2, 0, 0, a3);
  LOBYTE(v18) = result;
  if ( APIThunkContextById )
  {
    v15 = (__int64 *)APIThunkContextById[6];
    if ( v15 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v15 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v15 - 1))(&v16);
        v15 = (__int64 *)*v15;
      }
      while ( v15 != APIThunkContextById + 6 );
      return v18;
    }
  }
  return result;
}
