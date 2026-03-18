/*
 * XREFs of MiProcessKernelCfgImage @ 0x14036E7CC
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x140745278 (MiFinalizeDriverCfgState.c)
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14027DB10 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x14075E734 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408D2F70 (MiProcessKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (MiFlags & 0x80000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1, *(_QWORD *)(a1 + 48), 0LL, &v7);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, v7);
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
