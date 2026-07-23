/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140306C80
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r11
  struct _KTHREAD *p_WaitListHead; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  bool v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 Address; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  char v28; // r10
  unsigned int v29; // r13d
  __int64 SchedulerAssist; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rdi
  struct _LIST_ENTRY *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 v38; // rax
  unsigned __int8 v39; // cl
  __int64 v40; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v43; // eax
  bool v44; // zf
  int v46; // [rsp+20h] [rbp-78h]
  int v47; // [rsp+24h] [rbp-74h] BYREF
  int v48; // [rsp+28h] [rbp-70h] BYREF
  __int64 v49; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-60h] BYREF
  struct _KTHREAD *v51; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *v53; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v54; // [rsp+B8h] [rbp+20h]

  v54 = a4;
  v53 = a2;
  v6 = a4;
  p_WaitListHead = a2;
  v8 = a1;
  v9 = 0LL;
  v10 = 0xFFFFFFFFFLL;
  CurrentThread = (unsigned __int64)a2 + 8 * a3;
  v51 = (struct _KTHREAD *)CurrentThread;
  if ( (unsigned __int64)a2 < CurrentThread )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      LOBYTE(CurrentThread) = 0;
      v13 = 48LL * *(_QWORD *)&p_WaitListHead->Header.Lock - 0x58000000000LL;
      if ( v13 != qword_140C4EDB0 )
        break;
LABEL_129:
      v6 += 8LL;
      p_WaitListHead = (struct _KTHREAD *)&v53->Header.WaitListHead;
      v54 = v6;
      v53 = p_WaitListHead;
      if ( p_WaitListHead >= v51 )
        return CurrentThread;
    }
    v14 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        v17 = v14 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v14;
        v14 = v17;
        if ( (v16 & 0x42) != 0 )
          v14 = v17 | 0x42;
      }
    }
    v49 = v14;
    v18 = v14;
    v19 = (a6 & 0x40) != 0;
    LOBYTE(v46) = 0;
    v20 = 0LL;
    if ( (a6 & 0x40) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v14) )
      {
        v21 = v14;
      }
      else
      {
        v22 = v14;
        if ( qword_140C4DF80 && (v14 & 0x10) == 0 )
          v22 = v14 & ~qword_140C4DF80;
        v49 = MI_READ_PTE_LOCK_FREE(v22 >> 16);
        v23 = MI_READ_PTE_LOCK_FREE(&v49);
        v21 = MI_READ_PTE_LOCK_FREE(48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
      }
      v46 = MmMakeProtectNotWriteCopy[(v21 >> 5) & 0x1F];
      v18 = MiSwizzleInvalidPte(32LL * (v46 & 0x1F));
    }
    else
    {
      v24 = v14;
      if ( (v14 & 0x400) != 0 || (v14 & 0x800) == 0 )
      {
LABEL_30:
        *(_QWORD *)(v13 + 16) = v18;
        if ( v19 )
        {
          LODWORD(Address) = v20;
        }
        else
        {
          if ( (a6 & 0x10) != 0
            && (*(_QWORD *)(v13 + 40) |= 0x8000000000000000uLL, (unsigned __int64)&v49 >= 0xFFFFF6FB7DBED000uLL)
            && (unsigned __int64)&v49 <= v12 )
          {
            if ( (unsigned int)MiPteHasShadow() && (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              v20 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v20 )
              {
                v27 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
                if ( (v27 & 0x20) != 0 )
                  v26 |= 0x20uLL;
                if ( (v27 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
              else
              {
                v26 = v49;
              }
            }
          }
          else
          {
            v26 = v24;
          }
          v46 = (v26 >> 5) & 0x1F;
          Address = (v26 >> 5) & 0x1F;
          if ( v46 == 24 )
          {
            LOBYTE(v46) = 24;
            if ( v8 <= 0x7FFFFFFEFFFFLL )
            {
              Address = (__int64)MiLocateAddress(v8);
              LOBYTE(v46) = v28;
              LODWORD(Address) = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
            }
          }
        }
        if ( (_DWORD)Address )
        {
          if ( (_DWORD)Address == 31 )
          {
            v29 = 1;
          }
          else if ( (unsigned int)Address >> 3 == 3 && (Address & 7) != 0 )
          {
            v29 = 2;
          }
          else
          {
            v29 = (unsigned int)Address >> 3 != 1;
          }
        }
        else
        {
          v29 = 3;
        }
        SchedulerAssist = 0xFFFFFFFFFLL;
        if ( v10 == 0xFFFFFFFFFLL )
        {
          v24 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v31 = 0xFFFFF6FB7DBED000uLL;
          v32 = *(_QWORD *)v24;
          v20 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v24 >= 0xFFFFF6FB7DBED000uLL
            && v24 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v33 )
            {
              v34 = *((_QWORD *)&v33->Flink + ((v24 >> 3) & 0x1FF));
              v24 = v32 | 0x20;
              if ( (v34 & 0x20) == 0 )
                v24 = v32;
              v32 = v24;
              if ( (v34 & 0x42) != 0 )
                v32 = v24 | 0x42;
            }
          }
          v50 = v32;
          if ( (unsigned __int64)&v50 >= v31
            && (unsigned __int64)&v50 <= v20
            && (unsigned int)MiPteHasShadow()
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v24 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v24 )
            {
              v35 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
              v24 = v32 | 0x20;
              if ( (v35 & 0x20) == 0 )
                v24 = v32;
              v32 = v24;
              if ( (v35 & 0x42) != 0 )
                v32 = v24 | 0x42;
            }
          }
          v10 = SchedulerAssist & (v32 >> 12);
          v9 = 48 * v10 - 0x58000000000LL;
        }
        v36 = v6;
        if ( (a6 & 0x20) != 0 )
          v36 = v6 & 0x7FFFFFFFFFFFFFFFLL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          v24 = (-1LL << (CurrentIrql + 1)) & 4;
          v20 = (unsigned int)v24 | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v20;
        }
        v47 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v47, v24, v20, SchedulerAssist);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        *(_BYTE *)(v13 + 34) |= 0x20u;
        v38 = a5;
        if ( a5 )
          v38 = a5 + 32;
        *(_QWORD *)v13 = v38;
        v39 = *(_BYTE *)(v13 + 34);
        if ( v39 >> 6 != v29 )
        {
          MiChangePageAttribute(v13, v29, 1LL);
          v39 = *(_BYTE *)(v13 + 34);
        }
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v13 + 32) = 1;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v13 + 35) ^= (*(_BYTE *)(v13 + 35) ^ a6) & 7;
        v40 = v10 ^ *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 8) = v36;
        *(_QWORD *)(v13 + 40) ^= v40 & 0xFFFFFFFFFLL;
        *(_BYTE *)(v13 + 34) = v39 & 0xF8 | 2;
        if ( a6 < 0 )
          *(_BYTE *)(v13 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v24 = -1LL << (CurrentIrql + 1);
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              v43 = ~(unsigned __int16)v24;
              v44 = (v43 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v20 = (unsigned int)v43 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v20;
              if ( v44 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        LOBYTE(CurrentThread) = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( (v14 & 0x400) == 0 && (v14 & 0x800) != 0 )
        {
          v6 = v54;
        }
        else
        {
          v24 = 32 * (((*(_QWORD *)&v53->Header.Lock & 0xFFFFFFFFFLL) << 7) | v46 & 0x1F | 0x40);
          if ( qword_140C4DF80 )
          {
            if ( (qword_140C4DF80 & v24) != 0 )
              v24 |= 0x10uLL;
            else
              v24 |= qword_140C4DF80;
          }
          LOBYTE(CurrentThread) = 0;
          v6 = v54;
          if ( v54 >= 0xFFFFF6FB7DBED000uLL )
          {
            LOBYTE(CurrentThread) = -8;
            if ( v54 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E048) && (v24 & 1) != 0 )
                  v24 |= 0x8000000000000000uLL;
                *(_QWORD *)v6 = v24;
                LOBYTE(CurrentThread) = MiWritePteShadow(v6, v24);
                goto LABEL_123;
              }
              CurrentThread = (unsigned __int64)KeGetCurrentThread();
              if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (v24 & 1) != 0 )
              {
                LOBYTE(CurrentThread) = 0;
                v24 |= 0x8000000000000000uLL;
              }
            }
          }
          *(_QWORD *)v6 = v24;
        }
LABEL_123:
        if ( (a6 & 0x40) == 0 )
        {
          v48 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v48, v24, v20, SchedulerAssist);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          CurrentThread = *(_QWORD *)(v9 + 24);
          *(_QWORD *)(v9 + 24) = CurrentThread ^ (CurrentThread ^ (CurrentThread + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = v54;
        }
        v8 = a1;
        v12 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_129;
      }
      if ( qword_140C4DF80 && (v14 & 0x10) == 0 )
        v18 = v14 & ~qword_140C4DF80;
      v18 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
    }
    v24 = v18;
    v49 = v18;
    goto LABEL_30;
  }
  return CurrentThread;
}
