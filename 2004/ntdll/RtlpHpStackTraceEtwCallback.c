/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180108DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlQueryHeapInformation @ 0x180073EA0 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(LPCGUID a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+40h] [rbp-48h] BYREF
  int HeapInformation; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v9)(void *, size_t); // [rsp+60h] [rbp-28h]
  _DWORD *v10; // [rsp+68h] [rbp-20h]

  if ( a2 == 2 )
  {
    v5 = RtlpHpEnvHandle;
    v2 = RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset((void *)(v2 + 4), 0, 0x400CuLL);
      *v3 = v4;
      v8 = -1LL;
      HeapInformation = 2;
      v10 = v3;
      v9 = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x28uLL, 0LL);
      v6 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v6);
    }
  }
}
