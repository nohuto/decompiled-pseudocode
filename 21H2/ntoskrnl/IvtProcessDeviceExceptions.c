/*
 * XREFs of IvtProcessDeviceExceptions @ 0x140A64544
 * Callers:
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuGetExceptionList @ 0x1405180B8 (HalpIommuGetExceptionList.c)
 *     IvtAllocateTranslationStructures @ 0x14052DEFC (IvtAllocateTranslationStructures.c)
 *     IvtUpdateTranslationStructures @ 0x140530270 (IvtUpdateTranslationStructures.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140A650A8 (HalpIvtpInitializeReservedDomain.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edi
  unsigned int i; // ebx
  __int64 *ExceptionList; // r14
  __int64 j; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+38h] [rbp-A0h]
  _DWORD v15[32]; // [rsp+50h] [rbp-88h] BYREF
  __int64 *v16; // [rsp+E0h] [rbp+8h] BYREF

  memset(v15, 0, 0x78uLL);
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  v16 = 0LL;
  for ( i = 0; i < *v2; ++i )
  {
    v3 = HalpIvtpInitializeReservedDomain(a1, &v2[4 * i + 2]);
    if ( v3 < 0 )
      break;
    v2 = *(unsigned int **)(a1 + 352);
  }
  if ( v3 >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( j = *ExceptionList; (__int64 *)j != ExceptionList; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset(&v15[2], 0, 0x70uLL);
        v7 = *(_QWORD *)(j + 24);
        v15[1] = 0;
        v15[0] = 1;
        result = IvtAllocateTranslationStructures(a1, v7, v8, v9, &v16);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        IvtUpdateTranslationStructures(a1, *(_DWORD *)(j + 24), v11, v16, v12, v13, (__int64)v15, v14, 1, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
