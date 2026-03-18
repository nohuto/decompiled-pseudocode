/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C02CE6F8
 * Callers:
 *     NtDxgkGetProcessList @ 0x1C02D5000 (NtDxgkGetProcessList.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  void *v7; // rcx

  if ( a2 <= 0x40 )
  {
    v7 = a1 + 1;
    *a1 = (__int64)v7;
    if ( a2 )
      memset(v7, 0, 8LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL, a4);
  }
  result = *a1;
  *((_DWORD *)a1 + 130) = a2;
  return result;
}
