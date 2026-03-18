/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C01ED5A8
 * Callers:
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C01ED6B0 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0091D90 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        char *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  int v7; // r13d
  __int64 result; // rax
  unsigned int v10; // esi
  int v11; // ebx
  void *v12; // rax
  void *v13; // r14
  const void *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v19) = a2;
  HIDWORD(v19) = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v19);
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
            Win32FreePool(*(_QWORD *)(a1 + 16), v15, v16);
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
          v17 = *a3;
          v18 = *(_QWORD *)(a1 + 16);
          *a4 = v7;
          *(_BYTE *)(v5 + v18) = v17;
          return 0LL;
        }
        return (unsigned int)v11;
      }
    }
    return (unsigned int)-1073741675;
  }
  return result;
}
