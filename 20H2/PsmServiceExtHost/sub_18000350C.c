/*
 * XREFs of sub_18000350C @ 0x18000350C
 * Callers:
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000350C(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  char *v4; // rdx
  __int64 v5; // rcx

  v2 = a2;
  v4 = *(char **)(a1 + 520);
  if ( (_BYTE)v2 == 6 )
  {
    if ( v4 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 520) = 0LL;
    }
  }
  else if ( (_BYTE)v2 )
  {
    RtlQueryPerformanceCounter(&v4[8 * (v2 - 1) + 8]);
  }
  v5 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(a1 + 549) = v2;
  return sub_18001BD70(v5);
}
