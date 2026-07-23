/*
 * XREFs of HalAllocateCrashDumpRegisters @ 0x1404B8F80
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x1409CBD90 (VfAllocateCrashDumpRegisters.c)
 * Callees:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6F2C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 */

PVOID __stdcall HalAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  ULONG v2; // edi
  int v5; // edx
  __int64 v6; // rcx
  PVOID result; // rax
  _DMA_OPERATIONS *MapRegistersAtHighLevel; // rax
  int v9; // edx
  __int64 v10; // rcx

  v2 = 0;
  if ( LOBYTE(AdapterObject[27].Version) || !*((_BYTE *)&AdapterObject[27].Size + 3) )
  {
    if ( HalpDmaHibernateRegisterPhase == 1 )
    {
      v5 = HalpDmaHibernatePhase1RegisterSetIndex;
      v6 = 2LL * (unsigned int)HalpDmaHibernatePhase1RegisterSetIndex;
      *NumberOfMapRegisters = *((_DWORD *)&HalpDmaHibernateRegisterSets
                              + 4 * (unsigned int)HalpDmaHibernatePhase1RegisterSetIndex
                              + 2);
      result = (PVOID)*((_QWORD *)&HalpDmaHibernateRegisterSets + v6);
      AdapterObject[14].DmaOperations = (_DMA_OPERATIONS *)result;
      *(_DWORD *)&AdapterObject[15].Version = *NumberOfMapRegisters;
      HalpDmaHibernatePhase1RegisterSetIndex = v5 + 1;
      return result;
    }
    if ( *NumberOfMapRegisters > *(_DWORD *)&AdapterObject[14].Version )
    {
      *(_DWORD *)&AdapterObject[15].Version = 0;
      result = 0LL;
      *NumberOfMapRegisters = 0;
      return result;
    }
    MapRegistersAtHighLevel = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegistersAtHighLevel(
                                                   AdapterObject,
                                                   NumberOfMapRegisters);
    AdapterObject[14].DmaOperations = MapRegistersAtHighLevel;
    if ( MapRegistersAtHighLevel )
    {
      v9 = HalpDmaHibernateRegisterSetIndex;
      if ( (unsigned int)HalpDmaHibernateRegisterSetIndex < 4 )
      {
        v10 = 2LL * (unsigned int)HalpDmaHibernateRegisterSetIndex;
        *((_QWORD *)&HalpDmaHibernateRegisterSets + v10) = MapRegistersAtHighLevel;
        *((_DWORD *)&HalpDmaHibernateRegisterSets + 2 * v10 + 2) = *NumberOfMapRegisters;
        HalpDmaHibernateRegisterSetIndex = v9 + 1;
      }
    }
    else
    {
      *NumberOfMapRegisters = 0;
    }
    v2 = *NumberOfMapRegisters;
  }
  else
  {
    AdapterObject[14].DmaOperations = 0LL;
  }
  *(_DWORD *)&AdapterObject[15].Version = v2;
  result = AdapterObject[14].DmaOperations;
  HalpDmaHibernateAdapter = AdapterObject;
  return result;
}
