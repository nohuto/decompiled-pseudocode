/*
 * XREFs of IvtProcessDeviceExceptions @ 0x1409A6508
 * Callers:
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     HalpIommuGetExceptionList @ 0x1404C6B8C (HalpIommuGetExceptionList.c)
 *     IvtAllocateContextTable @ 0x1404D9EA0 (IvtAllocateContextTable.c)
 *     IvtUpdateContextEntry @ 0x1404DB70C (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404DB890 (IvtUpdateExtendedContextEntry.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409A6FE8 (HalpIvtpInitializeReservedDomain.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edi
  unsigned int i; // ebx
  __int64 *ExceptionList; // r14
  __int64 j; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // [rsp+28h] [rbp-70h]
  _DWORD v13[20]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = *(unsigned int **)(a1 + 296);
  v3 = 0;
  for ( i = 0; i < *v2; ++i )
  {
    v3 = HalpIvtpInitializeReservedDomain(a1, &v2[4 * i + 2]);
    if ( v3 < 0 )
      break;
    v2 = *(unsigned int **)(a1 + 296);
  }
  if ( v3 >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( j = *ExceptionList; (__int64 *)j != ExceptionList; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 212) )
      {
        memset(v13, 0, sizeof(v13));
        v7 = *(_QWORD *)(j + 24);
        v13[1] = 0;
        v13[0] = 1;
        result = IvtAllocateContextTable(a1, v7);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        v11 = *(_DWORD *)(j + 24);
        if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
          IvtUpdateExtendedContextEntry(a1, v11, v9, v10, (__int64)v13, v12, 1, 0LL);
        else
          IvtUpdateContextEntry(a1, v11, (__int64)v13, v10, 1, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
