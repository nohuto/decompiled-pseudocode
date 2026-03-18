/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C02D5A10
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C030E5C8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,16>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  void *v7; // rcx

  if ( a2 <= 0x10 )
  {
    v7 = a1 + 1;
    *a1 = (__int64)v7;
    if ( a2 )
      memset(v7, 0, 4LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL, a4);
  }
  result = *a1;
  *((_DWORD *)a1 + 18) = a2;
  return result;
}
