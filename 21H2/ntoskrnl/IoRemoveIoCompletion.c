/*
 * XREFs of IoRemoveIoCompletion @ 0x1402A8D10
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x1406D36D0 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x1406D3900 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     IopInterlockedAdd @ 0x140242EBC (IopInterlockedAdd.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
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
  ULONG v10; // r14d
  __int64 i; // rdi
  PLIST_ENTRY v12; // rbx
  char Flink; // al
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *Blink; // r12
  __int64 v16; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _LIST_ENTRY **p_Blink; // rbx
  int v24; // eax
  unsigned __int64 v25; // r13
  _DWORD *v26; // rcx
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // [rsp+30h] [rbp-F8h]
  __int64 v38; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-D8h]
  ULONG v40; // [rsp+60h] [rbp-C8h]
  PLIST_ENTRY *v41; // [rsp+68h] [rbp-C0h]
  struct _KPRCB *v42; // [rsp+70h] [rbp-B8h]
  __int64 v43; // [rsp+78h] [rbp-B0h] BYREF
  PVOID v44; // [rsp+80h] [rbp-A8h]
  PVOID Object; // [rsp+88h] [rbp-A0h]
  struct _KQUEUE *v46; // [rsp+90h] [rbp-98h]
  __int64 v47; // [rsp+98h] [rbp-90h]
  PLIST_ENTRY *v48; // [rsp+A0h] [rbp-88h]
  ULONG *v49; // [rsp+A8h] [rbp-80h]
  _OWORD v50[3]; // [rsp+B0h] [rbp-78h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]

  v8 = EntryArray;
  v41 = EntryArray;
  v9 = a2;
  v44 = a1;
  v46 = a1;
  v47 = a2;
  v48 = EntryArray;
  v49 = a5;
  v39 = 0LL;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v40 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    v12 = v8[i];
    if ( (unsigned __int64)&v12[-17].Blink + 7 <= 1 || v12 == (PLIST_ENTRY)192 || v12 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v12[1].Flink;
    if ( Flink )
    {
      if ( Flink != 2 )
      {
        v14 = v12[2].Flink;
        Blink = v12[1].Blink;
        LODWORD(v39) = v12[2].Blink;
        *((_QWORD *)&v39 + 1) = v12[3].Flink;
        IopFreeMiniCompletionPacket(v12);
        goto LABEL_9;
      }
      v14 = v12[3].Blink;
      Blink = v12[3].Flink;
      LODWORD(v39) = v12[4].Blink;
      *((_QWORD *)&v39 + 1) = v12[4].Flink;
      Object = v12[5].Flink;
      CurrentIrql = KeGetCurrentIrql();
      v36 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v12[6]);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v42 = CurrentPrcb;
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v28 = v20[6];
            v20[6] = v28 + 1;
            if ( v28 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              CurrentPrcb = v42;
              CurrentIrql = v36;
            }
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v12[6], 0LL) )
          goto LABEL_16;
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v29 = v26[6] - 1;
            v26[6] = v29;
            if ( !v29 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(&v12[6]);
      }
      CurrentIrql = v36;
LABEL_16:
      LOBYTE(v12[6].Blink) = 0;
      v12[5].Blink = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(&v12[6], retaddr);
        CurrentIrql = v36;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v12[6], 0LL);
      }
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v30 = v22[6] - 1;
          v22[6] = v30;
          if ( !v30 )
          {
            KiRemoveSystemWorkPriorityKick(v21);
            CurrentIrql = v36;
          }
        }
      }
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
            v35 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v35 )
            {
              KiRemoveSystemWorkPriorityKick(v32);
              CurrentIrql = v36;
            }
          }
        }
      }
      __writecr8(CurrentIrql);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      ObfDereferenceObjectWithTag(v44, 0x746C6644u);
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      v9 = a2;
      goto LABEL_9;
    }
    p_Blink = &v12[-11].Blink;
    v14 = p_Blink[12];
    v42 = (struct _KPRCB *)(p_Blink + 15);
    Blink = p_Blink[15];
    v39 = *((_OWORD *)p_Blink + 3);
    v24 = *((_DWORD *)p_Blink + 4);
    if ( (v24 & 0x2000) != 0 )
    {
      v43 = 0LL;
      v38 = 0LL;
      v25 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
      memset(v50, 0, sizeof(v50));
      p_Blink[12] = 0LL;
      if ( (_KPROCESS *)v25 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(
          (_DWORD)p_Blink + 120,
          (unsigned int)&v43,
          (unsigned int)&v38,
          (_DWORD)p_Blink + 192,
          (__int64)&v38);
        v9 = a2;
      }
      else
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v25 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)v25, 0, (__int64)v50);
          IopCompleteRequest((_DWORD)v42, (unsigned int)&v43, (unsigned int)&v38, (_DWORD)p_Blink + 192, (__int64)&v38);
          KiUnstackDetachProcess(v50, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v25 + 1112));
        }
        else
        {
          IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
          LODWORD(v39) = -1073741536;
          *((_QWORD *)&v39 + 1) = 0LL;
        }
        v9 = a2;
      }
    }
    else if ( (v24 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)p_Blink + 11, -1) )
    {
      IoFreeIrp((PIRP)p_Blink);
    }
LABEL_9:
    v16 = 32LL * (unsigned int)i;
    *(_QWORD *)(v16 + v9) = Blink;
    *(_QWORD *)(v16 + v9 + 8) = v14;
    *(_OWORD *)(v16 + v9 + 16) = v39;
    v8 = v41;
  }
  result = (unsigned int)v12;
LABEL_11:
  *v49 = v10;
  return result;
}
