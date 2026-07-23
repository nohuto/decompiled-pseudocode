/*
 * XREFs of HalpTimerRegister @ 0x1403AC990
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403AB34C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403AB3DC (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403AB4DC (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403AB568 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403AB6AC (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x1403AB820 (HalpTscDiscover.c)
 *     HalpHpetDiscover @ 0x1403AC1CC (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403ACE40 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x1403AD110 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x1403AD16C (HalpArtDiscover.c)
 *     HalpHvDiscover @ 0x1403AD2BC (HalpHvDiscover.c)
 *     HalpVpptTimerRegister @ 0x1404C0ED8 (HalpVpptTimerRegister.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x1403ACCA4 (HalpTimerBuildKnownResourceIdString.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8F120 (HalpPciGetHpetInterruptSource.c)
 */

__int64 __fastcall HalpTimerRegister(__int64 a1, UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  UNICODE_STRING *p_DestinationString; // r15
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned int MaximumProcessorCount; // r12d
  unsigned int v8; // r14d
  void *MemoryInternal; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm0
  unsigned int i; // ebp
  __int64 v15; // rcx
  __int64 *v16; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = 0;
  p_DestinationString = a2;
  DestinationString = 0LL;
  if ( !HalpTimerRegistrationAllowed )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 4) != 144 )
    return (unsigned int)-1073741811;
  v5 = *(unsigned int *)(a1 + 116);
  if ( (v5 & 0xFE000000) != 0
    || (v5 & 0x400000) != 0
    || !*(_DWORD *)(a1 + 136)
    || (v5 & 0x400) != 0 && !*(_QWORD *)(a1 + 56) )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v5 & 0x1000) != 0 || (v5 & 0x80u) != 0LL )
    return (unsigned int)-1073741637;
  if ( (v5 & 0x800) != 0 && !*(_QWORD *)(a1 + 72) )
    return (unsigned int)-1073741811;
  if ( (v5 & 0x801) == 0x800 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    if ( (v5 & 0xF00) != 0 && !*(_QWORD *)(a1 + 40)
      || (v5 & 2) != 0 && !*(_QWORD *)(a1 + 16)
      || (v5 & 0x10000) != 0 && (v5 & 1) == 0 )
    {
      return (unsigned int)-1073741811;
    }
    if ( !a2 )
    {
      HalpTimerBuildKnownResourceIdString(a1, 75LL, SourceString);
      p_DestinationString = &DestinationString;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = *(unsigned int *)(a1 + 116);
    }
    if ( (v5 & 0x10000) != 0 )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount(v5);
      v6 = (*(_DWORD *)(a1 + 96) + 7) & 0xFFFFFFF8;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 96);
      MaximumProcessorCount = 1;
    }
    v8 = (((MaximumProcessorCount * v6 + 351) & 0xFFFFFFF8) + 9 + p_DestinationString->Length) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v8, 1LL);
    v10 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset(MemoryInternal, 0, v8);
      v11 = (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 288) = v11;
      v12 = (v11 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 72) = v12;
      *(_QWORD *)(v11 + 32) = (MaximumProcessorCount * v6 + v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 192) = *(_QWORD *)(a1 + 104);
      *(_OWORD *)(v10 + 104) = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v10 + 120) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v10 + 136) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v10 + 152) = *(_OWORD *)(a1 + 56);
      v13 = *(_OWORD *)(a1 + 72);
      *(_DWORD *)(v10 + 80) = v6;
      *(_OWORD *)(v10 + 168) = v13;
      *(_DWORD *)(v10 + 220) = *(_DWORD *)(a1 + 100);
      *(_DWORD *)(v10 + 224) = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(v10 + 84) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(a1 + 124);
      *(_DWORD *)(v10 + 96) = *(_DWORD *)(a1 + 132);
      *(_DWORD *)(v10 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v10 + 228) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v10 + 216) = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          for ( i = 0; i < MaximumProcessorCount; ++i )
            memmove(
              (void *)(*(_QWORD *)(v10 + 72) + i * *(_DWORD *)(v10 + 80)),
              *(const void **)(a1 + 88),
              *(unsigned int *)(a1 + 96));
        }
      }
      *(_DWORD *)(v10 + 284) = *(_DWORD *)(a1 + 140);
      *(_WORD *)(v11 + 24) = 0;
      *(_WORD *)(v11 + 26) = p_DestinationString->Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 24), p_DestinationString);
      if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      {
        *(_QWORD *)(v11 + 12) = 0LL;
        *(_DWORD *)(v11 + 8) = 0;
        *(_DWORD *)v11 = 0;
        *(_DWORD *)(v11 + 4) = 0;
        if ( *(_DWORD *)(a1 + 136) == 3 )
        {
          LOBYTE(v15) = *(_BYTE *)(a1 + 142);
          HalpPciGetHpetInterruptSource(v15, v11 + 8, (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL);
        }
      }
      v16 = (__int64 *)qword_140C4C1A8;
      if ( *(ULONG_PTR **)qword_140C4C1A8 != &HalpRegisteredTimers )
        __fastfail(3u);
      LODWORD(HalpRegisteredTimerCount) = HalpRegisteredTimerCount + 1;
      *(_QWORD *)v10 = &HalpRegisteredTimers;
      *(_QWORD *)(v10 + 8) = v16;
      *v16 = v10;
      qword_140C4C1A8 = v10;
      if ( (*(_DWORD *)(v10 + 224) & 0x100000) != 0 )
        HalpTimerAuxiliaryClockEnabled = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
