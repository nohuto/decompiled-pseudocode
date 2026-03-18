/*
 * XREFs of ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0054CC0
 * Callers:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0054C84 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Grow(
        _QWORD *a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v2 = *((_DWORD *)a1 + 2) + 1;
  if ( *((_DWORD *)a1 + 2) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 <= *((_DWORD *)a1 + 3) )
    return v3;
  if ( !is_mul_ok(v2, 8uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)Win32AllocPool(8LL * v2, 0x77707355u);
  v5 = v4;
  if ( v4 )
  {
    if ( *a1 )
    {
      memmove(v4, (const void *)*a1, 8LL * *((unsigned int *)a1 + 2));
      Win32FreePool(*a1);
    }
    *a1 = v5;
    *((_DWORD *)a1 + 3) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
