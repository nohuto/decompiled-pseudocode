/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C011A670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C007D418 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qddS @ 0x1C007EACC (WPP_RECORDER_SF_qddS.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C007EC5C (WPP_RECORDER_SF_qddd_ea_1C007EC5C.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C01190F4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C01191C8 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C011C3BC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C011C564 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C011D524 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C011D75C (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C011D80C (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAcquireReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3,
        unsigned int *a4,
        struct _NDIS_PD_QUEUE_PARAMETERS *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char v8; // si
  const wchar_t *v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  NDIS_PD_COUNTER_HANDLE__ *v21; // rsi
  const struct _NDIS_PD_QUEUE_PARAMETERS *v22; // r15
  NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  _QWORD *v24; // rax
  NDIS_PD_QUEUE_TRACKER *v25; // rax
  NDIS_PD_QUEUE_TRACKER *v26; // rcx
  int v28; // [rsp+20h] [rbp-61h]
  char v29; // [rsp+50h] [rbp-31h]
  unsigned int v30; // [rsp+54h] [rbp-2Dh]
  unsigned int v31; // [rsp+58h] [rbp-29h]
  int v32; // [rsp+5Ch] [rbp-25h]
  struct _LIST_ENTRY v33; // [rsp+60h] [rbp-21h] BYREF
  KLockHolder v34; // [rsp+70h] [rbp-11h] BYREF
  _LIST_ENTRY **v35; // [rsp+E0h] [rbp+5Fh]

  v35 = (_LIST_ENTRY **)a3;
  v8 = 0;
  v29 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      (__int64)a3,
      0x26u,
      v28,
      (char)a1,
      *a4,
      *a6,
      v12);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
            *((_QWORD *)a1 + 9),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( v14 < 0 )
      goto LABEL_53;
    v13 = 0LL;
    if ( *a4 )
    {
      v15 = (__int64)v35;
      do
      {
        (*(_QWORD **)((char *)&a5->CounterHandle + (unsigned int)v13 * *a7))[5] = a1;
        v17 = (unsigned int)v13;
        v13 = (unsigned int)(v13 + 1);
        v35[v17][1].Blink[2].Blink = (_LIST_ENTRY *)a1;
      }
      while ( (unsigned int)v13 < *a4 );
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    goto LABEL_47;
  }
  v34.m_Lock = (KPushLockBase *)qword_1C00E4538;
  v34.m_State = Unlocked;
  v34.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v34);
  if ( !*((_BYTE *)a1 + 89) )
  {
    *((_BYTE *)a1 + 89) = 1;
    v29 = 1;
    KLockHolder::~KLockHolder(&v34);
    if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 8u && (a2->Flags & 0xFFFFFFFE) == 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
              *((_QWORD *)a1 + 9),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7);
      v16 = 0LL;
      v14 = v18;
      if ( v18 < 0 )
      {
LABEL_51:
        v34.m_Lock = (KPushLockBase *)qword_1C00E4538;
        v34.m_State = Unlocked;
        v34.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v34);
        *((_BYTE *)a1 + 89) = 0;
        goto LABEL_52;
      }
      v13 = *a7;
      v32 = v13;
      if ( (unsigned int)v13 >= 0x38 && (v13 & 0xFFFFFFF8) == v13 )
      {
        v31 = *a4;
        v15 = *a4;
        v19 = (unsigned int)v13 * v15;
        if ( v19 <= 0xFFFFFFFF && (unsigned int)v19 <= *a6 )
        {
          v20 = 0;
          v14 = 0;
          v30 = 0;
          if ( !(_DWORD)v15 )
            goto LABEL_53;
          while ( 1 )
          {
            v21 = 0LL;
            v33.Flink = *v35;
            v22 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + v20 * (unsigned int)v13);
            if ( v22->Header.Type != 0x80
              || v22->Header.Revision != 1
              || v22->Header.Size < 0x38u
              || (v22->Flags & 0xFFFFFFFE) != 0
              || v22->QueueType != PDQueueTypeReceive )
            {
              break;
            }
            if ( v22->CounterHandle )
            {
              PoolWithTag = (NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
              v21 = PoolWithTag;
              if ( PoolWithTag )
              {
                *((_QWORD *)PoolWithTag + 4) = 0LL;
                *((_QWORD *)PoolWithTag + 5) = 0LL;
                *((_QWORD *)PoolWithTag + 6) = 0LL;
                *((_DWORD *)PoolWithTag + 14) = 0;
                *((_BYTE *)PoolWithTag + 60) = 0;
                *((_QWORD *)PoolWithTag + 8) = 0LL;
                *((_DWORD *)PoolWithTag + 22) = 0;
                *((_QWORD *)PoolWithTag + 1) = 0LL;
                *(_QWORD *)PoolWithTag = 0LL;
                *((_QWORD *)PoolWithTag + 3) = 0LL;
                *((_QWORD *)PoolWithTag + 2) = 0LL;
                v24 = PoolWithTag + 18;
                v24[1] = v24;
                *v24 = v24;
                *((_OWORD *)v21 + 6) = 0LL;
                *((_WORD *)v21 + 49) = 0;
                *((_QWORD *)v21 + 13) = 0LL;
                *((_OWORD *)v21 + 7) = 0LL;
                *((_WORD *)v21 + 57) = 0;
                *((_QWORD *)v21 + 15) = 0LL;
              }
              else
              {
                v21 = 0LL;
              }
              if ( !v21 )
              {
LABEL_43:
                v14 = -1073741670;
                goto LABEL_49;
              }
              *((_DWORD *)v21 + 16) = v30;
              *((_DWORD *)v21 + 17) = ndisGetNextPDCounterId();
              v14 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v21);
              if ( v14 < 0 )
              {
                NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v21);
LABEL_42:
                v8 = 1;
                goto LABEL_47;
              }
              ndisSetupPDCounter(
                (struct NDIS_PD_COUNTER *)v21,
                v22->CounterHandle,
                PDCounterTypeReceiveQueue,
                (struct NDIS_PD_ASSOCIATION *)a1,
                1);
              v22->CounterHandle = v21;
            }
            v25 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
            if ( v25 )
              v26 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v25);
            else
              v26 = 0LL;
            if ( !v26 )
              goto LABEL_43;
            ndisSetupPDQTracker(
              v26,
              (struct _NDIS_PD_QUEUE *)v33.Flink,
              v22,
              (struct NDIS_PD_ASSOCIATION *)a1,
              (struct NDIS_PD_COUNTER *)v21,
              1u,
              a2->Flags & 1);
            ++v35;
            v20 = v30 + 1;
            v30 = v20;
            if ( v20 >= v31 )
              goto LABEL_42;
            LODWORD(v13) = v32;
          }
        }
      }
      v14 = -1073741776;
      goto LABEL_49;
    }
    v14 = -1073741811;
LABEL_47:
    if ( v14 >= 0 )
      goto LABEL_53;
    if ( !v8 )
    {
LABEL_50:
      if ( !v29 )
        goto LABEL_53;
      goto LABEL_51;
    }
LABEL_49:
    v34.m_Lock = (KPushLockBase *)&v34;
    *(_QWORD *)&v34.m_State = &v34;
    v33.Blink = &v33;
    v33.Flink = &v33;
    ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, (struct _LIST_ENTRY *)&v34, &v33);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v34, &v33);
    goto LABEL_50;
  }
  v14 = -1073741808;
LABEL_52:
  KLockHolder::~KLockHolder(&v34);
LABEL_53:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddd(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v15, v16, v28);
  return (unsigned int)v14;
}
