/*
 * XREFs of HalSocRequestApi @ 0x14039EB7C
 * Callers:
 *     HalpHvTimerInitialize @ 0x14038D690 (HalpHvTimerInitialize.c)
 *     HalpTscGetAttributes @ 0x14039E490 (HalpTscGetAttributes.c)
 *     HalpApicSetupRegisterAccess @ 0x14039E834 (HalpApicSetupRegisterAccess.c)
 *     HalpRtcDiscover @ 0x1403A7178 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A72BC (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x1403A7430 (HalpTscDiscover.c)
 *     HalpApicTimerIsInvariant @ 0x1403A8B14 (HalpApicTimerIsInvariant.c)
 *     HalpArtAvailable @ 0x1403A8DDC (HalpArtAvailable.c)
 *     HalpHvDiscover @ 0x1403A8ECC (HalpHvDiscover.c)
 *     HalpApicGetCpuInfo @ 0x1403C9B30 (HalpApicGetCpuInfo.c)
 *     HalpVpptTimerRegister @ 0x1404BB6C8 (HalpVpptTimerRegister.c)
 *     HalpHvCounterUpdateCallback @ 0x1404CF650 (HalpHvCounterUpdateCallback.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E1D7C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409A6950 (HsaInitializeIommu.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CB2D8 (HalpHvIsFrequencyAvailable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall HalSocRequestApi(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 (__fastcall **p_Src)(); // rsi
  unsigned int v16; // ebx
  _QWORD *i; // rax
  __int64 v19; // r8
  __int64 *MemoryInternal; // rax
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+28h] [rbp-38h] BYREF
  __int128 Src; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h]

  v5 = 0;
  v26 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  Src = 0LL;
  v27 = 0LL;
  v10 = a3 - 1;
  if ( !v10 )
  {
    p_Src = HalpTimerCmosApi;
    goto LABEL_8;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    p_Src = &HalpTimerPcCpuApi;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( HalpIsMicrosoftCompatibleHvLoaded(a1) )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v29 = 0LL;
      LODWORD(v29) = _RAX;
      if ( (_RAX & 2) != 0 )
      {
        p_Src = (__int64 (__fastcall **)())&HalpTimerHypervisorReferenceTime;
        HalpTimerHypervisorReferenceTime = qword_140C4A368;
        v8 = (__int64 *)&HalpTimerHvReferenceCallbackList;
        v16 = 8;
        v9 = 1;
        goto LABEL_9;
      }
    }
    return (unsigned int)-1073741637;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v16 = 8;
    v26 = HalpSocApiAllocatePhysicalMemory;
    p_Src = &v26;
    goto LABEL_9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v19 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 != 1 )
      {
        HalpTimerLastProblem = 27;
        return (unsigned int)-1073741811;
      }
      p_Src = HalpTimerSkipApi;
      goto LABEL_8;
    }
    if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, v19, a4, v26) )
    {
      *(_QWORD *)&v27 = HalpHvGetTscFrequency;
      p_Src = (__int64 (__fastcall **)())&v27;
      *((_QWORD *)&v27 + 1) = HalpHvGetApicFrequency;
      goto LABEL_8;
    }
    return (unsigned int)-1073741637;
  }
  p_Src = (__int64 (__fastcall **)())&Src;
  Src = xmmword_140C4A348;
  v8 = &HalpTimerHvApicCallbackList;
  v9 = 1;
LABEL_8:
  v16 = 16;
LABEL_9:
  if ( !a5 || v6 > v16 )
  {
    HalpTimerLastProblem = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v16 )
  {
    v5 = -1073741789;
    HalpTimerLastProblem = 28;
    return v5;
  }
  if ( !v9 )
    goto LABEL_13;
  if ( !a2 )
    return (unsigned int)-1073741811;
  for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
      goto LABEL_13;
  }
  MemoryInternal = (__int64 *)HalpMmAllocateMemoryInternal(16LL, 1LL);
  if ( !MemoryInternal )
    return (unsigned int)-1073741801;
  MemoryInternal[1] = a2;
  *MemoryInternal = *v8;
  *v8 = (__int64)MemoryInternal;
LABEL_13:
  memmove(a5, p_Src, v16);
  return v5;
}
