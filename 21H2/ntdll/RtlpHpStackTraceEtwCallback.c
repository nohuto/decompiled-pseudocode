/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180109170
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlQueryHeapInformation @ 0x180074FD0 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(__int64 a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+50h] [rbp-38h] BYREF

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
      v7[1] = -1LL;
      LODWORD(v7[0]) = 2;
      v7[3] = v3;
      v7[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, 5, v7, 0x28uLL, 0LL);
      v6 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v6);
    }
  }
}
