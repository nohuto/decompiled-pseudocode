/*
 * XREFs of HalpInitializeProfiling @ 0x14099C5DC
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x14099C540 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strncmp @ 0x1403D16B0 (strncmp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvCpuid @ 0x1404C209C (HalpHvCpuid.c)
 *     HalpLbrInitialize @ 0x14099C704 (HalpLbrInitialize.c)
 */

__int64 __fastcall HalpInitializeProfiling(int a1)
{
  __int64 v8; // rcx
  char Str1[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF

  *(_OWORD *)Str1 = 0LL;
  v15 = 0LL;
  if ( (HalpFeatureBits & 1) == 0 )
    goto LABEL_17;
  if ( !a1 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    *(_DWORD *)&Str1[4] = _RBX;
    *(_DWORD *)&Str1[8] = _RDX;
    *(_DWORD *)&Str1[12] = _RCX;
    *(_DWORD *)Str1 = _RAX;
    if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    {
      HalpProfileInterface[0] = (__int64 (__fastcall *)())Amd64ProfileInterface;
    }
    else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    {
      _RAX = 10LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[8] = _RCX;
      v8 = (unsigned __int8)_RAX;
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[12] = _RDX;
      if ( (_BYTE)_RAX )
      {
        if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
        {
          HalpProfileInterface[0] = (__int64 (__fastcall *)())EmonProfileInterface;
          if ( (unsigned __int8)_RAX >= 4u )
            HalpProfileFeatures |= 1u;
        }
      }
    }
    HalpPerfInterruptHandler = 0LL;
    if ( !HalpIsMicrosoftCompatibleHvLoaded(v8) || (HalpHvCpuid(0x40000003u, &v15), (BYTE12(v15) & 4) != 0) )
    {
LABEL_13:
      HalpLbrInitialize();
      return (*(__int64 (**)(void))HalpProfileInterface[0])();
    }
    HalpProfileInterface[0] = (__int64 (__fastcall *)())DefaultProfileInterface;
LABEL_17:
    if ( a1 )
      return (*(__int64 (**)(void))HalpProfileInterface[0])();
    goto LABEL_13;
  }
  return (*(__int64 (**)(void))HalpProfileInterface[0])();
}
