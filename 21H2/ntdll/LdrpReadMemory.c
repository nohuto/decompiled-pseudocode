/*
 * XREFs of LdrpReadMemory @ 0x180001340
 * Callers:
 *     LdrpGetModuleName @ 0x1800010E8 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x180001200 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180001220 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x1800CDFE0 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800CE090 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800CE240 (LdrQueryNextListEntry32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800CE278 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    return a4 != v6 ? 0x8000000D : 0;
  return result;
}
