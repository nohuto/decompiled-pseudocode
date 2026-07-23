/*
 * XREFs of _RtlTraceDatabaseEnumerate@12 @ 0x4B36A300
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

char __stdcall RtlTraceDatabaseEnumerate(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int i; // ecx
  char v6; // bl

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  *(_DWORD *)(a1 + 24) = 0;
  if ( *a2 )
  {
    if ( *a2 == a1 )
    {
      v3 = a2[1];
      v4 = v3;
      if ( v3 < *(_DWORD *)(a1 + 52) )
      {
        i = a2[2];
        goto LABEL_10;
      }
    }
LABEL_4:
    v6 = 0;
  }
  else
  {
    a2[1] = 0;
    v3 = 0;
    *a2 = a1;
    v4 = 0;
    for ( i = **(_DWORD **)(a1 + 56); ; i = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 4 * v3++ + 4) )
    {
      a2[2] = i;
LABEL_10:
      if ( i )
        break;
      v4 = v3 + 1;
      a2[1] = v3 + 1;
      if ( v3 + 1 >= *(_DWORD *)(a1 + 52) )
        goto LABEL_12;
    }
    if ( v4 < *(_DWORD *)(a1 + 52) )
      goto LABEL_14;
LABEL_12:
    if ( !i )
    {
      *a3 = 0;
      goto LABEL_4;
    }
LABEL_14:
    v6 = 1;
    *a3 = i;
    a2[2] = *(_DWORD *)(a2[2] + 24);
  }
  *(_DWORD *)(a1 + 24) = 0;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  return v6;
}
