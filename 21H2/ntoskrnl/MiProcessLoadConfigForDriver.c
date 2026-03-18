/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x14075C2E0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x14075C22C (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C330 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // [rsp+20h] [rbp-18h]

  result = MiProcessKernelCfgImageLoadConfig();
  if ( (int)result >= 0 )
  {
    v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
    v4 = ExGenRandom(0);
    LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v5, v3 | v4, v6);
    return 0LL;
  }
  return result;
}
