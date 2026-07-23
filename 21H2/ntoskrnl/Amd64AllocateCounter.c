/*
 * XREFs of Amd64AllocateCounter @ 0x1404DD968
 * Callers:
 *     Amd64EnableMonitoring @ 0x1404DDB60 (Amd64EnableMonitoring.c)
 * Callees:
 *     HalpAllocateHalCounters @ 0x1404B92F4 (HalpAllocateHalCounters.c)
 */

__int64 __fastcall Amd64AllocateCounter(int a1, _DWORD *a2, _DWORD *a3)
{
  int HalCounters; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  _DWORD *i; // r11
  __int64 result; // rax

  HalCounters = HalpAllocateHalCounters();
  v7 = 0;
  if ( HalCounters < 0 )
    return 2147483665LL;
  v8 = 0;
  v9 = 0LL;
  v10 = Amd64CounterStatus + ((unsigned __int64)KeGetPcr()->Prcb.Number << 6);
  for ( i = (_DWORD *)v10; *i != 3 || (__readmsr(v8 - 1073676288) & 0x4000FF) != 0; i += 4 )
  {
    ++v8;
    if ( ++v9 >= 4 )
    {
      _InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
      return 2147483665LL;
    }
  }
  *(_DWORD *)(v10 + 16LL * v8) = a1;
  if ( a1 == 2 )
  {
    *(_QWORD *)(v10 + 16LL * v8 + 4) = 24LL;
  }
  else
  {
    *(_DWORD *)(v10 + 16LL * v8 + 4) = *a2;
    *(_DWORD *)(v10 + 16LL * v8 + 8) = a2[6];
    v7 = a2[52];
  }
  *(_DWORD *)(v10 + 16LL * v8 + 12) = v7;
  result = 0LL;
  *a3 = v8;
  return result;
}
