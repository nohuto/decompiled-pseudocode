/*
 * XREFs of _SafeAllocBlob @ 0x4B2D3295
 * Callers:
 *     _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68 (_RtlpMuiRegCreateLanguageConfigList@4.c)
 *     _RtlpMuiRegCreateStringPool@8 @ 0x4B2ADB4D (_RtlpMuiRegCreateStringPool@8.c)
 *     _RtlpMuiRegCreateLanguages@4 @ 0x4B2ADBBD (_RtlpMuiRegCreateLanguages@4.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

PVOID __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v7; // esi
  int v8; // eax
  SIZE_T v10; // [esp-4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-4h]

  if ( (int)RtlULongLongToUInt(a3 * a2, (a3 * (unsigned __int64)a2) >> 32) < 0 )
    return 0;
  v7 = a1 + v11;
  if ( a1 + v11 < a1 )
    return 0;
  if ( (int)RtlULongLongToUInt(a5 * a4, (a5 * (unsigned __int64)a4) >> 32) < 0 )
    return 0;
  v8 = v7 + v11;
  if ( v7 + v11 < v7 )
    return 0;
  if ( a6 )
    *a6 = v8;
  if ( !v8 )
    return 0;
  LODWORD(v10) = v7 + v11;
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
}
