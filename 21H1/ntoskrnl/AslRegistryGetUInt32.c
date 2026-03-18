/*
 * XREFs of AslRegistryGetUInt32 @ 0x140963368
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407AC85C (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1409633E8 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v7);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
