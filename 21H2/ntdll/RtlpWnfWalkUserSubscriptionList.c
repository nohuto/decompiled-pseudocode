/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x1800640A0
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E6C (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180020570 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18006454C (RtlpDecRefWnfUserSubscription.c)
 *     RtlpWnfMarkFailure @ 0x18008C128 (RtlpWnfMarkFailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800DE928 (RtlpWnfETWEventCallback.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(_DWORD *a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  unsigned __int64 Value; // rdi
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  void *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  void *v15; // r12
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  _RTL_SRWLOCK *v19; // rbx
  int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-B0h]
  int v22; // [rsp+40h] [rbp-98h]
  int v23; // [rsp+50h] [rbp-88h]
  int v24; // [rsp+54h] [rbp-84h]
  void (__fastcall *v25)(__int64, __int64, _QWORD); // [rsp+60h] [rbp-78h]
  __int64 v26; // [rsp+68h] [rbp-70h]
  _RTL_SRWLOCK *v27; // [rsp+80h] [rbp-58h]
  char *v28; // [rsp+88h] [rbp-50h]
  PVOID SubProcessTag; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+98h] [rbp-40h]
  BOOL v31; // [rsp+E0h] [rbp+8h]
  int v34; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v23 = 0;
  v28 = (char *)a1 + (unsigned int)a1[11];
  SRWLock = a2 + 7;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v27 = a2 + 8;
  Value = a2[8].Value;
  while ( (_RTL_SRWLOCK *)Value != v6 )
  {
    v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement((volatile signed __int32 *)(Value + 72));
    v9 = a1[6] & *(_DWORD *)(Value + 56);
    if ( *(_DWORD *)(Value + 88)
      || !v9
      || ((v9 & 1) == 0 || *(_DWORD *)(Value + 48) && a1[4] - *(_DWORD *)(Value + 48) <= 0)
      && ((v9 & 0xFFFFFFFE) == 0 || *(_DWORD *)(Value + 152))
      && (v9 & 0x10) == 0
      || *(_DWORD *)(Value + 112) && v8 < *(_QWORD *)(Value + 120) && *(_DWORD *)(Value + 140) >= a1[4]
      || v3 && !*(_DWORD *)(Value + 136) )
    {
      v10 = (void *)(Value - 8);
      goto LABEL_11;
    }
    v22 = 0;
    v24 = 0;
    v25 = *(void (__fastcall **)(__int64, __int64, _QWORD))(Value + 24);
    v12 = *(_QWORD *)(Value + 16);
    v13 = *(_QWORD *)(v12 + 16);
    v26 = *(_QWORD *)(v12 + 48);
    v14 = *(_QWORD *)(Value + 32);
    v15 = *(void **)(Value + 40);
    *(_QWORD *)(Value + 144) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive(a2 + 7);
    v16 = 0;
    v34 = 0;
    v31 = 0;
    v17 = *(_QWORD *)(Value + 64);
    if ( v17 )
    {
      v31 = !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0LL);
      if ( !v31 )
      {
        if ( a3 != 1 )
        {
          v20 = 1;
          v19 = a2 + 7;
          v10 = (void *)(Value - 8);
          goto LABEL_47;
        }
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
        v31 = 1;
      }
    }
    if ( *(_DWORD *)(Value + 88) )
    {
      v10 = (void *)(Value - 8);
    }
    else
    {
      v24 = 1;
      SubProcessTag = RtlSetThreadSubProcessTag(v15);
      if ( (v9 & 1) != 0 )
        v22 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, _DWORD))v25)(
                v13,
                (unsigned int)a1[4],
                v26,
                v14,
                v28,
                a1[5]);
      if ( (v9 & 0x10) != 0 && !*(_DWORD *)(Value + 88) && (v22 >= 0 || (*(_BYTE *)(Value + 52) & 4) == 0) )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v25)(v13, 0LL, v26, v14, 0LL, 0);
        v22 = 0;
      }
      if ( (v9 & 0xFFFFFFEE) != 0 )
      {
        v22 = 0;
        v25(v13, v14, v9);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v18 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v18 = 2147353486LL;
      if ( *(_BYTE *)v18 )
      {
        v21 = v9;
        v10 = (void *)(Value - 8);
        RtlpWnfETWEventCallback(v13, a1[4], Value - 8, (_DWORD)a2, (__int64)v25, v21, v22);
      }
      else
      {
        v10 = (void *)(Value - 8);
      }
      RtlSetThreadSubProcessTag(SubProcessTag);
    }
    if ( v31 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
    v19 = a2 + 7;
    if ( !v24 )
      goto LABEL_61;
    RtlAcquireSRWLockExclusive(a2 + 7);
    v16 = 1;
    v34 = 1;
    if ( v22 != -1073741801 && v22 != -1073741267 )
    {
      if ( !*(_DWORD *)(Value + 48) || a1[4] - *(_DWORD *)(Value + 48) > 0 )
        *(_DWORD *)(Value + 48) = a1[4];
      if ( (*(_BYTE *)(Value + 52) & 4) != 0 && *(_DWORD *)(Value + 128) )
      {
        *(_DWORD *)(Value + 112) = 0;
        *(_QWORD *)(Value + 128) = 0LL;
        *(_QWORD *)(Value + 120) = 0LL;
        *(_DWORD *)(Value + 140) = 0;
      }
      goto LABEL_46;
    }
    if ( (*(_BYTE *)(Value + 52) & 4) != 0 )
    {
      v23 = 1;
      RtlpWnfMarkFailure(v10, (unsigned int)v22, (unsigned int)a1[4]);
LABEL_61:
      v16 = v34;
    }
LABEL_46:
    v20 = 0;
LABEL_47:
    *(_DWORD *)(Value + 136) = v20;
    if ( !v16 )
      RtlAcquireSRWLockExclusive(v19);
    *(_QWORD *)(Value + 144) = 0LL;
    v3 = a3;
LABEL_11:
    Value = *(_QWORD *)Value;
    RtlpDecRefWnfUserSubscription(v10);
    v6 = v27;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v23 != 0 ? 0xC000022D : 0;
}
