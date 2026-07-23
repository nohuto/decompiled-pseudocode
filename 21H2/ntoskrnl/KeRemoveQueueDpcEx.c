/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140246860
 * Callers:
 *     EtwpFreeCompression @ 0x140246784 (EtwpFreeCompression.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1402467E8 (EtwpCancelPendingStackwalkApcs.c)
 *     KeRemoveQueueDpc @ 0x140246840 (KeRemoveQueueDpc.c)
 *     KiCheckAndRearmForceIdle @ 0x14024DA3C (KiCheckAndRearmForceIdle.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EE9E0 (ExpCancelTimer.c)
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     KeClearForceIdle @ 0x1405230B8 (KeClearForceIdle.c)
 *     VfWdCheckForSettingsChange @ 0x1409E1BA4 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x14029DB20 (KiGetDeepIdleProcessors.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall KeRemoveQueueDpcEx(__int64 a1, char a2)
{
  char v4; // r15
  __int64 v5; // r13
  bool v6; // r14
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 *i; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r14
  int IsEmptyAffinity; // eax
  signed __int32 v26[8]; // [rsp+0h] [rbp-228h] BYREF
  char v27; // [rsp+20h] [rbp-208h]
  int v28; // [rsp+24h] [rbp-204h] BYREF
  _QWORD v29[2]; // [rsp+28h] [rbp-200h] BYREF
  __int16 v30; // [rsp+38h] [rbp-1F0h]
  int v31; // [rsp+3Ah] [rbp-1EEh]
  __int16 v32; // [rsp+3Eh] [rbp-1EAh]
  _DWORD v33[16]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v34[22]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v35[176]; // [rsp+130h] [rbp-F8h] BYREF
  int v36; // [rsp+220h] [rbp-8h]

  memset(v33, 0, sizeof(v33));
  memset(v35, 0, 0xA8uLL);
  v31 = 0;
  v32 = 0;
  v28 = 0;
  memset(v34, 0, 0xA8uLL);
  v4 = 0;
  v27 = 0;
  _disable();
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (v36 & 0x200) != 0;
  if ( v5 )
  {
    v33[0] = *(_DWORD *)a1;
    v8 = HIWORD(v33[0]);
    if ( HIWORD(v33[0]) >= 0x500u )
      LOWORD(v8) = HIWORD(v33[0]) - 1280;
    v9 = KiProcessorBlock[(unsigned __int16)v8];
    if ( LOBYTE(v33[0]) != 26 || (v10 = 12520LL, !*(_BYTE *)(v9 + 12584)) )
      v10 = 12480LL;
    v11 = v9 + v10;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + v10 + 16));
    if ( v5 == *(_QWORD *)(a1 + 56) && v33[0] == *(_DWORD *)a1 )
    {
      v12 = (__int64 *)(a1 + 8);
      v13 = (_QWORD *)v11;
      --*(_DWORD *)(v11 + 24);
      for ( i = *(__int64 **)v11; i != v12; i = (__int64 *)*i )
        v13 = i;
      v15 = *v12;
      *v13 = *v12;
      if ( !v15 )
        *(_QWORD *)(v11 + 8) = v13;
      *(_QWORD *)(a1 + 56) = 0LL;
      v4 = 1;
      v16 = *(_QWORD *)(v9 + 33976);
      v27 = 1;
      if ( v16 && v11 == v9 + 12480 )
        --*(_DWORD *)(v16 + 28);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *(_QWORD *)(a1 + 16) )
  {
    KiGetDeepIdleProcessors(v35, v34);
    v17 = 0;
    if ( LOWORD(v34[0]) )
    {
      v18 = *(_QWORD *)(a1 + 16);
      do
      {
        v19 = v17++;
        v34[v19 + 1] &= v18;
      }
      while ( v17 < LOWORD(v34[0]) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( LOWORD(v34[0]) > (unsigned __int16)Group )
      v34[Group + 1] &= ~CurrentPrcb->GroupSetMember;
    v29[1] = v34[1];
    v29[0] = v34;
    v30 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v28, v29) )
    {
      v22 = KiProcessorBlock[v28];
      if ( *(_BYTE *)a1 != 26 || (v23 = 12520LL, !*(_BYTE *)(v22 + 12584)) )
        v23 = 12480LL;
      if ( !v5 )
      {
        _InterlockedOr(v26, 0);
        v24 = v22 + v23;
        if ( *(_QWORD *)(v22 + v23 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v24 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v24 + 16));
          if ( (v36 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(_QWORD *)(v22 + v23 + 32) != a1 && (unsigned int)LOWORD(v34[0]) > *(unsigned __int8 *)(v22 + 208) )
        v34[*(unsigned __int8 *)(v22 + 208) + 1] &= ~*(_QWORD *)(v22 + 200);
    }
    IsEmptyAffinity = KeIsEmptyAffinityEx(v34);
    v4 = v27;
    if ( !IsEmptyAffinity )
      KeGenericProcessorCallback(v34, xHalTimerWatchdogStop, 0LL, 2LL);
  }
  return v4;
}
