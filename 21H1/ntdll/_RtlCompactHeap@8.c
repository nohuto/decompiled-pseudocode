/*
 * XREFs of _RtlCompactHeap@8 @ 0x4B3567C0
 * Callers:
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 */

int __stdcall RtlCompactHeap(_DWORD *a1, int a2)
{
  int v3; // edx
  _BYTE *v4; // eax
  struct _TEB *v5; // esi
  unsigned int v6; // [esp+18h] [ebp-20h]
  char v7; // [esp+1Fh] [ebp-19h]

  v7 = 0;
  if ( a1[2] == -571548178 )
  {
    RtlpHpHeapCompact(a1, a2 & 1);
    return 8;
  }
  else
  {
    v3 = a1[17] | a2;
    if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(a1);
    }
    else
    {
      v6 = 0;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(a1[50]);
        v7 = 1;
      }
      v4 = (_BYTE *)RtlpCoalesceHeap(a1);
      if ( v4 )
      {
        v6 = 8 * *(unsigned __int16 *)v4;
        if ( a1[19] )
        {
          v4[3] = *v4 ^ v4[1] ^ v4[2];
          *(_DWORD *)v4 ^= a1[20];
        }
      }
      if ( (_DWORD *)a1[35] != a1 + 35 && *(_DWORD *)(a1[36] + 20) > v6 )
        v6 = *(_DWORD *)(a1[36] + 20);
      if ( !v6 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v5 = NtCurrentTeb();
        v5->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v7 )
        RtlLeaveCriticalSection(a1[50]);
      return v6;
    }
  }
}
