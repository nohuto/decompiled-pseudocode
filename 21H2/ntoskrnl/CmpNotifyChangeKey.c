/*
 * XREFs of CmpNotifyChangeKey @ 0x1406588C0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 */

__int64 __fastcall CmpNotifyChangeKey(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebp
  char *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 *SListFaultAddress; // rdx
  _QWORD *v18; // rax
  char *PoolWithQuotaTag; // rax
  _QWORD *v21; // rdx
  __int64 *v22; // rax
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v25; // rdx
  __int64 **v26; // rcx
  void **p_SListFaultAddress; // rax
  _QWORD *v28; // rdx
  __int64 **v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-68h] BYREF
  char v38; // [rsp+50h] [rbp-58h]
  char v39; // [rsp+51h] [rbp-57h]
  _BYTE v40[5]; // [rsp+52h] [rbp-56h]
  char v41; // [rsp+57h] [rbp-51h]
  _QWORD v42[2]; // [rsp+60h] [rbp-48h] BYREF

  v7 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
  {
    CmpFreePostBlock(a2);
    return 3221225852LL;
  }
  v11 = *(char **)(a1 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v11 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v11 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      CmpFreePostBlock(a2);
      return 3221225626LL;
    }
    *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
    *((_DWORD *)PoolWithQuotaTag + 12) = v7 & 0x3FFFFFFF | ((a4 & 1) << 30);
    *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
    *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
    *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
    *((_QWORD *)PoolWithQuotaTag + 5) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
    v21 = (_QWORD *)(v12 + 1584);
    v22 = *(__int64 **)(v12 + 1584);
    if ( v22 )
    {
      a3 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v21 = v22;
        if ( ((*(_DWORD *)(v22[4] + 8) >> 21) & 0x3FFu) > a3 )
          break;
        v22 = (__int64 *)*v22;
        if ( !*v21 )
          goto LABEL_19;
      }
      *(_QWORD *)v11 = v22;
      *(_QWORD *)v22[1] = v11;
      *((_QWORD *)v11 + 1) = v22[1];
      v22[1] = (__int64)v11;
    }
    else
    {
LABEL_19:
      *v21 = v11;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = v21;
    }
  }
  v13 = *((_QWORD *)v11 + 2);
  v14 = v11 + 16;
  if ( *(char **)(v13 + 8) != v11 + 16 )
    goto LABEL_32;
  *a2 = v13;
  a2[1] = v14;
  *(_QWORD *)(v13 + 8) = a2;
  v15 = a2 + 4;
  *v14 = a2;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v15 = v15;
  }
  else
  {
    v28 = *(_QWORD **)(a7 + 40);
    if ( *v28 != a7 + 32 )
      goto LABEL_32;
    *v15 = a7 + 32;
    a2[5] = v28;
    *v28 = v15;
    *(_QWORD *)(a7 + 40) = v15;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v36, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v25 = KeGetCurrentThread();
    v26 = (__int64 **)(a2 + 2);
    if ( (a2[7] & 0x10000) != 0 )
    {
      p_SListFaultAddress = &v25[1].SListFaultAddress;
      SListFaultAddress = (__int64 *)v25[1].SListFaultAddress;
      if ( (void **)SListFaultAddress[1] == p_SListFaultAddress )
      {
        *v26 = SListFaultAddress;
        a2[3] = p_SListFaultAddress;
        SListFaultAddress[1] = (__int64)v26;
        *p_SListFaultAddress = v26;
        goto LABEL_26;
      }
    }
    else
    {
      SListFaultAddress = (__int64 *)&v25[1].SListFaultAddress;
      v29 = (__int64 **)SListFaultAddress[1];
      if ( *v29 == SListFaultAddress )
      {
        *v26 = SListFaultAddress;
        a2[3] = v29;
        *v29 = (__int64 *)v26;
        SListFaultAddress[1] = (__int64)v26;
LABEL_26:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SListFaultAddress = (__int64 *)(-1LL << (CurrentIrql + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)SListFaultAddress;
              v34 = (v33 & SchedulerAssist[5]) == 0;
              a3 = v33 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        goto LABEL_9;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  v16 = (_QWORD *)qword_140D2D698;
  SListFaultAddress = &CmpAsyncKernelPostList;
  v18 = a2 + 2;
  if ( *(__int64 **)qword_140D2D698 != &CmpAsyncKernelPostList )
    goto LABEL_32;
  *v18 = &CmpAsyncKernelPostList;
  a2[3] = v16;
  *v16 = v18;
  qword_140D2D698 = (__int64)(a2 + 2);
LABEL_9:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v35 = *((_DWORD *)a2 + 14);
    v38 = v35;
    *(_DWORD *)&v40[1] = 0;
    v37[1] = *(_QWORD *)(a1 + 8);
    v41 = 0;
    v42[0] = v37;
    v37[0] = a2;
    *(_DWORD *)v40 = (v35 & 0x10000) != 0;
    v39 = a4;
    v42[1] = 19LL;
    EtwTraceKernelEvent((int)v42, 1, 0x42000000u, 2352, 5249282);
  }
  if ( *((int *)v11 + 12) >= 0 )
    return 259LL;
  CmpPostNotify((_DWORD)v11, (_DWORD)SListFaultAddress, a3, 268, 1, 0LL, 0LL);
  return 0LL;
}
