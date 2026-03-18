/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C0010428
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1C00686A4 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 8 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x32616956u);
  }
  *(_QWORD *)a1 = result;
  a1[18] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 8 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
