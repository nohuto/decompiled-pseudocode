/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x1409EA130
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x1405A6204 (MiGetWorkingSetInfoEx.c)
 *     EtwLogPfnInfoRundown @ 0x1409E9D54 (EtwLogPfnInfoRundown.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // r9

  result = *(_QWORD **)(a2 + 48);
  v5 = 4096LL;
  while ( 1 )
  {
    if ( !result )
    {
      v6 = 32 * v5 + 16;
      *(_QWORD *)(a2 + 56) = v6;
      result = (_QWORD *)ExAllocatePool2(64LL, v6, 1953985605LL);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    result = (_QWORD *)MiGetWorkingSetInfoEx(a1 + 1664, 0, result, *(_QWORD *)(a2 + 56));
    v7 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return (_QWORD *)EtwLogPfnInfoRundown(
                             a1,
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1096LL),
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
