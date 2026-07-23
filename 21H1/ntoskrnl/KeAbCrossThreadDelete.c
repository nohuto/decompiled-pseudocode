/*
 * XREFs of KeAbCrossThreadDelete @ 0x14051B378
 * Callers:
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     KiAbCrossThreadRelease @ 0x14038B2B0 (KiAbCrossThreadRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

char __fastcall KeAbCrossThreadDelete(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdi
  int v7; // eax
  __int64 SessionId; // r9
  __int64 SchedulerAssist; // r8
  __m128i *v10; // r14
  __int64 v11; // rdx
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  __int64 v14; // rcx
  __int128 v15; // rt0
  unsigned __int8 v16; // tt
  bool v17; // zf
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r12d
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r8
  _DWORD *v29; // rbx
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r8
  _DWORD *v33; // rbx
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r8
  _DWORD *v37; // rbx
  int v38; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v41; // [rsp+30h] [rbp-69h] BYREF
  __int128 v42; // [rsp+40h] [rbp-59h]
  __int128 Object; // [rsp+50h] [rbp-49h] BYREF
  __int128 v44; // [rsp+60h] [rbp-39h]
  __int128 v45; // [rsp+70h] [rbp-29h]
  ULONG_PTR BugCheckParameter2[14]; // [rsp+80h] [rbp-19h] BYREF
  int v47; // [rsp+110h] [rbp+77h] BYREF
  volatile signed __int64 *v48; // [rsp+118h] [rbp+7Fh] BYREF

  Object = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(BugCheckParameter2, 0, 0x40uLL);
  LODWORD(v4) = *(char *)(a2 + 792);
  v5 = v4 | *(char *)(a2 + 870);
  v41 = 0LL;
  v48 = 0LL;
  if ( v5 != 63 )
  {
    v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    LOBYTE(v7) = MmIsSessionAddress(a1);
    if ( v7 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    LODWORD(v4) = *(char *)(a2 + 792);
    LODWORD(SchedulerAssist) = (v4 | *(char *)(a2 + 870)) ^ 0x3F;
    while ( 1 )
    {
      v17 = !_BitScanReverse((unsigned int *)&v18, SchedulerAssist);
      if ( v17 )
        return v4;
      v10 = (__m128i *)(*(_QWORD *)(a2 + 800) + 96 * v18);
      SchedulerAssist = ~(1 << v18) & (unsigned int)SchedulerAssist;
      v4 = v10[2].m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v4 == v6 )
      {
        *(_QWORD *)&v12 = v10[2].m128i_i64[0];
        *((_QWORD *)&v12 + 1) = _mm_srli_si128(v10[2], 8).m128i_u64[0];
        v13 = _InterlockedCompareExchange128(
                v10[2].m128i_i64,
                *((signed __int64 *)&v12 + 1),
                v12,
                (signed __int64 *)&v12);
        LOBYTE(v4) = v12;
        v11 = *((_QWORD *)&v12 + 1);
        v14 = v12;
        v42 = v12;
        if ( v13
          || (*(_QWORD *)&v15 = v10[2].m128i_i64[0],
              *((_QWORD *)&v15 + 1) = _mm_srli_si128(v10[2], 8).m128i_u64[0],
              v16 = _InterlockedCompareExchange128(
                      v10[2].m128i_i64,
                      *((signed __int64 *)&v15 + 1),
                      v15,
                      (signed __int64 *)&v15),
              LOBYTE(v4) = v15,
              v11 = *((_QWORD *)&v15 + 1),
              v14 = v15,
              v42 = v15,
              v16) )
        {
          if ( (v10[1].m128i_i8[10] & 1) != 0 )
          {
            LOBYTE(v4) = v14 & 0xFC;
            if ( (v14 & 0x7FFFFFFFFFFFFFFCLL) == v6 && (_DWORD)v11 == (_DWORD)SessionId )
              break;
          }
        }
      }
    }
    if ( v14 >= 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
        *(_DWORD *)(SchedulerAssist + 20) |= v11;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v21 = CurrentPrcb->SchedulerAssist;
        if ( v21 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v22 = v21[6];
            v21[6] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = v23[6] - 1;
            v23[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v47, v11, SchedulerAssist, SessionId);
        while ( *(_QWORD *)(a2 + 64) );
      }
      if ( (unsigned __int8)KiAcquireThreadStateLock(a2, (__int64)&v41, (volatile signed __int32 **)&v48) == 2 )
      {
        v26 = *(_DWORD *)(a2 + 536);
        KiReleaseThreadStateLock(v25, v41, v48);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = v28->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
        }
        __writecr8(CurrentIrql);
        BugCheckParameter2[7] = 0LL;
        *(_QWORD *)&v44 = (char *)&Object + 8;
        *((_QWORD *)&Object + 1) = (char *)&Object + 8;
        BugCheckParameter2[3] = (ULONG_PTR)&KeAbCrossThreadDeleteDpcRoutine;
        BugCheckParameter2[4] = (ULONG_PTR)&Object;
        *((_QWORD *)&v44 + 1) = a1;
        *(_QWORD *)&v45 = v10;
        *((_QWORD *)&v45 + 1) = a2;
        LOWORD(Object) = 1;
        BYTE2(Object) = 6;
        DWORD1(Object) = 0;
        LOWORD(BugCheckParameter2[0]) = 275;
        BugCheckParameter2[2] = 0LL;
        WORD1(BugCheckParameter2[0]) = v26 + 1280;
        KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        goto LABEL_58;
      }
      if ( *(_BYTE *)(a2 + 113) )
      {
        KiReleaseThreadStateLock(v25, v41, v48);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v35 = KeGetCurrentIrql();
            if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v38 & v37[5]) == 0;
              v37[5] &= v38;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v36);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
      }
      else
      {
        KiReleaseThreadStateLock(v25, v41, v48);
        KiReleaseThreadLockSafe(a2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    v10[2].m128i_i8[0] |= 1u;
LABEL_58:
    _InterlockedOr(v40, 0);
    LOBYTE(v4) = KiAbCrossThreadRelease(a1, (__int64)v10, a2);
  }
  return v4;
}
