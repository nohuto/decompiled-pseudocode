/*
 * XREFs of HalpAcpiSetupPmRegister @ 0x140A660DC
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140A65ED8 (HalpAcpiInitializePmRegisters.c)
 *     HalpAcpiSetupPmRegisterLegacy @ 0x140A66080 (HalpAcpiSetupPmRegisterLegacy.c)
 * Callees:
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegister(SIZE_T NumberOfBytes, unsigned int a2, __int64 a3, __int64 a4)
{
  SIZE_T v5; // r10
  unsigned int v7; // ebx
  unsigned __int8 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  void *v12; // rax
  int v14; // ecx

  v5 = (unsigned int)NumberOfBytes;
  v7 = 0;
  *(_DWORD *)(a4 + 24) = a2;
  v8 = *(_BYTE *)(a3 + 3);
  if ( v8 <= 1u )
  {
    v9 = 1;
  }
  else
  {
    v9 = 2;
    if ( v8 != 2 )
    {
      v9 = 4;
      if ( v8 != 3 )
      {
        if ( v8 != 4 )
          return (unsigned int)-1073741823;
        v9 = 8;
      }
    }
  }
  v10 = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)v10 )
    v11 = v10 >> 3;
  else
    v11 = v9;
  if ( v9 < a2 )
    return (unsigned int)-1073741823;
  *(_DWORD *)(a4 + 28) = v11;
  if ( !*(_QWORD *)(a3 + 4) )
    return (unsigned int)-1073741823;
  switch ( *(_BYTE *)a3 )
  {
    case 0:
      *(_QWORD *)(a4 + 8) = HalMapIoSpace(*(LARGE_INTEGER *)(a3 + 4), v5, MmNonCached);
      *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadRegister;
      v12 = HalpAcpiPmRegisterWriteRegister;
      goto LABEL_10;
    case 1:
      *(_QWORD *)(a4 + 8) = *(unsigned int *)(a3 + 4);
      *(_QWORD *)(a4 + 32) = HalpAcpiPmRegisterReadPort;
      v12 = HalpAcpiPmRegisterWritePort;
LABEL_10:
      *(_QWORD *)(a4 + 40) = v12;
      goto LABEL_11;
    case 2:
      *(_DWORD *)(a4 + 16) = 0;
      v14 = *(_DWORD *)(a3 + 8) & 0x1F;
      *(_DWORD *)(a4 + 16) = v14;
      *(_DWORD *)(a4 + 16) = v14 | (*(_DWORD *)(a3 + 4) >> 11) & 0xE0;
      *(_WORD *)(a4 + 20) = *(_WORD *)(a3 + 4);
      *(_WORD *)(a4 + 22) = *(_WORD *)(a3 + 10);
      *(_QWORD *)(a4 + 32) = HalSystemVectorDispatchEntry;
      v12 = HalSystemVectorDispatchEntry;
      *(_QWORD *)(a4 + 8) = a4 + 16;
      goto LABEL_10;
  }
  v7 = -1073741637;
LABEL_11:
  if ( *(_QWORD *)(a4 + 8) )
    *(_BYTE *)a4 = 1;
  return v7;
}
