/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x1408DA100
 * Callers:
 *     MiProcessKernelCfgImage @ 0x14037134C (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfg @ 0x140A5485C (MiInitializeKernelCfg.c)
 * Callees:
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408DA050 (MiMarkKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgAddressTakenImports(PVOID *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    if ( ((_DWORD)a1[13] & 0x2100) == 0x2000 )
    {
      result = MiMarkKernelCfgAddressTakenImports((__int64)a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
      return 0LL;
  }
  return result;
}
