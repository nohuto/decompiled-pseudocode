/*
 * XREFs of StorTickEventQueue @ 0x1C000DBA0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000DAF0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x1C000D480 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x1C0012F24 (RaidDriverGetName.c)
 *     RaidUnitAbortSrb @ 0x1C0048B10 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C004DA6C (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C004E78C (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C004E9AC (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r13
  char v4; // r15
  unsigned int v6; // esi
  unsigned int v7; // edi
  KSPIN_LOCK *v8; // rbx
  KSPIN_LOCK v9; // rcx
  unsigned int v10; // eax
  char v12; // bp
  char v13; // al
  unsigned int v14; // ecx
  __int64 v15; // r12
  __int64 v16; // rbx
  KSPIN_LOCK *v17; // rdi
  KSPIN_LOCK *v18; // rax
  KSPIN_LOCK v19; // rbp
  _DWORD *v20; // r15
  ULONGLONG v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rdx
  char v29; // [rsp+30h] [rbp-98h]
  unsigned int v30; // [rsp+34h] [rbp-94h]
  unsigned int v31; // [rsp+40h] [rbp-88h]
  unsigned int v32; // [rsp+44h] [rbp-84h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  char v37; // [rsp+D8h] [rbp+10h]
  char v38; // [rsp+E0h] [rbp+18h]
  char v39; // [rsp+E8h] [rbp+20h]

  v2 = a2[1];
  LODWORD(v3) = 0;
  v4 = 0;
  v31 = v2;
  v29 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 456), 2u);
  v6 = 0;
  v7 = 0;
  if ( (*a2 & 1) == 0 )
  {
    if ( !a2[2] )
      return v6;
    while ( 1 )
    {
      v8 = (KSPIN_LOCK *)&a2[16 * v7 + 16];
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v8 + 5, &LockHandle);
      v9 = *v8;
      if ( (KSPIN_LOCK *)*v8 != v8 )
        v4 = 1;
      v10 = *((_DWORD *)v8 + 12);
      if ( v10 > 0xFFFFFFFD )
      {
LABEL_6:
        v6 = 0;
        goto LABEL_7;
      }
      if ( v10 )
      {
        if ( v10 <= v2 )
        {
          *((_DWORD *)v8 + 12) = 0;
          goto LABEL_86;
        }
        v10 -= v2;
        *((_DWORD *)v8 + 12) = v10;
      }
      if ( v10 )
        goto LABEL_6;
LABEL_86:
      StorEtwHwTimeoutDetectedEvent(v9 - 48, 0LL);
      v6 = -1073741643;
      *((_DWORD *)v8 + 12) = -2;
LABEL_7:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v6 != -1073741643 && ++v7 < a2[2] )
        continue;
      goto LABEL_9;
    }
  }
  v12 = 1;
  v38 = 0;
  v39 = 1;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    v13 = 0;
    v14 = 0;
    v37 = 0;
    v32 = 0;
    if ( a2[2] )
      break;
LABEL_82:
    v12 = 0;
    v39 = 0;
    if ( !v13 || v7 >= 0x64 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    v30 = v7 + 1;
    v15 = 0LL;
    v16 = 0LL;
    v17 = (KSPIN_LOCK *)&a2[16 * v14 + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v17 + 5, &LockHandle);
    if ( v12 )
    {
      v18 = (KSPIN_LOCK *)v17[2];
      v17[4] = (KSPIN_LOCK)v18;
      if ( v18 != v17 + 2 )
        v4 = 1;
      v29 = v4;
    }
    v19 = v17[4];
    v20 = v17 + 2;
    if ( (KSPIN_LOCK *)v19 == v17 + 2 )
    {
      v24 = 0LL;
    }
    else
    {
      v16 = v19 - 64;
      v21 = *(_QWORD *)(v19 + 24) + (unsigned int)(5000000 * *(_DWORD *)(v19 + 16));
      if ( v21 > UnbiasedInterruptTime || (*(_BYTE *)(v16 + 16) & 0x1C) == 0x10 )
      {
        v17[4] = (KSPIN_LOCK)v20;
        v24 = 0LL;
      }
      else
      {
        v22 = *(_QWORD *)(v16 + 224);
        if ( v21 < *(_QWORD *)(v22 + 1280) )
        {
          v23 = *(_QWORD *)(v22 + 24);
          *(_OWORD *)BugCheckParameter2 = 0LL;
          RaidDriverGetName(*(_QWORD *)(v23 + 16), BugCheckParameter2);
          if ( MiniportBugActionPolicy == 1 )
          {
            StorEtwMiniportBugResetBrokenEvent(
              v19 - 64,
              *(_QWORD *)(*(_QWORD *)(v16 + 224) + 1280LL) - *(_QWORD *)(v19 + 24),
              BugCheckParameter2);
          }
          else if ( MiniportBugActionPolicy == 2 )
          {
            KeBugCheckEx(
              0xF0u,
              1uLL,
              BugCheckParameter2[1],
              *(_QWORD *)(v16 + 168),
              *(_QWORD *)(*(_QWORD *)(v16 + 224) + 8LL));
          }
        }
        if ( (*a2 & 4) != 0 )
        {
          v25 = *(_DWORD *)(v16 + 776);
          if ( v25 == 3 )
          {
            v6 = -1073741643;
            v37 = 0;
            v24 = 0LL;
          }
          else if ( v25 )
          {
            v24 = 0LL;
            if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
            {
              v37 = 1;
              v17[4] = *(_QWORD *)v17[4];
            }
          }
          else
          {
            v37 = 1;
            v17[4] = *(_QWORD *)v17[4];
            v24 = *(_QWORD *)(v16 + 168);
            v15 = *(_QWORD *)(v16 + 224);
            if ( *(_BYTE *)(v24 + 2) == 40 )
              v3 = *(unsigned int *)(v24 + 20);
            else
              v3 = *(unsigned __int8 *)(v24 + 2);
            if ( (unsigned int)v3 > 0x20 || (v26 = 0x1000D0000LL, !_bittest64(&v26, v3)) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 776), 1, 0) )
              {
                v15 = 0LL;
                v24 = 0LL;
                if ( (*(_BYTE *)(v16 + 17) & 4) == 0 )
                  v17[4] = (KSPIN_LOCK)v20;
              }
            }
          }
        }
        else
        {
          v6 = -1073741643;
          v24 = 0LL;
        }
      }
    }
    if ( (*a2 & 4) != 0 )
      goto LABEL_61;
    if ( v6 == -1073741643 )
    {
      *((_DWORD *)v17 + 12) = -2;
      goto LABEL_64;
    }
    v27 = *((_DWORD *)v17 + 12);
    if ( !v27 )
      goto LABEL_58;
    if ( v27 > v31 )
    {
      v27 -= v31;
      *((_DWORD *)v17 + 12) = v27;
LABEL_58:
      if ( v27 )
        goto LABEL_61;
      goto LABEL_59;
    }
    *((_DWORD *)v17 + 12) = 0;
LABEL_59:
    if ( (*(_DWORD *)(*v17 + 48) & 1) != 0 )
    {
      *((_DWORD *)v17 + 12) = v31;
LABEL_61:
      if ( v6 != -1073741643 && (v38 || !v15) )
        goto LABEL_67;
      goto LABEL_64;
    }
    v16 = *v17 - 48;
    *((_DWORD *)v17 + 12) = -2;
    v6 = -1073741643;
LABEL_64:
    if ( v16 && *(_DWORD *)(v16 + 776) != 3 )
    {
      v28 = *a2 >> 2;
      LOBYTE(v28) = (*a2 & 4) != 0;
      StorEtwHwTimeoutDetectedEvent(v16, v28);
      v38 = 1;
    }
LABEL_67:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v6 == -1073741643 )
    {
      LODWORD(v3) = 0;
      goto LABEL_80;
    }
    if ( v15 )
    {
      if ( (_DWORD)v3 == 16 )
      {
        v6 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v16);
        v7 = v30;
        v13 = 0;
        v4 = v29;
        LODWORD(v3) = 0;
        goto LABEL_82;
      }
      if ( (unsigned int)(v3 - 18) > 1 && (_DWORD)v3 != 32 )
      {
        *(_BYTE *)(v16 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v15, v24) < 0 )
          break;
      }
    }
    LODWORD(v3) = 0;
    v7 = v30;
    v14 = v32 + 1;
    v4 = v29;
    v32 = v14;
    if ( v14 >= a2[2] )
      goto LABEL_81;
    v12 = v39;
  }
  *(_BYTE *)(v16 + 17) &= ~4u;
  LODWORD(v3) = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 776), 0, 1) == 4 )
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v15 + 24), v16, 1);
    v6 = 0;
LABEL_80:
    v4 = v29;
    v7 = v30;
LABEL_81:
    v13 = v37;
    goto LABEL_82;
  }
  v4 = v29;
  v6 = -1073741643;
LABEL_9:
  if ( v4 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
  return v6;
}
