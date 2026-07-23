/*
 * XREFs of MiProcessKernelCfgImage @ 0x14036F3FC
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x140746DF8 (MiFinalizeDriverCfgState.c)
 *     MiInitializeKernelCfg @ 0x140A541DC (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140224AC0 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408D42C0 (MiProcessKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+20h] BYREF

  OutHeaders = 0LL;
  if ( (MiFlags & 0x80000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(a1 + 48), 0LL, &OutHeaders);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, OutHeaders);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 )
    return 0LL;
  if ( (a2 & 8) != 0 )
    return 0LL;
  result = MiProcessKernelCfgAddressTakenImports(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
