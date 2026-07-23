/*
 * XREFs of _RtlpHpTagRunOnceInit@12 @ 0x4B370670
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

BOOL __stdcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  int v3; // esi
  unsigned int *v4; // edi
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-4h] [ebp-10h]

  v10 = dword_4B3A446C;
  v3 = 0;
  v9 = RtlpHpEnvHandle;
  memset(a2, 0, 0x1Cu);
  v4 = (unsigned int *)RtlpHpMetadataAlloc(0, v9, v10);
  if ( v4 )
  {
    v5 = RtlpHpMetadataAlloc(1, RtlpHpEnvHandle, dword_4B3A446C);
    if ( v5 )
    {
      a2[4] = v5;
      *a2 = 0;
      a2[1] = 0;
      v6 = 0;
      a2[3] = v4;
      a2[2] = 2048;
      v7 = v4 + 64 < v4 ? 0 : 64;
      if ( (v4 + 64 < v4 ? 0xFFFFFFC0 : 0) != 0xFFFFFFC0 )
      {
        do
        {
          ++v6;
          *v4++ = (unsigned int)(a2 + 1) | 1;
        }
        while ( v6 < v7 );
      }
      v4 = 0;
    }
    else
    {
      v3 = -1073741801;
    }
    if ( v4 )
      RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
  }
  else
  {
    v3 = -1073741801;
  }
  return v3 >= 0;
}
