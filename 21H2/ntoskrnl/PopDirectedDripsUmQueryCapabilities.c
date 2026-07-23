/*
 * XREFs of PopDirectedDripsUmQueryCapabilities @ 0x1408F8AD4
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408F8A44 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopDirectedDripsQueryMitigationStatus @ 0x1408E3908 (PopDirectedDripsQueryMitigationStatus.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopDirectedDripsUmQueryCapabilities(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // edi
  _BYTE *PoolWithTag; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x206D654Du);
  if ( PoolWithTag )
  {
    *(_WORD *)PoolWithTag = 0;
    PopDirectedDripsQueryMitigationStatus(&v7, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
      *PoolWithTag = 1;
    if ( (v7 & 2) != 0 )
      PoolWithTag[1] = 1;
    *a1 = 2;
    *a2 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
