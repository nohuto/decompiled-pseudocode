/*
 * XREFs of HvlpTryConfigureInterface @ 0x1403BF6EC
 * Callers:
 *     HvlRestoreEnlightenment @ 0x1405437A4 (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x140824AA0 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x140B315C0 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403C0314 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 (*v6)(); // r8
  unsigned __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 QuadPart; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  QuadPart = 0LL;
  v10 = 0LL;
  HviGetHypervisorFeatures(&v10);
  v2 = ((unsigned __int64)v10 >> 44) & 1;
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible()
    || (v11 = 0LL, HviGetHypervisorFeatures(&v11), (v11 & 0x20) == 0) )
  {
    HvlpHypercallCodeVa = 0LL;
    return 3224702976LL;
  }
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(__int64 (**)())(v5 + 2952);
    v4 = *(_DWORD *)(v5 + 132) >> 9;
    LOBYTE(v4) = (*(_DWORD *)(v5 + 132) & 0x200) != 0;
    if ( v6 )
      goto LABEL_16;
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  __writemsr(0x40000000u, (unsigned __int16)NtBuildNumber | ((BYTE1(CmNtCSDVersion) | 0x1040A0000LL) << 16));
  v7 = __readmsr(0x40000001u) | 1;
  if ( (_BYTE)v2 || (_BYTE)v4 )
  {
    QuadPart = v7 & 0xFFFFFFFFFFFFF000uLL;
    v6 = (__int64 (*)())((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))qword_140C01D70)(
                          v7 & 0xFFFFFFFFFFFFF000uLL,
                          1LL,
                          32LL,
                          v4);
    if ( v6 )
      goto LABEL_15;
  }
  else
  {
    if ( !a1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
      v6 = (__int64 (*)())HvlpHypercallCodeVa;
      QuadPart = PhysicalAddress.QuadPart;
      goto LABEL_14;
    }
    v6 = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64))qword_140C01D68)(
                          a1,
                          1LL,
                          &QuadPart,
                          32LL);
    if ( v6 )
    {
      PhysicalAddress.QuadPart = QuadPart;
LABEL_14:
      v7 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)v7) & 0xFFF;
LABEL_15:
      __writemsr(0x40000001u, v7);
LABEL_16:
      HvcallCodeVa = v6;
      result = 0LL;
      _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)v6);
      return result;
    }
  }
  return 3221225626LL;
}
