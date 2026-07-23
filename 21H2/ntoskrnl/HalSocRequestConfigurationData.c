/*
 * XREFs of HalSocRequestConfigurationData @ 0x1403A1FEC
 * Callers:
 *     HalpTscGetAttributes @ 0x1403A1B00 (HalpTscGetAttributes.c)
 *     HalpApicSetupRegisterAccess @ 0x1403A1EA4 (HalpApicSetupRegisterAccess.c)
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHpetDiscover @ 0x1403AC1CC (HalpHpetDiscover.c)
 *     HalpHvDiscover @ 0x1403AD2BC (HalpHvDiscover.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x1403A219C (HalpInterruptGetX2ApicPolicy.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall HalSocRequestConfigurationData(int a1, __int64 a2, char *a3)
{
  unsigned int v3; // r11d
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  char *p_IsPartitionCpuManager; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v20; // cf
  __int64 v26; // rax
  bool v27; // si
  char v33; // al
  bool v34; // [rsp+20h] [rbp-20h] BYREF
  char IsPartitionCpuManager; // [rsp+21h] [rbp-1Fh] BYREF
  char IsHvPresent; // [rsp+22h] [rbp-1Eh] BYREF
  char IsMicrosoftCompatibleHvLoaded; // [rsp+23h] [rbp-1Dh] BYREF
  char v38; // [rsp+24h] [rbp-1Ch] BYREF
  char X2ApicPolicy; // [rsp+25h] [rbp-1Bh] BYREF
  char v40; // [rsp+26h] [rbp-1Ah] BYREF
  char v41; // [rsp+27h] [rbp-19h] BYREF
  int v42; // [rsp+28h] [rbp-18h]
  int v43; // [rsp+2Ch] [rbp-14h]
  __int64 v44; // [rsp+30h] [rbp-10h]

  v3 = 0;
  IsPartitionCpuManager = 0;
  v40 = 0;
  IsHvPresent = 0;
  IsMicrosoftCompatibleHvLoaded = 0;
  v41 = 0;
  v34 = 0;
  v38 = 0;
  X2ApicPolicy = 0;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          v9 = (unsigned int)(v8 - 1);
          if ( (_DWORD)v9 )
          {
            v13 = (unsigned int)(v9 - 1);
            if ( (_DWORD)v13 )
            {
              v14 = (unsigned int)(v13 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 != 1 )
                {
                  v3 = -1073741811;
                  HalpTimerLastProblem = 30;
                  return v3;
                }
                IsPartitionCpuManager = HalpIsPartitionCpuManager(v14, a2);
                p_IsPartitionCpuManager = &IsPartitionCpuManager;
              }
              else
              {
                IsHvPresent = HalpIsHvPresent(v14);
                p_IsPartitionCpuManager = &IsHvPresent;
              }
            }
            else
            {
              IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded(v13);
              p_IsPartitionCpuManager = &IsMicrosoftCompatibleHvLoaded;
            }
          }
          else
          {
            if ( !(unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(v9) )
              goto LABEL_7;
            _RAX = 1073741828LL;
            __asm { cpuid }
            v20 = (_RAX & 0x100) != 0;
            v10 = 1;
            if ( !v20 )
LABEL_7:
              v10 = v3;
            v38 = v10;
            p_IsPartitionCpuManager = &v38;
          }
        }
        else
        {
          X2ApicPolicy = HalpInterruptGetX2ApicPolicy(v8);
          p_IsPartitionCpuManager = &X2ApicPolicy;
        }
      }
      else
      {
        if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(v7) )
        {
          _RAX = 1073741827LL;
          __asm { cpuid }
          v44 = 0LL;
          v42 = _RAX;
          v43 = _RBX;
          v26 = _RAX & 0xE;
          v27 = v26 == 14;
          v34 = v26 == 14;
          if ( v26 == 14 )
          {
            if ( (unsigned __int8)HalpIsPartitionCpuManager(_RCX, _RDX) )
            {
              _RAX = 1073741830LL;
              __asm { cpuid }
              v20 = (_RAX & 0x200) != 0;
              v33 = v27;
              if ( v20 )
                v33 = v3;
              v34 = v33;
            }
          }
        }
        p_IsPartitionCpuManager = (char *)&v34;
      }
    }
    else
    {
      p_IsPartitionCpuManager = &v41;
    }
  }
  else
  {
    p_IsPartitionCpuManager = &v40;
    v40 = HalpTimerPlatformSourceForced;
  }
  *a3 = *p_IsPartitionCpuManager;
  return v3;
}
