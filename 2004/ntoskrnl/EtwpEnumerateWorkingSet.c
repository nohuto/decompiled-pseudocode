/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x14093A428
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     MiGetWorkingSetInfoEx @ 0x140541910 (MiGetWorkingSetInfoEx.c)
 *     EtwLogPfnInfoRundown @ 0x14093A054 (EtwLogPfnInfoRundown.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void *__fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v5; // rdi
  SIZE_T v6; // rdx
  __int64 *v7; // r9

  result = *(void **)(a2 + 48);
  v5 = 4096LL;
  while ( 1 )
  {
    if ( !result )
    {
      v6 = 32 * v5 + 16;
      *(_QWORD *)(a2 + 56) = v6;
      result = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x74777445u);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    memset(result, 0, *(_QWORD *)(a2 + 56));
    result = (void *)MiGetWorkingSetInfoEx(a1 + 1664, 0, *(unsigned __int64 **)(a2 + 48), *(_QWORD *)(a2 + 56));
    v7 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return (void *)EtwLogPfnInfoRundown(
                           a1,
                           *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1112LL),
                           **(_DWORD **)(a2 + 32),
                           v7);
      }
      return result;
    }
    v5 = v7[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 48), 0);
    *(_QWORD *)(a2 + 48) = 0LL;
    result = 0LL;
  }
  return result;
}
