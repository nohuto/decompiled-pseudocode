/*
 * XREFs of IcSetPossibleInput @ 0x1C009D180
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D86C (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     IrqArbGetDeviceIrql @ 0x1C009BA8C (IrqArbGetDeviceIrql.c)
 */

__int64 __fastcall IcSetPossibleInput(unsigned int a1, __int64 a2, char a3, char a4)
{
  __int64 i; // r10
  unsigned int v6; // eax
  unsigned int v7; // ecx
  char v8; // al
  int v9; // edx
  __int64 v10; // rcx

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 )
    {
      v6 = *(_DWORD *)(i + 16);
      if ( a1 >= v6 && a1 <= *(_DWORD *)(i + 20) )
        break;
    }
  }
  v7 = a1 - v6;
  v8 = a3 & 0xA;
  if ( (a3 & 0xA) == 0xA )
  {
    v9 = 3;
  }
  else if ( v8 == 8 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 2;
    if ( v8 != 2 )
      v9 = v8 == 0;
  }
  v10 = 200LL * v7;
  *(_DWORD *)(v10 + i + 148) = v9;
  *(_DWORD *)(v10 + i + 152) = (a3 & 1) == 0;
  if ( !a4 || *(_DWORD *)(v10 + i + 36) != *(_DWORD *)(v10 + i + 44) )
    a4 = 0;
  *(_BYTE *)(v10 + i + 225) = a4;
  *(_DWORD *)(v10 + i + 140) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(v10 + i + 160) = *(_OWORD *)a2;
  return IrqArbGetDeviceIrql((_DWORD *)(i + 136 + v10), (_BYTE *)(v10 + i + 144));
}
