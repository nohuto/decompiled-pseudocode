/*
 * XREFs of DifMmAllocatePagesForMdlWrapper @ 0x140616B60
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdl @ 0x1403D8690 (MmAllocatePagesForMdl.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

PMDL __fastcall DifMmAllocatePagesForMdlWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *APIThunkContextById; // r15
  int v13; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  PMDL result; // rax
  __int64 *v17; // rbx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(319);
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
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v9, v8, v10, v11);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v18 = ReturnAddressForWrappers;
LABEL_13:
  *(PHYSICAL_ADDRESS *)&v20 = LowAddress;
  *((PHYSICAL_ADDRESS *)&v19 + 1) = HighAddress;
  *(PHYSICAL_ADDRESS *)&v19 = SkipBytes;
  *((_QWORD *)&v18 + 1) = TotalBytes;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_18:
  result = MmAllocatePagesForMdl(LowAddress, HighAddress, SkipBytes, TotalBytes);
  *((_QWORD *)&v20 + 1) = result;
  if ( APIThunkContextById )
  {
    v17 = (__int64 *)APIThunkContextById[6];
    if ( v17 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v17 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v17 - 1))(&v18);
        v17 = (__int64 *)*v17;
      }
      while ( v17 != APIThunkContextById + 6 );
      return (PMDL)*((_QWORD *)&v20 + 1);
    }
  }
  return result;
}
