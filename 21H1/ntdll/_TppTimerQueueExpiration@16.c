/*
 * XREFs of _TppTimerQueueExpiration@16 @ 0x4B2B7250
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppPHDelete@8 @ 0x4B2B750C (_TppPHDelete@8.c)
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwAssociateWaitCompletionPacket@32 @ 0x4B2F3280 (_ZwAssociateWaitCompletionPacket@32.c)
 *     _ZwSetTimer2@16 @ 0x4B2F4460 (_ZwSetTimer2@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _TppETWTimerExpirationBegin@4 @ 0x4B384E4F (_TppETWTimerExpirationBegin@4.c)
 *     _TppETWTimerExpirationEnd@4 @ 0x4B384EAB (_TppETWTimerExpirationEnd@4.c)
 *     _TppETWTimerSetNtTimer@16 @ 0x4B384F99 (_TppETWTimerSetNtTimer@16.c)
 */

NTSTATUS __stdcall TppTimerQueueExpiration(unsigned int *a1, int a2, _RTL_SRWLOCK *a3, int a4)
{
  signed __int64 v4; // kr00_8
  _RTL_SRWLOCK *v5; // edi
  _RTL_SRWLOCK *v6; // esi
  int v7; // eax
  unsigned int Value; // edi
  unsigned int v9; // edx
  unsigned int *v10; // ecx
  unsigned int **v11; // eax
  unsigned int v12; // eax
  PRTL_SRWLOCK v13; // ebx
  _DWORD *v14; // edi
  int v15; // eax
  unsigned int v17; // edi
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // ecx
  bool v21; // zf
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // [esp-4h] [ebp-5Ch]
  BOOLEAN *v25; // [esp+0h] [ebp-58h]
  int v26; // [esp+4h] [ebp-54h]
  int v27; // [esp+8h] [ebp-50h]
  int v28; // [esp+Ch] [ebp-4Ch]
  unsigned int v29; // [esp+10h] [ebp-48h]
  _DWORD v30[2]; // [esp+18h] [ebp-40h] BYREF
  int v31; // [esp+20h] [ebp-38h]
  PRTL_SRWLOCK SRWLock; // [esp+24h] [ebp-34h]
  unsigned int v33; // [esp+28h] [ebp-30h] BYREF
  unsigned int *v34; // [esp+2Ch] [ebp-2Ch]
  int v35; // [esp+30h] [ebp-28h]
  unsigned int v36; // [esp+34h] [ebp-24h]
  LARGE_INTEGER DueTime; // [esp+38h] [ebp-20h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [esp+40h] [ebp-18h] BYREF

  v34 = a1;
  SRWLock = a3;
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
  if ( *(_DWORD *)(a4 + 4) )
  {
    LOBYTE(v31) = 1;
    while ( 1 )
    {
      v4 = MEMORY[0x7FFE0014];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v24 = 2;
  }
  else
  {
    LOBYTE(v31) = 0;
    do
    {
      v36 = HIDWORD(RtlpFreezeTimeBias);
      v35 = MEMORY[0x7FFE03B4];
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v33 = MEMORY[0x7FFE03B0];
    }
    while ( v35 != MEMORY[0x7FFE03B4] || __PAIR64__(v36, RtlpFreezeTimeBias) != RtlpFreezeTimeBias );
    v24 = 20;
    v4 = MEMORY[0x7FFE0008] - __PAIR64__(MEMORY[0x7FFE03B4], v33) - __PAIR64__(v36, RtlpFreezeTimeBias);
  }
  v5 = SRWLock;
  v6 = &SRWLock[v24];
  if ( !v34 || v34[9] )
    TppRaiseInvalidParameter();
  v34[9] = 3;
  v30[1] = v30;
  v30[0] = v30;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478;
  if ( *(_BYTE *)v7 )
    TppETWTimerExpirationBegin(v6);
  RtlAcquireSRWLockExclusive(v5);
  while ( 1 )
  {
    Value = v6[2].Value;
    v9 = Value;
    if ( !Value || *(_QWORD *)(Value + 24) > v4 )
      break;
    TppPHDelete(v25, v26);
    TppPHDelete(v27, v28);
    *(_BYTE *)(Value + 44) = 0;
    v10 = v34;
    if ( (unsigned int *)*v34 != &v33 )
      __fastfail(3u);
    v11 = (unsigned int **)(Value - 24);
    *v11 = &v33;
    v11[1] = v10;
    *v10 = Value - 24;
    v34 = (unsigned int *)(Value - 24);
  }
  v12 = v6[3].Value;
  if ( v12 )
  {
    v17 = *(_DWORD *)(Value + 16);
    v18 = *(_DWORD *)(v9 + 20);
    v29 = v18;
    v19 = (__int64)(*(_QWORD *)(v12 + 16) - __PAIR64__(v18, v17)) / 10000;
    v20 = v29;
    v33 = v19;
    v6[17].Value = v19;
    v21 = (_BYTE)v31 == 0;
    v6->Value = v17;
    v6[1].Value = v29;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)v19;
    if ( v21 )
    {
      v22 = (v4 - __PAIR64__(v29, v17)) >> 32;
      v17 = v4 - v17;
      v20 = v22;
      v29 = v22;
    }
    DueTime.QuadPart = __PAIR64__(v20, v17);
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v23 = 2147353478;
    if ( *(_BYTE *)v23 )
      TppETWTimerSetNtTimer(v17, v29);
    ZwSetTimer2(v6[4].Ptr, &DueTime, 0, &Parameters);
  }
  else
  {
    v6->Value = 0;
    v6[1].Value = 0;
  }
  v13 = SRWLock;
  RtlReleaseSRWLockExclusive(SRWLock);
  v14 = (_DWORD *)v30[0];
  while ( v14 != v30 )
  {
    v14 = (_DWORD *)*v14;
    TppSingleTimerExpiration(v31);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v15 = 2147353478;
  if ( *(_BYTE *)v15 )
    TppETWTimerExpirationEnd(v6);
  return ZwAssociateWaitCompletionPacket(v6[5].Ptr, v13[-6].Ptr, v6[4].Ptr, &v6[6], v13, 0, (unsigned __int8)v31, v25);
}
