/*
 * XREFs of _RtlpWnfSetRetryTimer@8 @ 0x4B33C90E
 * Callers:
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 * Callees:
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 */

NTSTATUS __stdcall RtlpWnfSetRetryTimer(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int64 v2; // kr08_8
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // edx
  LARGE_INTEGER DueTime; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v8; // [esp+10h] [ebp-14h]
  unsigned int v9; // [esp+14h] [ebp-10h]
  unsigned int v10; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  result = *(_DWORD *)(dword_4B3A664C + 60) | *(_DWORD *)(dword_4B3A664C + 56);
  if ( !*(_QWORD *)(dword_4B3A664C + 56) || *(_QWORD *)(dword_4B3A664C + 56) > a1 )
  {
    while ( 1 )
    {
      v9 = HIDWORD(RtlpFreezeTimeBias);
      v10 = RtlpFreezeTimeBias;
      v11 = MEMORY[0x7FFE03B4];
      v12 = MEMORY[0x7FFE03B0];
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v8 = MEMORY[0x7FFE03B0];
      if ( v12 == MEMORY[0x7FFE03B0] && v11 == MEMORY[0x7FFE03B4] )
      {
        v11 = HIDWORD(RtlpFreezeTimeBias);
        if ( v10 == (_DWORD)RtlpFreezeTimeBias && v9 == v11 )
          break;
      }
    }
    v2 = MEMORY[0x7FFE0008] - __PAIR64__(MEMORY[0x7FFE03B4], v8) - __PAIR64__(v9, v10);
    if ( v2 <= a1 )
    {
      v4 = (a1 - v2) >> 32;
      v3 = a1 - v2;
    }
    else
    {
      v3 = 500000;
      v4 = 0;
    }
    v5 = dword_4B3A664C;
    *(_DWORD *)(dword_4B3A664C + 56) = v3;
    v6 = -v3;
    *(_DWORD *)(v5 + 60) = v4;
    DueTime.LowPart = v6;
    DueTime.HighPart = (unsigned __int64)-__SPAIR64__(v4, v6) >> 32;
    return TpSetTimerEx(*(PTP_TIMER *)(v5 + 48), &DueTime, 0, 0x32u);
  }
  return result;
}
