/*
 * XREFs of _SafeAllocBlob @ 0x180038A4C
 * Callers:
 *     RtlpMuiRegCreateLanguageList @ 0x1800389BC (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007E9E4 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguages @ 0x1801045E4 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x180104678 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ecx
  __int64 result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v9 < v7 )
    return 0LL;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
  return result;
}
