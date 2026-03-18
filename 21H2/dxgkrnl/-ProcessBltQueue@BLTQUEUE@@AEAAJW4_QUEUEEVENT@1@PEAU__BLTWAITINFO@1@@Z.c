/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CEBF4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CED50 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CEF0C (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C022615A (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D5A8C (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C03BB35C (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C03BC160 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C03BC3BC (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C03BC43C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C03BDEF4 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1C03BDF40 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C03BF4C0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  int v6; // r13d
  int v7; // eax
  struct _KMUTANT *v8; // rsi
  int v9; // r12d
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rbp
  _QWORD *v13; // rbp
  char v14; // cl
  char v15; // al
  __int64 v17; // rbx
  __int64 v18; // rax
  bool v19; // zf
  int v20; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  struct _KEVENT *v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h]

  v24 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( *(int *)(a1 + 956) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 956);
  }
  if ( a2 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 488);
    if ( v7 )
      *(_DWORD *)(a1 + 488) = v7 - 1;
  }
  v8 = (struct _KMUTANT *)(a1 + 160);
  v9 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 488) )
      *(_DWORD *)v3 |= 2u;
    KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
    v11 = (_QWORD *)(a1 + 216);
    v12 = *(_QWORD **)(a1 + 216);
    if ( v12 == (_QWORD *)(a1 + 216) )
    {
      v13 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v12[1] != v11 || (v18 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
        __fastfail(3u);
      *v11 = v18;
      *(_QWORD *)(v18 + 8) = v11;
      v13 = v12 - 1;
      if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v22) = *((_DWORD *)v13 + 15);
        LODWORD(Timeout) = *(_DWORD *)(a1 + 260);
        McTemplateK0pqq_EtwWriteTransfer(
          (__int64)v11,
          &EventBltQueueRemoveEntry,
          v10,
          *(_QWORD *)(a1 + 248),
          Timeout,
          v22);
      }
    }
    KeReleaseMutex(v8, 0);
    if ( !v13 )
      break;
    if ( v4 == 2 )
    {
      *((_DWORD *)v13 + 130) |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v13);
    }
    if ( (v13[65] & 1) == 0 )
    {
      v23 = (struct _KEVENT *)v13[5];
      if ( KeReadStateEvent(v23) )
      {
        *((_DWORD *)v13 + 130) |= 1u;
LABEL_36:
        BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v13);
        goto LABEL_37;
      }
      *(_DWORD *)v3 |= 1u;
      *(_QWORD *)(v3 + 8) = v23;
      if ( ++*((_DWORD *)v13 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 368)) / *(_DWORD *)(a1 + 372) )
      {
        *((_DWORD *)v13 + 130) |= 3u;
        *(_DWORD *)(a1 + 952) |= 4u;
        WdLogSingleEntry1(2LL, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"BLTQUEUE 0x%I64x : rendering timeout hit",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)v3 &= ~1u;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( v4 != 1 && (v13[65] & 1) != 0 && !*(_DWORD *)(a1 + 488) && *((_DWORD *)v13 + 14) && !*(_BYTE *)(a1 + 352) )
      *(_DWORD *)v3 |= 2u;
    if ( (*(_DWORD *)v3 & 2) != 0 || (*(_DWORD *)v3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, a1 + 216, v13, 2LL);
      goto LABEL_13;
    }
    KeWaitForSingleObject((PVOID)(a1 + 264), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)v13, (struct BLTQUEUE::__BLTWAITINFO *)v3);
    if ( v24 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)v3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, a1 + 216, v13, 2LL);
      KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
      v4 = v24;
      goto LABEL_13;
    }
    v24 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 109) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2720), Executive, 0, 0, 0LL);
      v6 = BLTENTRY::IndirectBlt((BLTENTRY *)v13);
      KeReleaseMutex((PRKMUTEX)(a1 + 2720), 0);
      v3 = a3;
    }
    else
    {
      v6 = BLTENTRY::Blt((BLTENTRY *)v13);
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v13, 1u);
    }
    if ( v6 >= 0 )
    {
      v19 = *(_BYTE *)(a1 + 352) == 0;
      *(_DWORD *)(a1 + 484) = *((_DWORD *)v13 + 14);
      if ( v19 )
        v20 = *((_DWORD *)v13 + 14);
      else
        v20 = 0;
      *(_DWORD *)(a1 + 488) = v20;
    }
    DXGALLOCATIONREFERENCE::AssignNull((DXGALLOCATIONREFERENCE *)(v13 + 4));
    BLTQUEUE::InsertQueueTail(a1, a1 + 232, v13, 1LL);
    if ( *(_BYTE *)(a1 + 574) )
    {
      *(_BYTE *)(a1 + 574) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v6);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
    if ( v6 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 956) = v6;
      return (unsigned int)v6;
    }
    v4 = -1;
  }
  v14 = *(_BYTE *)(a1 + 573);
  v15 = *(_BYTE *)(a1 + 574);
  if ( v14 )
  {
    if ( !v15 )
      goto LABEL_17;
  }
  else
  {
    if ( !v15 )
      goto LABEL_13;
LABEL_17:
    v9 = 0;
  }
  *(_DWORD *)(a1 + 944) = v9 | *(_DWORD *)(a1 + 944) & 0xFFFFFFFD;
  if ( v14 )
  {
    v17 = *(unsigned int *)(a1 + 856);
    *(LARGE_INTEGER *)(a1 + 40 * v17 + 872) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 40 * v17 + 880) = v4;
  }
  *(_WORD *)(a1 + 573) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_13:
  if ( v4 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v6;
}
