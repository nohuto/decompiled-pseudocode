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
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800DE968 (RtlpWnfETWEventCallback.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  void *v16; // r12
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned int v24; // [rsp+28h] [rbp-B0h]
  int v25; // [rsp+40h] [rbp-98h]
  int v26; // [rsp+50h] [rbp-88h]
  int v27; // [rsp+54h] [rbp-84h]
  void (__fastcall *v28)(__int64, __int64, _QWORD); // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+68h] [rbp-70h]
  void (__fastcall *v30)(__int64); // [rsp+70h] [rbp-68h] BYREF
  __int64 v31; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-58h]
  char *v33; // [rsp+88h] [rbp-50h]
  void *v34; // [rsp+90h] [rbp-48h]
  volatile signed __int64 *v35; // [rsp+98h] [rbp-40h]
  BOOL v36; // [rsp+E0h] [rbp+8h]
  int v38; // [rsp+F0h] [rbp+18h]
  unsigned int v39; // [rsp+F8h] [rbp+20h]

  v38 = a3;
  v4 = a3;
  v30 = 0LL;
  v31 = 0LL;
  v26 = 0;
  v33 = (char *)a1 + (unsigned int)a1[11];
  v35 = (volatile signed __int64 *)(a2 + 56);
  RtlAcquireSRWLockExclusive(a2 + 56, a2, a3, a4);
  v7 = a2 + 64;
  v32 = a2 + 64;
  v8 = *(volatile signed __int32 **)(a2 + 64);
  while ( v8 != (volatile signed __int32 *)v7 )
  {
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v10 = a1[6] & v8[14];
    if ( *((_DWORD *)v8 + 22)
      || !v10
      || ((v10 & 1) == 0 || *((_DWORD *)v8 + 12) && a1[4] - *((_DWORD *)v8 + 12) <= 0)
      && ((v10 & 0xFFFFFFFE) == 0 || *((_DWORD *)v8 + 38))
      && (v10 & 0x10) == 0
      || *((_DWORD *)v8 + 28) && v9 < *((_QWORD *)v8 + 15) && *((_DWORD *)v8 + 35) >= a1[4]
      || v4 && !*((_DWORD *)v8 + 34) )
    {
      v11 = (__int64 *)(v8 - 2);
      goto LABEL_11;
    }
    v25 = 0;
    v27 = 0;
    v28 = (void (__fastcall *)(__int64, __int64, _QWORD))*((_QWORD *)v8 + 3);
    v13 = *((_QWORD *)v8 + 2);
    v14 = *(_QWORD *)(v13 + 16);
    v29 = *(_QWORD *)(v13 + 48);
    v15 = *((_QWORD *)v8 + 4);
    v16 = (void *)*((_QWORD *)v8 + 5);
    *((_QWORD *)v8 + 18) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
    v19 = 0LL;
    v39 = 0;
    v36 = 0;
    v20 = *((_QWORD *)v8 + 8);
    if ( v20 )
    {
      v36 = !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0LL);
      if ( !v36 )
      {
        if ( v38 != 1 )
        {
          v23 = 1;
          v22 = a2 + 56;
          v11 = (__int64 *)(v8 - 2);
          goto LABEL_48;
        }
        RtlAcquireSRWLockExclusive(*((_QWORD *)v8 + 8) + 24LL, 0LL, v17, v18);
        v36 = 1;
      }
    }
    if ( *((_DWORD *)v8 + 22) )
    {
      v11 = (__int64 *)(v8 - 2);
    }
    else
    {
      v27 = 1;
      v34 = RtlSetThreadSubProcessTag(v16);
      if ( (v10 & 1) != 0 )
        v25 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, _DWORD))v28)(
                v14,
                (unsigned int)a1[4],
                v29,
                v15,
                v33,
                a1[5]);
      if ( (v10 & 0x10) != 0 && !*((_DWORD *)v8 + 22) && (v25 >= 0 || (v8[13] & 4) == 0) )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v28)(v14, 0LL, v29, v15, 0LL, 0);
        v25 = 0;
      }
      if ( (v10 & 0xFFFFFFEE) != 0 )
      {
        v25 = 0;
        v28(v14, v15, v10);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v21 = 2147353486LL;
      if ( *(_BYTE *)v21 )
      {
        v24 = v10;
        v11 = (__int64 *)(v8 - 2);
        RtlpWnfETWEventCallback(v14, a1[4], (_DWORD)v8 - 8, a2, (__int64)v28, v24, v25);
      }
      else
      {
        v11 = (__int64 *)(v8 - 2);
      }
      RtlSetThreadSubProcessTag(v34);
    }
    if ( v36 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v8 + 8) + 24LL));
    v22 = a2 + 56;
    if ( !v27 )
      goto LABEL_62;
    RtlAcquireSRWLockExclusive(a2 + 56, v19, v17, v18);
    v19 = 1LL;
    v39 = 1;
    if ( v25 != -1073741801 && v25 != -1073741267 )
    {
      if ( !*((_DWORD *)v8 + 12) || a1[4] - *((_DWORD *)v8 + 12) > 0 )
        *((_DWORD *)v8 + 12) = a1[4];
      if ( (v8[13] & 4) != 0 && *((_DWORD *)v8 + 32) )
      {
        *((_DWORD *)v8 + 28) = 0;
        *((_QWORD *)v8 + 16) = 0LL;
        *((_QWORD *)v8 + 15) = 0LL;
        *((_DWORD *)v8 + 35) = 0;
      }
      goto LABEL_47;
    }
    if ( (v8[13] & 4) != 0 )
    {
      v26 = 1;
      RtlpWnfMarkFailure(v11, (unsigned int)v25, (unsigned int)a1[4]);
LABEL_62:
      v19 = v39;
    }
LABEL_47:
    v23 = 0;
LABEL_48:
    *((_DWORD *)v8 + 34) = v23;
    if ( !(_DWORD)v19 )
      RtlAcquireSRWLockExclusive(v22, v19, v17, v18);
    *((_QWORD *)v8 + 18) = 0LL;
    v4 = v38;
LABEL_11:
    v8 = *(volatile signed __int32 **)v8;
    RtlpDecRefWnfUserSubscription(v11, &v30, &v31);
    v7 = v32;
    if ( v30 )
    {
      v30(v31);
      v7 = v32;
    }
  }
  RtlReleaseSRWLockExclusive(v35);
  return v26 != 0 ? 0xC000022D : 0;
}
