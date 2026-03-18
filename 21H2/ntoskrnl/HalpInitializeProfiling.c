/*
 * XREFs of HalpInitializeProfiling @ 0x140A54FB4
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A54EF0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpHvCpuid @ 0x14050E264 (HalpHvCpuid.c)
 *     HalpLbrInitialize @ 0x140A550E0 (HalpLbrInitialize.c)
 */

__int64 __fastcall HalpInitializeProfiling(int a1)
{
  char Str1[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  *(_OWORD *)Str1 = 0LL;
  v13 = 0LL;
  LODWORD(KeGetCurrentPrcb()->HalReserved[2]) = 0;
  if ( !a1 )
  {
    if ( (HalpFeatureBits & 1) != 0 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[8] = _RDX;
      *(_DWORD *)&Str1[12] = _RCX;
      *(_DWORD *)Str1 = _RAX;
      if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
      {
        HalpProfileInterface = &Amd64ProfileInterface;
      }
      else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      {
        _RAX = 10LL;
        __asm { cpuid }
        *(_DWORD *)&Str1[8] = _RCX;
        *(_DWORD *)&Str1[4] = _RBX;
        *(_DWORD *)&Str1[12] = _RDX;
        if ( (_BYTE)_RAX )
        {
          if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
          {
            HalpProfileInterface = &EmonProfileInterface;
            if ( (unsigned __int8)_RAX >= 4u )
              HalpProfileFeatures |= 1u;
          }
        }
      }
      HalpPerfInterruptHandler = 0LL;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        HalpHvCpuid(0x40000003u, &v13);
        if ( (BYTE12(v13) & 4) == 0 )
          HalpProfileInterface = &DefaultProfileInterface;
      }
    }
    HalpLbrInitialize();
  }
  return (*HalpProfileInterface)();
}
