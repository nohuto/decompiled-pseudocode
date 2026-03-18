/*
 * XREFs of Amd64InitializeCacheStatus @ 0x14052BCA0
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x14052BFC0 (Amd64InitializeUncoreProfiling.c)
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1403D8F10 (HalpInterruptGetIdentifiers.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     Amd64FreeCounter @ 0x14052BA4C (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatus @ 0x14052C0C8 (Amd64InitializeUncoreStatus.c)
 */

__int64 (__fastcall **Amd64InitializeCacheStatus())()
{
  unsigned int Number; // edi
  __int64 v6; // r8
  int v7; // r8d
  char v18; // bl
  unsigned int v19; // ecx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v21)(); // r11
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // r9d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // ebx
  __int64 v28; // r10
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ecx
  _DWORD v33[6]; // [rsp+20h] [rbp-20h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v33[0] = 0;
  if ( KeGetCurrentPrcb()->CpuType == 22 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v6 = (unsigned __int8)_RCX;
  }
  else
  {
    v7 = 0;
    do
    {
      _RAX = 2147483677LL;
      ++v7;
      __asm { cpuid }
    }
    while ( (_RAX & 0xF) != 0 );
    _RAX = 2147483677LL;
    __asm { cpuid }
    v18 = 0;
    _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
    v19 = (unsigned __int8)(1 << _RCX);
    while ( 1 )
    {
      v19 >>= 1;
      if ( !v19 )
        break;
      ++v18;
    }
    result = (__int64 (__fastcall **)())HalpInterruptGetIdentifiers(Number, v33, 0LL);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned int)(v33[0] >> v18);
  }
  result = (__int64 (__fastcall **)())Amd64InitializeUncoreStatus(
                                        2LL,
                                        &Amd64CacheStatusHead,
                                        v6,
                                        (unsigned int)Amd64NumberCacheCounters);
  v21 = result;
  if ( result )
  {
    result = &DefaultProfileInterface;
    v22 = Amd64CounterStatus + 24LL * Number * Amd64NumberCounters;
    if ( HalpProfileInterface == &DefaultProfileInterface )
    {
      v23 = HalpCounterStatus;
    }
    else
    {
      result = (__int64 (__fastcall **)())HalpCounterStatus;
      v23 = HalpCounterStatus + 8LL * Number * HalpNumberOfCounters;
    }
    v24 = Amd64NumberDataFabricCounters;
    v25 = Amd64NumberCoreCounters;
    v26 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
    v27 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
    if ( Amd64NumberDataFabricCounters + Amd64NumberCoreCounters < (unsigned int)(Amd64NumberDataFabricCounters
                                                                                + Amd64NumberCoreCounters
                                                                                + Amd64NumberCacheCounters) )
    {
      while ( 1 )
      {
        v28 = v22 + 24LL * v27;
        v29 = v27;
        *(_QWORD *)(v28 + 8) = v21;
        if ( v27 >= v26 )
          break;
        if ( v27 >= v25 )
        {
          v30 = v27;
          goto LABEL_19;
        }
LABEL_20:
        v31 = (__int64)v21[3] + 40 * v29;
        *(_QWORD *)(v23 + 8LL * v27) = v31;
        v32 = *((_DWORD *)&Amd64EventSelectRegisters + v27);
        *(_QWORD *)(v31 + 16) = v28;
        __writemsr(v32, 0LL);
        result = (__int64 (__fastcall **)())Amd64FreeCounter(v27);
        v24 = Amd64NumberDataFabricCounters;
        ++v27;
        v25 = Amd64NumberCoreCounters;
        v26 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
        if ( v27 >= Amd64NumberDataFabricCounters + Amd64NumberCoreCounters + Amd64NumberCacheCounters )
          return result;
      }
      v30 = v27 - v24;
LABEL_19:
      v29 = v30 - v25;
      goto LABEL_20;
    }
  }
  return result;
}
