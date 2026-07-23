/*
 * XREFs of EmonAllocateCounter @ 0x1404D32A0
 * Callers:
 *     EmonEnableMonitoring @ 0x1404D3730 (EmonEnableMonitoring.c)
 * Callees:
 *     HalpAllocateHalCounters @ 0x1404B92F4 (HalpAllocateHalCounters.c)
 */

__int64 __fastcall EmonAllocateCounter(int a1, __int64 a2, int a3, int *a4)
{
  int HalCounters; // eax
  __int64 v9; // rdx
  int v10; // r10d
  __int64 v11; // r8
  int v12; // r11d
  int v13; // r9d
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  _DWORD *v16; // r11
  __int64 result; // rax

  HalCounters = HalpAllocateHalCounters();
  v10 = 0;
  if ( HalCounters < 0 )
    return 2147483665LL;
  v11 = EmonCounterStatus + 16LL * EmonNumberCounters * KeGetPcr()->Prcb.Number;
  if ( !v9 || !*(_BYTE *)(v9 + 220) )
  {
    v13 = EmonNumberArchCounters - 1;
    v15 = EmonNumberArchCounters - 1;
    if ( EmonNumberArchCounters - 1 >= 0 )
    {
      v16 = (_DWORD *)(v11 + 16LL * v13);
      while ( *v16 != 3 || (__readmsr(v13 + 390) & 0x4000FF) != 0 )
      {
        --v13;
        v16 -= 4;
        if ( --v15 < 0 )
          goto LABEL_13;
      }
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  v12 = *(unsigned __int8 *)(v9 + 212);
  v13 = v12 + EmonNumberArchCounters;
  if ( *(_DWORD *)(v11 + 16LL * (unsigned int)(v12 + EmonNumberArchCounters)) != 3
    || (v14 = __readmsr(0x38Fu), _bittest64((const __int64 *)&v14, (unsigned __int8)(v12 + 32))) )
  {
LABEL_13:
    _InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
    return 2147483665LL;
  }
LABEL_6:
  *(_DWORD *)(v11 + 16LL * v13) = a1;
  if ( a1 == 2 )
  {
    *(_QWORD *)(v11 + 16LL * v13 + 4) = 24LL;
  }
  else
  {
    *(_DWORD *)(v11 + 16LL * v13 + 4) = a3;
    *(_DWORD *)(v11 + 16LL * v13 + 8) = *(_DWORD *)(a2 + 24);
    v10 = *(_DWORD *)(a2 + 208);
  }
  *(_DWORD *)(v11 + 16LL * v13 + 12) = v10;
  result = 0LL;
  *a4 = v13;
  return result;
}
