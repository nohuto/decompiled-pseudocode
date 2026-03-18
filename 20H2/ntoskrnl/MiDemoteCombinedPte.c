/*
 * XREFs of MiDemoteCombinedPte @ 0x14036AFB0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiAgePte @ 0x1402BC920 (MiAgePte.c)
 *     MiTrimPte @ 0x1402CF420 (MiTrimPte.c)
 *     MiWalkVaCheckCommon @ 0x140310424 (MiWalkVaCheckCommon.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiResetAccessBitPte @ 0x14039AF20 (MiResetAccessBitPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockPageTableCharges @ 0x1402D3FC8 (MiUnlockPageTableCharges.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AC58 (MiUpdateWorkingSetPrivateSize.c)
 *     MiFreeCombineBlock @ 0x14036B480 (MiFreeCombineBlock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogCombinedPteDelete @ 0x14055B604 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  bool v9; // cc
  __int64 v10; // r13
  __m128i *v11; // rbp
  __int64 v12; // rcx
  _KPROCESS *Process; // r12
  char WsleContents; // di
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  unsigned __int8 v19; // al
  __int16 v20; // cx
  unsigned __int64 v21; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v32; // eax
  _DWORD *SchedulerAssist; // r8
  int v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  __int64 v38; // [rsp+48h] [rbp-90h]
  unsigned __int64 v39; // [rsp+50h] [rbp-88h]
  unsigned __int64 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  __int128 v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+80h] [rbp-58h]
  _QWORD v45[2]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *(_QWORD *)a2;
  v42 = a3;
  v43 = 0LL;
  v44 = 0LL;
  v41 = a1;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v8 = v3 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v3;
      v3 = v8;
      if ( (v7 & 0x42) != 0 )
        v3 = v8 | 0x42;
    }
  }
  v9 = *(_QWORD *)(a3 - 16) <= 1uLL;
  v10 = a3 - 48;
  v37 = v3;
  if ( !v9 )
    return 0LL;
  v35 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v11 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v12 = ((unsigned __int64)v11[2].m128i_i64[1] >> 39) & 0x3FF;
  v40 = (__int64)(a2 << 25) >> 16;
  v38 = *(_QWORD *)(qword_140C4E4C8 + 8 * v12);
  Process = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  WsleContents = MiGetWsleContents(v12, (__int64)(a2 << 25) >> 16);
  v39 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v15 + ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 12;
  v34 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v19 = MiLockPageInline((__int64)v11, v16, v17, v18);
  v20 = v11[2].m128i_i16[0];
  v21 = v19;
  if ( (v20 == 1 || v20 == 2 && (v11[2].m128i_i8[2] & 8) != 0)
    && *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) == v38
    && _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), 0LL, 1LL) == 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 392), 0xFFFFFFFF);
    v28 = v11[2].m128i_i64[1];
    v11->m128i_i64[1] = a2;
    v36 = v28 & 0xFFFFFFFFFLL;
    v29 = v11[1].m128i_u64[0];
    v11[2].m128i_i64[1] = v39 & 0xFFFFFFFFFLL | v28 & 0x7FFFFFF000000000LL;
    if ( ((v29 >> 5) & 5) == 5 )
      v11[1].m128i_i64[0] = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(32 * ((v29 >> 5) & 0xFFFE))) & 0x3E0;
    if ( v34 )
      MiIdentifyPfn(v11, (unsigned __int64 *)&v43);
    _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v21);
    if ( (v3 & 0x200) != 0 )
    {
      v37 = v3 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
      MiWriteValidPteNewProtection(a2, v37);
    }
    if ( (WsleContents & 0xF) == 8 )
      MiUnlockPageTableCharges(48 * v36 - 0x58000000000LL, 1);
    MiLockAndDecrementShareCount(48 * v36 - 0x58000000000LL, 0);
    MiUpdateWorkingSetPrivateSize(v41, v40, 1LL, 0);
    if ( Process )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
    if ( v34 )
    {
      MiLogCombinedPteDelete(v42);
      v45[1] = 24LL;
      v45[0] = &v43;
      EtwTraceKernelEvent((__int64)v45, 1u, 0x28000001u, 0x276u, 0x11401B02u);
    }
    MiFreeCombineBlock(v10);
    return 1LL;
  }
  else
  {
    _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v26 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(v21);
    return 0LL;
  }
}
