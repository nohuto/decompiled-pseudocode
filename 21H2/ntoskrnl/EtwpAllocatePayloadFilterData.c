/*
 * XREFs of EtwpAllocatePayloadFilterData @ 0x140940640
 * Callers:
 *     EtwpAllocateFilter @ 0x1407B8678 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpValidatePayloadFilter @ 0x140949B08 (EtwpValidatePayloadFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePayloadFilterData(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v7; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  size_t v10; // r8
  const void *v11; // rdx

  v3 = *(_DWORD *)(a2 + 8);
  result = EtwpValidatePayloadFilter(a1, *(_QWORD *)a2, v3);
  v7 = result;
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 8, 0x46777445u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = *(unsigned int *)(a2 + 8);
      v11 = *(const void **)a2;
      *PoolWithTag = 1;
      memmove(PoolWithTag + 2, v11, v10);
      result = v7;
      *a3 = v9;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
