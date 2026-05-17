/*
 * XREFs of TppTimerQueueExpiration @ 0x180011AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x1800135F8 (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009E000 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A03C0 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x180112890 (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x1801129C4 (TppETWTimerSetNtTimer.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rbx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v31; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v32; // [rsp+48h] [rbp-31h]
  __int64 v33; // [rsp+50h] [rbp-29h]
  __int64 v34; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v35[6]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v36; // [rsp+66h] [rbp-13h]
  __int64 v37; // [rsp+80h] [rbp+7h]
  int v38; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v39; // [rsp+90h] [rbp+17h]

  v4 = a3;
  v38 = 0;
  v39 = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 8LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v6 = 128LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v33 = v7;
  v8 = v6 + v4;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v32 = &v31;
  v31 = &v31;
  v9 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
  {
    v7 = v33;
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(v4);
  v11 = (_QWORD *)(v8 + 8);
  while ( *v11 && *(_QWORD *)(*v11 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 8, *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(v8 + 16, v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v32;
    if ( *v32 != &v31 )
      __fastfail(3u);
    v13[1] = v32;
    *v13 = &v31;
    *v15 = v13;
    v32 = (_QWORD **)v13;
  }
  v16 = *(_QWORD *)(v8 + 16);
  if ( v16 )
  {
    v17 = *(_QWORD *)(*v11 + 32LL);
    v18 = *(_QWORD *)(v16 + 32) - v17;
    *(_QWORD *)v8 = v17;
    v19 = (unsigned __int128)(v18 * (__int128)0x346DC5D63886594BLL) >> 64;
    v20 = v18 / 10000;
    v21 = 10000LL * (unsigned int)(v18 / 10000);
    *(_DWORD *)(v8 + 112) = v20;
    v39 = v21;
    if ( !v5 )
      v17 = v7 - v17;
    v34 = v17;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v19) )
      v22 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v22 = 2147353478LL;
    if ( *(_BYTE *)v22 )
      TppETWTimerSetNtTimer(v8, v17, (unsigned int)v20);
    ZwSetTimer2(*(_QWORD *)(v8 + 24), &v34, 0LL, &v38);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v26 = v31;
  while ( v26 != &v31 )
  {
    v27 = v26 - 31;
    LOBYTE(v25) = v5;
    v26 = (_QWORD *)*v26;
    TppSingleTimerExpiration(v27, v4, v25);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v23) )
    v29 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v29 = 2147353478LL;
  if ( *(_BYTE *)v29 )
  {
    v37 = v8;
    v36 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, 8LL, v35);
  }
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v8 + 32),
           *(_QWORD *)(v4 - 48),
           *(_QWORD *)(v8 + 24),
           v8 + 40,
           v4,
           0,
           v5,
           0LL);
}
