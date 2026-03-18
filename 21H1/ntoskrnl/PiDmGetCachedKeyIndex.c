/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x1406A8F6C
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406A8E04 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406A8FCC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DEFC0 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14072E1E8 (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmGetCachedKeyIndex(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  int v6; // ebx
  __int64 v7; // r8
  __int64 v9; // rcx

  v3 = 0LL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v6 = *(_DWORD *)(a3 + 16);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 24 * v3);
    if ( v6 == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)a3 - *(_QWORD *)v7;
      if ( *(_QWORD *)a3 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v3;
}
