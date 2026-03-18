/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1402BAAF0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        __int64 Process,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r11
  _QWORD *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
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
  int v44; // [rsp+20h] [rbp-78h]
  int v45; // [rsp+24h] [rbp-74h] BYREF
  int v46; // [rsp+28h] [rbp-70h] BYREF
  __int64 v47; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-58h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+8h]
  _QWORD *v51; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v52; // [rsp+B8h] [rbp+20h]

  v52 = a4;
  v51 = a2;
  v50 = Process;
  v6 = a4;
  v7 = a2;
  v8 = Process;
  v9 = 0LL;
  v10 = 0xFFFFFFFFFLL;
  result = (unsigned __int64)&a2[a3];
  v49 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      result = 0xFFFFFA8000000000uLL;
      v13 = 48LL * *v7 - 0x58000000000LL;
      if ( v13 != qword_140C4ECB0 )
        break;
LABEL_129:
      v6 += 8LL;
      v7 = v51 + 1;
      v52 = v6;
      v51 = v7;
      if ( (unsigned __int64)v7 >= v49 )
        return result;
    }
    v14 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v15 = *(_QWORD *)(Process + 1928);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v6 >> 3) & 0x1FF));
        v17 = v14 | 0x20;
        Process = (unsigned __int8)v16;
        LOBYTE(Process) = v16 & 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v14;
        v14 = v17;
        if ( (v16 & 0x42) != 0 )
          v14 = v17 | 0x42;
      }
    }
    v47 = v14;
    v18 = v14;
    v19 = (a6 & 0x40) != 0;
    LOBYTE(v44) = 0;
    v20 = 0LL;
    if ( (a6 & 0x40) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v14) )
      {
        v21 = v14;
      }
      else
      {
        v22 = v14;
        if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
          v22 = v14 & ~qword_140C4DE80;
        v47 = MI_READ_PTE_LOCK_FREE(v22 >> 16);
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47);
        v21 = MI_READ_PTE_LOCK_FREE(48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
      }
      v44 = MmMakeProtectNotWriteCopy[(v21 >> 5) & 0x1F];
      v18 = MiSwizzleInvalidPte(32LL * (v44 & 0x1F));
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
            && (*(_QWORD *)(v13 + 40) |= 0x8000000000000000uLL,
                Process = (__int64)&v47,
                (unsigned __int64)&v47 >= 0xFFFFF6FB7DBED000uLL)
            && (Process = (__int64)&v47, (unsigned __int64)&v47 <= v12) )
          {
            if ( (unsigned int)MiPteHasShadow(&v47, v24) && (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              v20 = *(_QWORD *)(Process + 1928);
              if ( v20 )
              {
                v27 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
                if ( (v27 & 0x20) != 0 )
                  v26 |= 0x20uLL;
                if ( (v27 & 0x42) != 0 )
                  v26 |= 0x42uLL;
              }
              else
              {
                v26 = v47;
              }
            }
          }
          else
          {
            v26 = v24;
          }
          v44 = (v26 >> 5) & 0x1F;
          Address = (v26 >> 5) & 0x1F;
          if ( v44 == 24 )
          {
            Process = 0x7FFFFFFEFFFFLL;
            LOBYTE(v44) = 24;
            if ( v8 <= 0x7FFFFFFEFFFFLL )
            {
              Address = (__int64)MiLocateAddress(v8);
              LOBYTE(v44) = v28;
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
          else
          {
            Process = (unsigned int)Address >> 3;
            if ( (_DWORD)Process == 3 && (Address & 7) != 0 )
              v29 = 2;
            else
              v29 = Process != 1;
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
            && (unsigned int)MiPteHasShadow(Process, v24)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v34 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
              v24 = v32 | 0x20;
              if ( (v34 & 0x20) == 0 )
                v24 = v32;
              v32 = v24;
              if ( (v34 & 0x42) != 0 )
                v32 = v24 | 0x42;
            }
          }
          v48 = v32;
          if ( (unsigned __int64)&v48 >= v31
            && (unsigned __int64)&v48 <= v20
            && (unsigned int)MiPteHasShadow(&v48, v24)
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v24 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v24 )
            {
              v35 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
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
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45, v24, v20, SchedulerAssist);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        *(_BYTE *)(v13 + 34) |= 0x20u;
        v38 = a5;
        if ( a5 )
          v38 = a5 + 32;
        *(_QWORD *)v13 = v38;
        Process = *(unsigned __int8 *)(v13 + 34);
        if ( *(unsigned __int8 *)(v13 + 34) >> 6 != v29 )
        {
          MiChangePageAttribute(v13, v29, 1LL);
          Process = *(unsigned __int8 *)(v13 + 34);
        }
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v13 + 32) = 1;
        if ( (a6 & 8) != 0 )
          *(_BYTE *)(v13 + 35) ^= (*(_BYTE *)(v13 + 35) ^ a6) & 7;
        v39 = v10 ^ *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 8) = v36;
        LOBYTE(Process) = Process & 0xF8 | 2;
        *(_QWORD *)(v13 + 40) ^= v39 & 0xFFFFFFFFFLL;
        *(_BYTE *)(v13 + 34) = Process;
        if ( a6 < 0 )
          *(_BYTE *)(v13 + 35) |= 0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              Process = (unsigned int)CurrentIrql + 1;
              v24 = -1LL << (CurrentIrql + 1);
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              v42 = ~(unsigned __int16)v24;
              v43 = (v42 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v20 = (unsigned int)v42 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v20;
              if ( v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( (v14 & 0x400) == 0 && (v14 & 0x800) != 0 )
        {
          v6 = v52;
        }
        else
        {
          v24 = 32 * (((*v51 & 0xFFFFFFFFFLL) << 7) | v44 & 0x1F | 0x40);
          if ( qword_140C4DE80 )
          {
            if ( (qword_140C4DE80 & v24) != 0 )
              v24 |= 0x10uLL;
            else
              v24 |= qword_140C4DE80;
          }
          result = 0xFFFFF6FB7DBED000uLL;
          v6 = v52;
          if ( v52 >= 0xFFFFF6FB7DBED000uLL )
          {
            result = 0xFFFFF6FB7DBED7F8uLL;
            if ( v52 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(Process, v24) )
              {
                if ( !HIBYTE(word_140C4DF48) && (v24 & 1) != 0 )
                  v24 |= 0x8000000000000000uLL;
                *(_QWORD *)v6 = v24;
                result = MiWritePteShadow(v6, v24);
                goto LABEL_123;
              }
              result = (unsigned __int64)KeGetCurrentThread();
              Process = *(_QWORD *)(result + 184);
              if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v24 & 1) != 0 )
              {
                result = 0x8000000000000000uLL;
                v24 |= 0x8000000000000000uLL;
              }
            }
          }
          *(_QWORD *)v6 = v24;
        }
LABEL_123:
        if ( (a6 & 0x40) == 0 )
        {
          v46 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46, v24, v20, SchedulerAssist);
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          result = *(_QWORD *)(v9 + 24);
          Process = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v9 + 24) = Process;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = v52;
        }
        v8 = v50;
        v12 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_129;
      }
      if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
        v18 = v14 & ~qword_140C4DE80;
      Process = 6 * ((v18 >> 12) & 0xFFFFFFFFFLL);
      v18 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
    }
    v24 = v18;
    v47 = v18;
    goto LABEL_30;
  }
  return result;
}
