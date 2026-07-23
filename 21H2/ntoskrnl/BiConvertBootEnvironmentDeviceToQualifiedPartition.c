/*
 * XREFs of BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14096FB28
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140784F70 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToQualifiedPartition(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _OWORD *PoolWithTag; // rcx
  int v8; // eax

  if ( *(_DWORD *)a1 == 6 )
  {
    v6 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x4B444342u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *((_DWORD *)PoolWithTag + 14) = 0;
    *(_DWORD *)PoolWithTag = 6;
    if ( *(_DWORD *)(a1 + 32) )
    {
      v6 = -1073741637;
LABEL_13:
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
      return v6;
    }
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 == 1 )
    {
      *((_DWORD *)PoolWithTag + 7) = *(_DWORD *)(a1 + 40);
      *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      if ( v8 )
      {
        v6 = -1073741811;
        goto LABEL_13;
      }
      *((_DWORD *)PoolWithTag + 5) = 1;
      *(_OWORD *)((char *)PoolWithTag + 28) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)((char *)PoolWithTag + 44) = *(_OWORD *)(a1 + 16);
    }
    *a2 = PoolWithTag;
    *a3 = 60;
    return v6;
  }
  return (unsigned int)-1073741811;
}
