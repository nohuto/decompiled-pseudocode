/*
 * XREFs of _RtlpHpPerHeapStackTraceInitialize@12 @ 0x4B36DB70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 */

int __stdcall RtlpHpPerHeapStackTraceInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int v3; // esi
  _DWORD *v4; // ecx

  v3 = 0;
  v4 = (_DWORD *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[3] = 0;
    v3 = 1;
    *a3 = v4;
  }
  return v3;
}
