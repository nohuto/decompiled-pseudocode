/*
 * XREFs of IvtProcessDeviceExceptions @ 0x1409AB0B8
 * Callers:
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HalpIommuGetExceptionList @ 0x1404CC1AC (HalpIommuGetExceptionList.c)
 *     IvtAllocateContextTable @ 0x1404DF590 (IvtAllocateContextTable.c)
 *     IvtUpdateContextEntry @ 0x1404E0DFC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 *     HalpIvtpInitializeReservedDomain @ 0x1409ABBD8 (HalpIvtpInitializeReservedDomain.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edi
  unsigned int v4; // ebx
  __int64 *ExceptionList; // r14
  __int64 j; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-9h] BYREF
  int i; // [rsp+50h] [rbp-1h]
  _DWORD v15[20]; // [rsp+58h] [rbp+7h] BYREF

  memset(v15, 0, sizeof(v15));
  v2 = *(unsigned int **)(a1 + 296);
  v3 = 0;
  v13 = 0LL;
  v4 = 0;
  for ( i = 0; v4 < *v2; ++v4 )
  {
    v3 = HalpIvtpInitializeReservedDomain(a1, &v2[4 * v4 + 2]);
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
        memset(v15, 0, sizeof(v15));
        v7 = *(_QWORD *)(j + 24);
        v15[1] = 0;
        v15[0] = 1;
        result = IvtAllocateContextTable(a1, v7);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        v11 = *(_DWORD *)(j + 24);
        i = 0;
        v13 = v11 | 0x100000000LL;
        if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
          IvtUpdateExtendedContextEntry(a1, (unsigned int *)&v13, v9, v10, (__int64)v15, v12, 1, 0LL);
        else
          IvtUpdateContextEntry(a1, (unsigned int *)&v13, (__int64)v15, v10, 1, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
