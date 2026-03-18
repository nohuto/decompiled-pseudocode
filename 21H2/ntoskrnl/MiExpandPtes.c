/*
 * XREFs of MiExpandPtes @ 0x14026A818
 * Callers:
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x140246420 (MiSplitBitmapPages.c)
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // r13d
  BOOL v5; // r15d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int8 OldIrql; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  char v19; // r10
  volatile signed __int32 *v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int v23; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // [rsp+30h] [rbp-68h]
  unsigned __int64 v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 >= a2 )
  {
    v4 = *((_DWORD *)a1 + 7);
    v5 = 0;
    v6 = (a1[3] & 2) != 0 ? 16LL : 1LL;
    if ( a2 >= 0x200 )
      v5 = a1 == &qword_140C534C0;
    v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v36 = v7 / v6;
    v8 = MiObtainSystemVa(v7 >> 9);
    v38 = v8;
    if ( v8 )
    {
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = (v9 - a1[2]) >> 3;
      v37 = v10;
      if ( v5 )
        goto LABEL_56;
      v41 = v10 / v6;
      v11 = a1[1] + ((v10 / v6) >> 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5, &LockHandle);
      v12 = MiSplitBitmapPages(v4, v11, v36 + (v41 & 7));
      v10 = v37;
      v43 = v12;
      if ( v12 )
      {
        v13 = (v37 + v7) / v6;
        if ( v13 > *a1 )
          *a1 = v13;
        v14 = v41 & 0xFFFFFFFFFFFFFFC0uLL;
        v15 = *((_DWORD *)a1 + 6);
        if ( (v41 & 0x3F) == 0 )
          v14 = v41;
        if ( v14 < a1[8] || (v15 & 4) == 0 )
        {
          a1[8] = v14;
          *((_DWORD *)a1 + 6) = v15 | 4;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      v42 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              OldIrql = v42;
            }
          }
        }
      }
      __writecr8(OldIrql);
      if ( v43 )
      {
LABEL_56:
        if ( (unsigned int)MiMakeZeroedPageTablesEx(v9, (int)v9 + 8 * ((int)v7 - 1), 16, v4, 0) )
        {
          _InterlockedExchangeAdd64(a1 + 10, v36);
          _InterlockedExchangeAdd64(a1 + 6, v36);
          if ( (dword_140D051BC & 2) != 0 && a1 == &qword_140C534C0 )
          {
            v29 = 2 * v10;
            v30 = qword_140C52F20 + (v29 >> 3);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5, &LockHandle);
            if ( !(unsigned int)MiSplitBitmapPages(v4, v30, (v29 & 7) + 2 * v36) )
              dword_140D051BC &= ~2u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v31 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v32 = KeGetCurrentIrql();
                if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
                {
                  v33 = KeGetCurrentPrcb();
                  v34 = v33->SchedulerAssist;
                  v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v28 = (v35 & v34[5]) == 0;
                  v34[5] &= v35;
                  if ( v28 )
                    KiRemoveSystemWorkPriorityKick(v33);
                }
              }
            }
            __writecr8(v31);
            v2 = a2;
          }
          if ( v5 || v2 == v7 )
            return v9;
          v17 = (v7 - v2) / v6;
          v18 = (v2 + v37) / v6;
          v19 = v18 & 0x1F;
          v20 = (volatile signed __int32 *)(a1[1] + 4 * (v18 >> 5));
          if ( v17 + (v18 & 0x1F) <= 0x20 )
          {
            if ( v17 == 32 )
            {
              *v20 = 0;
              return v9;
            }
            v23 = ~(((1 << v17) - 1) << v19);
          }
          else
          {
            if ( (v18 & 0x1F) != 0 )
            {
              _InterlockedAnd(v20, ~(((1 << (32 - (v18 & 0x1F))) - 1) << v19));
              v17 -= 32 - (unsigned int)(v18 & 0x1F);
              ++v20;
            }
            if ( v17 >= 0x20 )
            {
              v21 = v17 >> 5;
              v17 += -32LL * (v17 >> 5);
              do
              {
                *v20++ = 0;
                --v21;
              }
              while ( v21 );
            }
            if ( !v17 )
              return v9;
            v23 = -1 << v17;
          }
          _InterlockedAnd(v20, v23);
          return v9;
        }
        if ( v5 )
          v4 = 13;
      }
      MiReturnSystemVa(v38, (__int64)((v9 << 25) + (v7 << 28)) >> 16, v4);
    }
  }
  return 0LL;
}
