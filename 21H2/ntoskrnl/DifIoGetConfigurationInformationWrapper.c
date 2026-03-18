/*
 * XREFs of DifIoGetConfigurationInformationWrapper @ 0x14060EFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 *     IoGetConfigurationInformation @ 0x140811D00 (IoGetConfigurationInformation.c)
 */

PCONFIGURATION_INFORMATION DifIoGetConfigurationInformationWrapper()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  PCONFIGURATION_INFORMATION result; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v11 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(164);
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
  *(_QWORD *)&v11 = ReturnAddressForWrappers;
LABEL_13:
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v11);
  }
LABEL_18:
  result = IoGetConfigurationInformation();
  *((_QWORD *)&v11 + 1) = result;
  if ( APIThunkContextById )
  {
    v9 = APIThunkContextById + 6;
    v10 = (__int64 *)APIThunkContextById[6];
    if ( v10 != v9 )
    {
      do
      {
        if ( v10 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v10 - 1))(&v11);
        v10 = (__int64 *)*v10;
      }
      while ( v10 != v9 );
      return (PCONFIGURATION_INFORMATION)*((_QWORD *)&v11 + 1);
    }
  }
  return result;
}
