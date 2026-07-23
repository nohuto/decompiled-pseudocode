/*
 * XREFs of _RtlpHpStackTraceEtwCallback@36 @ 0x4B36E340
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

void __userpurge RtlpHpStackTraceEtwCallback(
        int a1@<esi>,
        LPCGUID a2,
        ULONG a3,
        UCHAR a4,
        ULONGLONG a5,
        ULONGLONG a6,
        PEVENT_FILTER_DESCRIPTOR a7,
        PVOID a8)
{
  signed __int32 *v8; // edi
  signed __int32 v9; // esi
  size_t v10; // [esp-Ch] [ebp-20h]
  PSIZE_T v11; // [esp-8h] [ebp-1Ch]
  _DWORD HeapInformation[5]; // [esp+0h] [ebp-14h] BYREF

  if ( a3 == 2 )
  {
    v8 = (signed __int32 *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
    if ( v8 )
    {
      HIDWORD(v10) = a1;
      v9 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      LODWORD(v10) = 16396;
      memset(v8 + 1, 0, v10);
      *v8 = v9;
      HeapInformation[1] = -1;
      HeapInformation[0] = 2;
      HeapInformation[3] = v8;
      HeapInformation[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x14uLL, v11);
      RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
    }
  }
}
