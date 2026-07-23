/*
 * XREFs of HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A9EAC
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A9B84 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptUpdateLocalUnitIdentifier(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // edx
  ULONG_PTR v9; // rax
  char v11; // cl
  __int64 v12; // r9
  __int64 ProcessorIndexFromNumber; // r15
  __int64 v14; // r10
  __int64 (__fastcall *v15)(_QWORD, int *, __int64, __int64); // rax
  int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  _DWORD *v19; // rax
  int v20; // r11d
  unsigned __int64 v21; // rdx
  unsigned __int64 i; // rdx
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = a2;
  v4 = a2;
  v6 = 0;
  if ( !(_DWORD)HalpInterruptProcessorCount )
  {
LABEL_5:
    HalpInterruptSetProblemEx(0LL, 21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x3F1u);
    return 3221226021LL;
  }
  v9 = HalpInterruptProcessorState;
  while ( *(_DWORD *)v9 != a1 )
  {
    ++v6;
    v9 += 64LL;
    if ( v6 >= (unsigned int)HalpInterruptProcessorCount )
      goto LABEL_5;
  }
  v11 = *(_BYTE *)(v9 + 13);
  *(_DWORD *)v9 = v4;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)((v9 + 16) & -(__int64)(v11 != 0)));
  v14 = HalpInterruptTargets + 24 * ProcessorIndexFromNumber;
  *(_OWORD *)a3 = *(_OWORD *)v14;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v14 + 16);
  if ( *(_DWORD *)v14 == 4 )
  {
    *(_DWORD *)(v14 + 8) = v4;
    v4 = v25;
  }
  v15 = *(__int64 (__fastcall **)(_QWORD, int *, __int64, __int64))(HalpInterruptController + 144);
  if ( v15 )
  {
    LOBYTE(v12) = 1;
    v16 = v15(*(_QWORD *)(HalpInterruptController + 16), &v25, a4, v12);
    if ( v16 < 0 )
    {
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        9,
        v16,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
        0x414u);
      return v17;
    }
    v14 = HalpInterruptTargets + 24 * ProcessorIndexFromNumber;
    *(_OWORD *)v14 = *(_OWORD *)a4;
    *(_QWORD *)(v14 + 16) = *(_QWORD *)(a4 + 16);
    v4 = v25;
  }
  v18 = 0;
  if ( HalpInterruptDynamicProcessorCount )
  {
    v19 = (_DWORD *)HalpInterruptDynamicProcessorState;
    while ( *v19 != a1 )
    {
      ++v18;
      v19 += 16;
      if ( v18 >= HalpInterruptDynamicProcessorCount )
        goto LABEL_18;
    }
    *v19 = v4;
  }
LABEL_18:
  v20 = 29;
  if ( *(_DWORD *)a3 == 6 )
  {
    v21 = HalpInterruptClusterData;
    if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    {
LABEL_22:
      HalpInterruptSetProblemEx(0LL, 29, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x44Bu);
    }
    else
    {
      while ( *(_DWORD *)v21 != *(_DWORD *)(a3 + 8) )
      {
        v21 += 24LL;
        if ( v21 >= HalpInterruptClusterDataEnd )
          goto LABEL_22;
      }
      v23 = *(_QWORD *)(v21 + 8) & ~(1LL << (KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F));
      *(_QWORD *)(v21 + 8) = v23;
      if ( !v23 )
        *(_DWORD *)v21 = -1;
    }
  }
  *(_OWORD *)a4 = *(_OWORD *)v14;
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v14 + 16);
  if ( *(_DWORD *)a4 == 6 )
  {
    for ( i = HalpInterruptClusterData; ; i += 24LL )
    {
      if ( i >= HalpInterruptClusterDataEnd )
      {
        HalpInterruptSetProblemEx(0LL, v20, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x46Eu);
        return 0LL;
      }
      if ( *(_DWORD *)i == -1 || *(_DWORD *)i == *(_DWORD *)(a4 + 8) )
        break;
    }
    v24 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber];
    *(_DWORD *)i = *(_DWORD *)(a4 + 8);
    *(_QWORD *)(i + 8) |= 1LL << (v24 & 0x3F);
  }
  return 0LL;
}
