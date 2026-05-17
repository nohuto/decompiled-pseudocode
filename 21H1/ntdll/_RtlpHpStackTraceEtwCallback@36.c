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

void __stdcall RtlpHpStackTraceEtwCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  signed __int32 *v9; // edi
  signed __int32 v10; // esi
  _DWORD v11[5]; // [esp+0h] [ebp-14h] BYREF

  if ( a2 == 2 )
  {
    v9 = (signed __int32 *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
    if ( v9 )
    {
      v10 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset(v9 + 1, 0, 0x400Cu);
      *v9 = v10;
      v11[1] = -1;
      v11[0] = 2;
      v11[3] = v9;
      v11[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0, 5, v11, 0x14u, 0);
      RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
    }
  }
}
