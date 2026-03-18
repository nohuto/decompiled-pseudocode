/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140745728
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x140745778 (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140745960 (MiProcessKernelCfgImageLoadConfig.c)
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
