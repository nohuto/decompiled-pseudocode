/*
 * XREFs of DifMmMapIoSpaceWrapper @ 0x1406172F0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpace @ 0x140215300 (MmMapIoSpace.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

PVOID __fastcall DifMmMapIoSpaceWrapper(
        PHYSICAL_ADDRESS PhysicalAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *APIThunkContextById; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  PVOID result; // rax
  __int64 *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  PVOID v18; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+18h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(333);
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
  *((PHYSICAL_ADDRESS *)&v17 + 1) = PhysicalAddress;
  *(_QWORD *)&v17 = NumberOfBytes;
  DWORD2(v16) = CacheType;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_18:
  result = MmMapIoSpace(PhysicalAddress, NumberOfBytes, CacheType);
  v18 = result;
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
