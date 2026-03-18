/*
 * XREFs of IoRemoveIoCompletion @ 0x140268050
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletionEx @ 0x14062CD10 (NtRemoveIoCompletionEx.c)
 *     NtRemoveIoCompletion @ 0x1406B7E10 (NtRemoveIoCompletion.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     IopInterlockedAdd @ 0x1403152CC (IopInterlockedAdd.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     IopFreeMiniCompletionPacket @ 0x14062CC50 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG v12; // r14d
  __int64 i; // rdi
  PLIST_ENTRY v14; // rbx
  char Flink; // al
  struct _LIST_ENTRY *v16; // r15
  struct _LIST_ENTRY *Blink; // r12
  __int64 v18; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _LIST_ENTRY **p_Blink; // rbx
  int v26; // eax
  ULONG_PTR v27; // r13
  _DWORD *v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // r9
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // [rsp+30h] [rbp-F8h]
  __int64 v42; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+50h] [rbp-D8h]
  ULONG v44; // [rsp+60h] [rbp-C8h]
  PLIST_ENTRY *v45; // [rsp+68h] [rbp-C0h]
  struct _KPRCB *v46; // [rsp+70h] [rbp-B8h]
  __int64 v47; // [rsp+78h] [rbp-B0h] BYREF
  PVOID v48; // [rsp+80h] [rbp-A8h]
  PVOID Object; // [rsp+88h] [rbp-A0h]
  struct _KQUEUE *v50; // [rsp+90h] [rbp-98h]
  __int64 v51; // [rsp+98h] [rbp-90h]
  PLIST_ENTRY *v52; // [rsp+A0h] [rbp-88h]
  ULONG *v53; // [rsp+A8h] [rbp-80h]
  _OWORD v54[3]; // [rsp+B0h] [rbp-78h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]

  v8 = EntryArray;
  v45 = EntryArray;
  v9 = a2;
  v48 = a1;
  v50 = a1;
  v51 = a2;
  v52 = EntryArray;
  v53 = a5;
  v43 = 0LL;
  v12 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v44 = v12;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v12 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    v14 = v8[i];
    if ( (unsigned __int64)&v14[-17].Blink + 7 <= 1 || v14 == (PLIST_ENTRY)192 || v14 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v14[1].Flink;
    if ( Flink )
    {
      if ( Flink != 2 )
      {
        v16 = v14[2].Flink;
        Blink = v14[1].Blink;
        LODWORD(v43) = v14[2].Blink;
        *((_QWORD *)&v43 + 1) = v14[3].Flink;
        IopFreeMiniCompletionPacket(v14);
        goto LABEL_9;
      }
      v16 = v14[3].Blink;
      Blink = v14[3].Flink;
      LODWORD(v43) = v14[4].Blink;
      *((_QWORD *)&v43 + 1) = v14[4].Flink;
      Object = v14[5].Flink;
      CurrentIrql = KeGetCurrentIrql();
      v40 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
        v11 = (unsigned int)v10 | SchedulerAssist[5];
        SchedulerAssist[5] = v11;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v14[6], v10, v11);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v46 = CurrentPrcb;
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v22[6];
            v22[6] = v32 + 1;
            if ( v32 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              CurrentPrcb = v46;
              CurrentIrql = v40;
            }
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v14[6], 0LL) )
          goto LABEL_16;
        v28 = CurrentPrcb->SchedulerAssist;
        if ( v28 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = v28[6] - 1;
            v28[6] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(&v14[6], CurrentPrcb, v11);
      }
      CurrentIrql = v40;
LABEL_16:
      LOBYTE(v14[6].Blink) = 0;
      v14[5].Blink = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(&v14[6], retaddr);
        CurrentIrql = v40;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v14[6], 0LL);
      }
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v34 = v24[6] - 1;
          v24[6] = v34;
          if ( !v34 )
          {
            KiRemoveSystemWorkPriorityKick(v23);
            CurrentIrql = v40;
          }
        }
      }
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
            v39 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v39 )
            {
              KiRemoveSystemWorkPriorityKick(v36);
              CurrentIrql = v40;
            }
          }
        }
      }
      __writecr8(CurrentIrql);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      ObfDereferenceObjectWithTag(v48, 0x746C6644u);
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      v9 = a2;
      goto LABEL_9;
    }
    p_Blink = &v14[-11].Blink;
    v16 = p_Blink[12];
    v46 = (struct _KPRCB *)(p_Blink + 15);
    Blink = p_Blink[15];
    v43 = *((_OWORD *)p_Blink + 3);
    v26 = *((_DWORD *)p_Blink + 4);
    if ( (v26 & 0x2000) != 0 )
    {
      v47 = 0LL;
      v42 = 0LL;
      v27 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
      memset(v54, 0, sizeof(v54));
      p_Blink[12] = 0LL;
      if ( (_KPROCESS *)v27 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest((__int64)(p_Blink + 15), (__int64)&v47, (__int64)&v42, (__int64 *)p_Blink + 24, &v42);
        v9 = a2;
      }
      else
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v27 + 1112)) )
        {
          KiStackAttachProcess(v27);
          IopCompleteRequest((__int64)v46, (__int64)&v47, (__int64)&v42, (__int64 *)p_Blink + 24, &v42);
          KiUnstackDetachProcess((__int64)v54, 0LL, v29, v30);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v27 + 1112));
        }
        else
        {
          IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
          LODWORD(v43) = -1073741536;
          *((_QWORD *)&v43 + 1) = 0LL;
        }
        v9 = a2;
      }
    }
    else if ( (v26 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(p_Blink + 11, 0xFFFFFFFFLL) )
    {
      IoFreeIrp((PIRP)p_Blink);
    }
LABEL_9:
    v18 = 32LL * (unsigned int)i;
    *(_QWORD *)(v18 + v9) = Blink;
    *(_QWORD *)(v18 + v9 + 8) = v16;
    *(_OWORD *)(v18 + v9 + 16) = v43;
    v8 = v45;
  }
  result = (unsigned int)v14;
LABEL_11:
  *v53 = v12;
  return result;
}
