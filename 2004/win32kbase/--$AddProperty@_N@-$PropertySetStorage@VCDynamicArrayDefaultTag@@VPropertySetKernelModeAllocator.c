/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C01E7B60
 * Callers:
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C01E7C74 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0099BF0 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?RemoveAt@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAXI@Z @ 0x1C00D2450 (-RemoveAt@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VProperty.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        char *a3,
        unsigned int *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // r14d
  __int64 result; // rax
  unsigned int v10; // esi
  int v11; // edi
  void *v12; // rax
  void *v13; // r15
  const void *v14; // rdx
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v17) = a2;
  HIDWORD(v17) = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v17);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 24) + 1;
    if ( *(_DWORD *)(a1 + 24) != -1 )
    {
      v11 = 0;
      if ( v10 <= *(_DWORD *)(a1 + 28) )
        goto LABEL_12;
      if ( is_mul_ok(v10, 1uLL) )
      {
        v12 = (void *)Win32AllocPool(v10, 0x77707355u);
        v13 = v12;
        if ( v12 )
        {
          v14 = *(const void **)(a1 + 16);
          if ( v14 )
          {
            memmove(v12, v14, *(unsigned int *)(a1 + 24));
            Win32FreePool(*(_QWORD *)(a1 + 16));
          }
          *(_QWORD *)(a1 + 16) = v13;
          *(_DWORD *)(a1 + 28) = v10;
        }
        else
        {
          v11 = -1073741801;
        }
LABEL_12:
        if ( v11 >= 0 )
        {
          ++*(_DWORD *)(a1 + 24);
          v15 = *a3;
          v16 = *(_QWORD *)(a1 + 16);
          *a4 = v7;
          *(_BYTE *)(v5 + v16) = v15;
          return 0LL;
        }
        goto LABEL_15;
      }
    }
    v11 = -1073741675;
LABEL_15:
    CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::RemoveAt(
      a1,
      v7);
    return (unsigned int)v11;
  }
  return result;
}
