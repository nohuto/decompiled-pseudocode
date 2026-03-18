/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x1407472A8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x1407472F8 (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407474E0 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // r8d

  result = MiProcessKernelCfgImageLoadConfig();
  if ( (int)result >= 0 )
  {
    ExGenRandom(0);
    v3 = ExGenRandom(0);
    LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v4, v3);
    return 0LL;
  }
  return result;
}
