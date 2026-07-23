/*
 * XREFs of HalpQueryIdPdo @ 0x1407D0AF0
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpQueryIdPdo(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  const wchar_t *v5; // rdi
  size_t v6; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v8; // rsi

  if ( a2 < 0 )
    return 3221225659LL;
  if ( a2 <= 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 32LL) == 129 )
    {
      v5 = L"ACPI_HAL\\PNP0C08";
      v6 = 52LL;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 32LL) != 131 )
        return 3221225659LL;
      v5 = L"ACPI_HAL\\UEFI";
      v6 = 28LL;
    }
  }
  else
  {
    if ( a2 != 3 )
      return 3221225659LL;
    v5 = L"0";
    v6 = 4LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 2, 0x206C6148u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, v5, v6);
  result = 0LL;
  v8[v6 >> 1] = 0;
  *a3 = v8;
  return result;
}
