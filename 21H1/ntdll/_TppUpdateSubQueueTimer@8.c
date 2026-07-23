/*
 * XREFs of _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9
 * Callers:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwCancelTimer2@8 @ 0x4B2F32C0 (_ZwCancelTimer2@8.c)
 *     _ZwSetTimer2@16 @ 0x4B2F4460 (_ZwSetTimer2@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _TppETWTimerCancelNtTimer@4 @ 0x4B384D11 (_TppETWTimerCancelNtTimer@4.c)
 *     _TppETWTimerSetNtTimer@16 @ 0x4B384F99 (_TppETWTimerSetNtTimer@16.c)
 */

int __fastcall TppUpdateSubQueueTimer(unsigned int *a1, char a2)
{
  unsigned int *v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // kr00_8
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  LARGE_INTEGER DueTime; // [esp+38h] [ebp-20h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [esp+40h] [ebp-18h] BYREF

  v2 = a1;
  Parameters.Version = 0;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[2];
    v5 = *(_DWORD *)(v4 + 16);
    v6 = *(_DWORD *)(v4 + 20);
    v7 = (__int64)(*(_QWORD *)(v3 + 16) - __PAIR64__(v6, v5)) / 10000;
    if ( *a1 != v5 || a1[1] != v6 || a1[17] != (_DWORD)v7 )
    {
      a1[17] = v7;
      *a1 = v5;
      a1[1] = v6;
      Parameters.NoWakeTolerance = 10000LL * (unsigned int)v7;
      if ( !a2 )
      {
        while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
          _mm_pause();
        v2 = a1;
        v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v8 > __SPAIR64__(v6, v5) )
        {
          v5 = 0;
          v6 = 0;
        }
        else
        {
          v9 = (v8 - __PAIR64__(v6, v5)) >> 32;
          v5 = v8 - v5;
          v6 = v9;
        }
      }
      DueTime.QuadPart = __PAIR64__(v6, v5);
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (int)NtCurrentPeb()->SharedData + 556;
      else
        v10 = 2147353478;
      if ( *(_BYTE *)v10 )
        TppETWTimerSetNtTimer(v5, v6);
      LODWORD(v7) = ZwSetTimer2((HANDLE)v2[4], &DueTime, 0, &Parameters);
    }
  }
  else
  {
    LODWORD(v7) = a1[1] | *a1;
    if ( *(_QWORD *)a1 )
    {
      *a1 = 0;
      a1[1] = 0;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (int)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478;
      if ( *(_BYTE *)v11 )
        TppETWTimerCancelNtTimer(v2);
      LODWORD(v7) = ZwCancelTimer2((HANDLE)v2[4], 0);
    }
  }
  return v7;
}
