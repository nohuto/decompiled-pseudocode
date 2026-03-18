/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C000EE0C
 * Callers:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C000EB08 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow(
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
  v4 = (void *)Win32AllocPool(8LL * v2, 2003858261LL);
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
