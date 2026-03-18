/*
 * XREFs of HalSocRequestConfigurationData @ 0x1403B36F4
 * Callers:
 *     HalpTscGetAttributes @ 0x1403B31C0 (HalpTscGetAttributes.c)
 *     HalpApicSetupRegisterAccess @ 0x1403B3594 (HalpApicSetupRegisterAccess.c)
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403BCA40 (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalpHvDiscover @ 0x1403BEA4C (HalpHvDiscover.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x1403B3864 (HalpInterruptGetX2ApicPolicy.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall HalSocRequestConfigurationData(int a1, __int64 a2, char *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // bl
  int v13; // ecx
  char X2ApicPolicy; // al
  __int64 v15; // rcx
  __int64 v26; // rax
  char v27; // r11

  v3 = 0;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v11 = HalpTimerPlatformSourceForced;
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_8;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = 0;
    if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v26 = _RAX & 0xE;
      v11 = v26 == 14;
      if ( v26 == 14 )
      {
        if ( (unsigned __int8)HalpIsPartitionCpuManager(_RCX, _RDX) )
        {
          _RAX = 1073741830LL;
          __asm { cpuid }
          v11 = v27;
          if ( (_RAX & 0x200) != 0 )
            v11 = 0;
        }
      }
    }
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    X2ApicPolicy = HalpInterruptGetX2ApicPolicy();
LABEL_13:
    v11 = X2ApicPolicy;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = HalpIommuX2ApicSupport;
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( v13 )
    {
      v15 = (unsigned int)(v13 - 1);
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 != 1 )
        {
          v3 = -1073741811;
          HalpTimerLastProblem = 30;
          return v3;
        }
        X2ApicPolicy = HalpIsPartitionCpuManager(v15, a2);
      }
      else
      {
        X2ApicPolicy = HalpIsHvPresent();
      }
    }
    else
    {
      X2ApicPolicy = HalpIsMicrosoftCompatibleHvLoaded();
    }
    goto LABEL_13;
  }
  if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    if ( (_RAX & 0x100) != 0 )
    {
      v11 = 1;
      goto LABEL_9;
    }
  }
LABEL_8:
  v11 = 0;
LABEL_9:
  *a3 = v11;
  return v3;
}
