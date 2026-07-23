/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x180005A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _OWORD *a2, PVOID *a3)
{
  char *v4; // rbx
  __int64 v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = RtlpHpEnvHandle;
  v4 = (char *)RtlpHpMetadataAlloc(512LL, 512LL, 0LL, &v8);
  if ( v4 )
  {
    v8 = RtlpHpEnvHandle;
    v5 = RtlpHpMetadataAlloc(0x2000LL, 0x2000LL, 1LL, &v8);
    if ( v5 )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 3) = v5;
      *((_DWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 2) = v4;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v4 + 512 >= v4 ? 0x40 : 0) != 0 )
        memset64(v4, ((unsigned __int64)a2 + 8) | 1, v4 + 512 >= v4 ? 0x40 : 0);
      v4 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
    if ( v4 )
    {
      v8 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v4, &v8);
    }
  }
  else
  {
    v6 = -1073741801;
  }
  return v6 >= 0;
}
