/*
 * XREFs of CmObReferenceObjectByName @ 0x1405CBB0C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        struct _DMA_ADAPTER **a7)
{
  int v7; // eax
  struct _DMA_ADAPTER *v8; // rcx
  unsigned int v9; // ebx
  struct _DMA_ADAPTER *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, (_DWORD)CmKeyObjectType, a5, a6, (__int64)&v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)&v11->Version == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    HalPutDmaAdapter(v8);
  return v9;
}
