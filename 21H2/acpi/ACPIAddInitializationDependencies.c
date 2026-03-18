/*
 * XREFs of ACPIAddInitializationDependencies @ 0x1C0006354
 * Callers:
 *     ACPIBuildFilter @ 0x1C0005430 (ACPIBuildFilter.c)
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0021E88 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIReserveDependencies @ 0x1C0021F38 (ACPIReserveDependencies.c)
 *     ACPIQueryDeviceBiosName @ 0x1C009255C (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIAddInitializationDependencies(__int64 a1)
{
  int v2; // edi
  char v3; // cl
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  v11 = 0LL;
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
    return (unsigned int)v2;
  if ( *(_QWORD *)(a1 + 648) )
  {
    v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 760));
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 648), 0x4F706341u);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v3 = 1;
  }
  v4 = 0;
  v5 = a1 + 408;
  do
  {
    if ( *(_QWORD *)v5 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
      if ( *(_QWORD *)(v8 + 96) )
      {
        v9 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(v8 + 32));
        v2 = v9;
        if ( v9 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
    ++v4;
    v5 += 8LL;
  }
  while ( v4 <= 4 );
  v6 = *(_QWORD *)(a1 + 448);
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v10 + 96) )
    {
      v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(v10 + 32));
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = 1;
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1000), 0x26u) && *(_QWORD *)(a1 + 968) )
  {
    v2 = ACPIReserveDependencies(*(_QWORD *)(a1 + 784));
    if ( v2 < 0 )
      return (unsigned int)v2;
    goto LABEL_20;
  }
  if ( v3 )
LABEL_20:
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1000), 0x40uLL);
  v2 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 768), &v11);
  if ( v2 >= 0 )
    v2 = IoResolveDependency(&v11, *(_QWORD *)(a1 + 784));
  if ( *((_QWORD *)&v11 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v11 + 1), 0x53706341u);
  return (unsigned int)v2;
}
