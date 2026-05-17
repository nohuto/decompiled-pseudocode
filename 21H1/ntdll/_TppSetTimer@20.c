/*
 * XREFs of _TppSetTimer@20 @ 0x4B2B3EA0
 * Callers:
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 * Callees:
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 *     _TppEnqueueTimer@8 @ 0x4B2B7991 (_TppEnqueueTimer@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _RtlNtStatusToDosErrorNoTeb@4 @ 0x4B2E5FE0 (_RtlNtStatusToDosErrorNoTeb@4.c)
 *     _TppETWTimerSet@8 @ 0x4B384F07 (_TppETWTimerSet@8.c)
 */

int __fastcall TppSetTimer(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  _QWORD *v5; // ebx
  int v6; // edi
  bool v7; // cl
  _DWORD *v8; // esi
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // kr00_8
  __int64 v12; // kr08_8
  int v13; // eax
  int v14; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v21; // [esp+28h] [ebp-Ch]
  bool v22; // [esp+33h] [ebp-1h]

  v5 = a3;
  v6 = a1;
  v7 = a3[1] >= 0;
  v22 = v7;
  v8 = (_DWORD *)(v6 + 200);
  *(_DWORD *)(v6 + 212) = a5;
  v21 = (v7 ? 8 : 80) + a2;
  *(_DWORD *)(v6 + 216) = a4;
  if ( v7 )
  {
    *(_BYTE *)(v6 + 222) |= 2u;
    v16 = *a3;
    v17 = a3[1];
    *v8 = *a3;
    *(_DWORD *)(v6 + 204) = v17;
    if ( !(v17 | v16) )
    {
      *(_DWORD *)(v6 + 204) = 0;
      *v8 = 1;
    }
  }
  else
  {
    if ( v6 == -200 )
    {
      v18 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v18);
      v10 = MEMORY[0];
      HIDWORD(v9) = MEMORY[4];
    }
    else
    {
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v6 = a1;
      v5 = a3;
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      HIDWORD(v9) = HIDWORD(v11);
      v10 = v11;
      v8 = (_DWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v11;
    }
    LODWORD(v9) = v10;
    v12 = v9 - *v5;
    if ( v12 < __SPAIR64__(HIDWORD(v9), v10) )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v8 = v12;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478;
  if ( *(_BYTE *)v13 )
    TppETWTimerSet(v21, v6);
  RtlAcquireSRWLockExclusive(a2);
  TppEnqueueTimer(v21, v6);
  LOBYTE(v14) = v22;
  TppUpdateSubQueueTimer(v21, v14);
  return RtlReleaseSRWLockExclusive(a2);
}
