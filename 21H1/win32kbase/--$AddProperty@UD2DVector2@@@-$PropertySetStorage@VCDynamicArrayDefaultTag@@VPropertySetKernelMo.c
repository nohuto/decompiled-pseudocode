/*
 * XREFs of ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1C0051734
 * Callers:
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C00C3874 (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0091D90 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DVector2>(
        __int64 a1,
        int a2,
        __int64 *a3,
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
  __int64 v15; // rax
  __int64 v16; // xmm0_8
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+54h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v17 = a2;
  v18 = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v17);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 24) + 8;
    if ( *(_DWORD *)(a1 + 24) < 0xFFFFFFF8 )
    {
      v11 = 0;
      if ( v10 <= *(_DWORD *)(a1 + 28) )
        goto LABEL_10;
      if ( is_mul_ok(v10, 1uLL) )
      {
        v12 = (void *)Win32AllocPool(v10, 2003858261LL);
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
LABEL_10:
        if ( v11 >= 0 )
        {
          *(_DWORD *)(a1 + 24) += 8;
          v15 = *(_QWORD *)(a1 + 16);
          v16 = *a3;
          *a4 = v7;
          *(_QWORD *)(v5 + v15) = v16;
          return 0LL;
        }
        return (unsigned int)v11;
      }
    }
    return (unsigned int)-1073741675;
  }
  return result;
}
