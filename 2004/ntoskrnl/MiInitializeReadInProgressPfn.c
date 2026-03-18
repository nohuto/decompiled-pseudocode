/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x140261AC0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        __int64 Process,
        _QWORD *a2,
        int a3,
        __int64 SchedulerAssist,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r11
  _QWORD *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  _BOOL8 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 Address; // rax
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  char v29; // r10
  unsigned int v30; // r13d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rdi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v42; // eax
  bool v43; // zf
  unsigned int v44; // [rsp+20h] [rbp-78h]
  int v45; // [rsp+24h] [rbp-74h] BYREF
  int v46; // [rsp+28h] [rbp-70h] BYREF
  __int64 v47; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-58h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+8h]
  _QWORD *v51; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v52; // [rsp+B8h] [rbp+20h]

  v52 = SchedulerAssist;
  v51 = a2;
  v50 = Process;
  v6 = SchedulerAssist;
  v7 = a2;
  v8 = Process;
  v9 = 0LL;
  v10 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v49 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v12 = 0xFFFFF6FB7DBED000uLL;
    v13 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v14 = 48LL * *v7 - 0x58000000000LL;
      if ( v14 != qword_140C4EB70 )
        break;
LABEL_129:
      v6 += 8LL;
      v7 = v51 + 1;
      v52 = v6;
      v51 = v7;
      if ( (unsigned __int64)v7 >= v49 )
        return result;
    }
    v15 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, 0xFFFFFA8000000000uLL, SchedulerAssist)
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v12 = *(_QWORD *)(Process + 1928);
      if ( v12 )
      {
        v16 = *(_QWORD *)(v12 + 8 * ((v6 >> 3) & 0x1FF));
        v12 = v15 | 0x20;
        Process = (unsigned __int8)v16;
        LOBYTE(Process) = v16 & 0x20;
        if ( (v16 & 0x20) == 0 )
          v12 = v15;
        v15 = v12;
        if ( (v16 & 0x42) != 0 )
          v15 = v12 | 0x42;
      }
    }
    v18 = (unsigned __int8)a6;
    v47 = v15;
    v17 = v15;
    LOBYTE(v18) = (a6 & 0x40) != 0;
    LOBYTE(v44) = 0;
    v19 = 0LL;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v15, v12, 0LL, v18) )
      {
        v22 = v15;
      }
      else
      {
        v23 = v15;
        if ( qword_140C4DD40 && (v15 & 0x10) == 0 )
          v23 = v15 & ~qword_140C4DD40;
        v47 = MI_READ_PTE_LOCK_FREE(v23 >> 16);
        v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47);
        v22 = MI_READ_PTE_LOCK_FREE(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
        v21 = (a6 & 0x40) != 0;
      }
      v44 = MmMakeProtectNotWriteCopy[(v22 >> 5) & 0x1F];
      v17 = MiSwizzleInvalidPte(32LL * (v44 & 0x1F), v20, v44, v21);
    }
    else
    {
      v25 = v15;
      if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
      {
LABEL_30:
        *(_QWORD *)(v14 + 16) = v17;
        if ( (_BYTE)v18 )
        {
          LODWORD(Address) = v19;
        }
        else
        {
          if ( (a6 & 0x10) != 0
            && (*(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL,
                Process = (__int64)&v47,
                (unsigned __int64)&v47 >= 0xFFFFF6FB7DBED000uLL)
            && (Process = (__int64)&v47, (unsigned __int64)&v47 <= v13) )
          {
            if ( (unsigned int)MiPteHasShadow(&v47, v25, v19, v18)
              && (v25 & 1) != 0
              && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              v19 = *(_QWORD *)(Process + 1928);
              if ( v19 )
              {
                v28 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
                if ( (v28 & 0x20) != 0 )
                  v27 |= 0x20uLL;
                if ( (v28 & 0x42) != 0 )
                  v27 |= 0x42uLL;
              }
              else
              {
                v27 = v47;
              }
            }
          }
          else
          {
            v27 = v25;
          }
          v44 = (v27 >> 5) & 0x1F;
          Address = (v27 >> 5) & 0x1F;
          if ( v44 == 24 )
          {
            Process = 0x7FFFFFFEFFFFLL;
            LOBYTE(v44) = 24;
            if ( v8 <= 0x7FFFFFFEFFFFLL )
            {
              Address = (__int64)MiLocateAddress(v8);
              LOBYTE(v44) = v29;
              LODWORD(Address) = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
            }
          }
        }
        if ( (_DWORD)Address )
        {
          if ( (_DWORD)Address == 31 )
          {
            v30 = 1;
          }
          else
          {
            Process = (unsigned int)Address >> 3;
            if ( (_DWORD)Process == 3 && (Address & 7) != 0 )
              v30 = 2;
            else
              v30 = Process != 1;
          }
        }
        else
        {
          v30 = 3;
        }
        SchedulerAssist = 0xFFFFFFFFFLL;
        if ( v10 == 0xFFFFFFFFFLL )
        {
          v25 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v31 = 0xFFFFF6FB7DBED000uLL;
          v32 = *(_QWORD *)v25;
          v19 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v25 >= 0xFFFFF6FB7DBED000uLL
            && v25 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(Process, v25, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFFFFFFLL)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v34 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
              v25 = v32 | 0x20;
              if ( (v34 & 0x20) == 0 )
                v25 = v32;
              v32 = v25;
              if ( (v34 & 0x42) != 0 )
                v32 = v25 | 0x42;
            }
          }
          v48 = v32;
          if ( (unsigned __int64)&v48 >= v31
            && (unsigned __int64)&v48 <= v19
            && (unsigned int)MiPteHasShadow(&v48, v25, v19, SchedulerAssist)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v25 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v25 )
            {
              v35 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
              v25 = v32 | 0x20;
              if ( (v35 & 0x20) == 0 )
                v25 = v32;
              v32 = v25;
              if ( (v35 & 0x42) != 0 )
                v32 = v25 | 0x42;
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
          v25 = (-1LL << (CurrentIrql + 1)) & 4;
          v19 = (unsigned int)v25 | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v19;
        }
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45, v25);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        *(_BYTE *)(v14 + 34) |= 0x20u;
        v38 = a5;
        if ( a5 )
          v38 = a5 + 32;
        *(_QWORD *)v14 = v38;
        Process = *(unsigned __int8 *)(v14 + 34);
        if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v30 )
        {
          MiChangePageAttribute(v14, v30, 1LL);
          Process = *(unsigned __int8 *)(v14 + 34);
        }
        *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v14 + 32) = 1;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ a6) & 7;
        v39 = v10 ^ *(_QWORD *)(v14 + 40);
        *(_QWORD *)(v14 + 8) = v36;
        LOBYTE(Process) = Process & 0xF8 | 2;
        *(_QWORD *)(v14 + 40) ^= v39 & 0xFFFFFFFFFLL;
        *(_BYTE *)(v14 + 34) = Process;
        if ( a6 < 0 )
          *(_BYTE *)(v14 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              Process = (unsigned int)CurrentIrql + 1;
              v25 = -1LL << (CurrentIrql + 1);
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              v42 = ~(unsigned __int16)v25;
              v43 = (v42 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v19 = (unsigned int)v42 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v19;
              if ( v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( (v15 & 0x400) == 0 && (v15 & 0x800) != 0 )
        {
          v6 = v52;
        }
        else
        {
          v25 = 32 * (((*v51 & 0xFFFFFFFFFLL) << 7) | v44 & 0x1F | 0x40);
          if ( qword_140C4DD40 )
          {
            if ( (qword_140C4DD40 & v25) != 0 )
              v25 |= 0x10uLL;
            else
              v25 |= qword_140C4DD40;
          }
          result = 0xFFFFF6FB7DBED000uLL;
          v6 = v52;
          if ( v52 >= 0xFFFFF6FB7DBED000uLL )
          {
            result = 0xFFFFF6FB7DBED7F8uLL;
            if ( v52 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(Process, v25, v19, SchedulerAssist) )
              {
                if ( !HIBYTE(word_140C4DE08) && (v25 & 1) != 0 )
                  v25 |= 0x8000000000000000uLL;
                *(_QWORD *)v6 = v25;
                result = MiWritePteShadow(v6, v25);
                goto LABEL_123;
              }
              result = (unsigned __int64)KeGetCurrentThread();
              Process = *(_QWORD *)(result + 184);
              if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v25 & 1) != 0 )
              {
                result = 0x8000000000000000uLL;
                v25 |= 0x8000000000000000uLL;
              }
            }
          }
          *(_QWORD *)v6 = v25;
        }
LABEL_123:
        if ( (a6 & 0x40) == 0 )
        {
          v46 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46, v25);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          result = *(_QWORD *)(v9 + 24);
          Process = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v9 + 24) = Process;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = v52;
        }
        v8 = v50;
        v12 = 0xFFFFF6FB7DBED000uLL;
        v13 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_129;
      }
      if ( qword_140C4DD40 && (v15 & 0x10) == 0 )
        v17 = v15 & ~qword_140C4DD40;
      Process = 6 * ((v17 >> 12) & 0xFFFFFFFFFLL);
      v17 = *(_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
    }
    v25 = v17;
    v47 = v17;
    goto LABEL_30;
  }
  return result;
}
