/*
 * XREFs of HvlpTryConfigureInterface @ 0x1403A881C
 * Callers:
 *     HvlRestoreEnlightenment @ 0x1404F02C0 (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x140A77320 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402FE520 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 (*v12)(); // r8
  unsigned __int64 v13; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 QuadPart; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  __int128 v17; // [rsp+48h] [rbp-20h] BYREF

  QuadPart = 0LL;
  v16 = 0LL;
  HviGetHypervisorFeatures(&v16, a2, a3, a4);
  v5 = ((unsigned __int64)v16 >> 44) & 1;
  if ( !HviIsHypervisorMicrosoftCompatible()
    || (v17 = 0LL, HviGetHypervisorFeatures(&v17, v6, v7, v8), (v17 & 0x20) == 0) )
  {
    HvlpHypercallCodeVa = 0LL;
    return 3224702976LL;
  }
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 240);
    v12 = *(__int64 (**)())(v11 + 2920);
    v10 = *(_DWORD *)(v11 + 132) >> 9;
    LOBYTE(v10) = (*(_DWORD *)(v11 + 132) & 0x200) != 0;
  }
  else
  {
    v12 = 0LL;
    LOBYTE(v10) = 0;
  }
  if ( v12 )
    goto LABEL_16;
  __writemsr(0x40000000u, (unsigned __int16)NtBuildNumber | ((BYTE1(CmNtCSDVersion) | 0x1040A0000LL) << 16));
  v13 = __readmsr(0x40000001u) | 1;
  if ( (_BYTE)v5 || (_BYTE)v10 )
  {
    QuadPart = v13 & 0xFFFFFFFFFFFFF000uLL;
    v12 = (__int64 (*)())((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))qword_140C00720)(
                           v13 & 0xFFFFFFFFFFFFF000uLL,
                           1LL,
                           32LL,
                           v10);
    if ( v12 )
      goto LABEL_15;
  }
  else
  {
    if ( !a1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
      v12 = (__int64 (*)())HvlpHypercallCodeVa;
      QuadPart = PhysicalAddress.QuadPart;
      goto LABEL_14;
    }
    v12 = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64))qword_140C00718)(
                           a1,
                           1LL,
                           &QuadPart,
                           32LL);
    if ( v12 )
    {
      PhysicalAddress.QuadPart = QuadPart;
LABEL_14:
      v13 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)v13) & 0xFFF;
LABEL_15:
      __writemsr(0x40000001u, v13);
LABEL_16:
      HvcallCodeVa = v12;
      result = 0LL;
      _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)v12);
      return result;
    }
  }
  return 3221225626LL;
}
