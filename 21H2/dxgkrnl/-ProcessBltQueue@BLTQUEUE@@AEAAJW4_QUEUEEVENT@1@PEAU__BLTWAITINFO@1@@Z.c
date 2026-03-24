/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C015E550
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011A6B4 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AFA4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00DE180 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C015E678 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C015E708 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C0227540 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C02FC944 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FD560 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C02FD7C0 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD840 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD904 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C02FF0E0 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C0300244 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  int v5; // r13d
  int v7; // eax
  struct _LIST_ENTRY *v8; // rdi
  int v9; // ebx
  struct BLTENTRY *v10; // rax
  struct BLTENTRY *v11; // rbp
  char v12; // cl
  char v13; // al
  __int64 v15; // rbx
  void *v16; // rcx
  struct _KEVENT *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  bool v21; // zf
  int v22; // eax

  v3 = 0;
  v5 = a2;
  if ( *(int *)(a1 + 940) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 940);
  }
  if ( a2 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 480);
    if ( v7 )
      *(_DWORD *)(a1 + 480) = v7 - 1;
  }
  v8 = (struct _LIST_ENTRY *)(a1 + 216);
  v9 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 480) )
      *(_DWORD *)a3 |= 2u;
    v10 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( v5 == 2 )
    {
      v16 = (void *)*((_QWORD *)v10 + 5);
      *((_DWORD *)v10 + 130) |= 1u;
      ObfDereferenceObject(v16);
      *((_QWORD *)v11 + 5) = 0LL;
    }
    if ( (*((_DWORD *)v11 + 130) & 1) == 0 )
    {
      v17 = (struct _KEVENT *)*((_QWORD *)v11 + 5);
      if ( KeReadStateEvent(v17) )
      {
        *((_DWORD *)v11 + 130) |= 1u;
        goto LABEL_29;
      }
      *(_DWORD *)a3 |= 1u;
      HIDWORD(v19) = 0;
      *(_QWORD *)(a3 + 8) = v17;
      ++*((_DWORD *)v11 + 131);
      LODWORD(v19) = (unsigned int)(5 * *(_DWORD *)(a1 + 360)) % *(_DWORD *)(a1 + 364);
      if ( *((_DWORD *)v11 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 360)) / *(_DWORD *)(a1 + 364) )
      {
        *((_DWORD *)v11 + 130) |= 3u;
        *(_DWORD *)(a1 + 936) |= 4u;
        v20 = WdLogNewEntry5_WdError(v18, v19);
        *(_QWORD *)(v20 + 24) = a1;
        WdLogEvent5_WdError(v20);
        *(_DWORD *)a3 &= ~1u;
LABEL_29:
        ObfDereferenceObject(*((PVOID *)v11 + 5));
        *((_QWORD *)v11 + 5) = 0LL;
      }
      v8 = (struct _LIST_ENTRY *)(a1 + 216);
    }
    if ( v5 != 1
      && (*((_DWORD *)v11 + 130) & 1) != 0
      && !*(_DWORD *)(a1 + 480)
      && *((_DWORD *)v11 + 14)
      && !*(_BYTE *)(a1 + 344) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v8, v11);
      goto LABEL_11;
    }
    KeWaitForSingleObject((PVOID)(a1 + 256), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, v11, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 216), v11);
      KeReleaseMutex((PRKMUTEX)(a1 + 256), 0);
      goto LABEL_11;
    }
    v5 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 87) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2704), Executive, 0, 0, 0LL);
      v3 = BLTENTRY::IndirectBlt(v11);
      KeReleaseMutex((PRKMUTEX)(a1 + 2704), 0);
      v9 = 2;
    }
    else
    {
      v3 = BLTENTRY::Blt(v11);
      BLTENTRY::ReleasePresentDoneEvent(v11, 1u);
    }
    if ( v3 >= 0 )
    {
      v21 = *(_BYTE *)(a1 + 344) == 0;
      *(_DWORD *)(a1 + 476) = *((_DWORD *)v11 + 14);
      if ( v21 )
        v22 = *((_DWORD *)v11 + 14);
      else
        v22 = 0;
      *(_DWORD *)(a1 + 480) = v22;
    }
    DXGALLOCATIONREFERENCE::AssignNull((struct BLTENTRY *)((char *)v11 + 32));
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 232), v11);
    if ( *(_BYTE *)(a1 + 566) )
    {
      *(_BYTE *)(a1 + 566) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 256), 0);
    if ( v3 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 940) = v3;
      return (unsigned int)v3;
    }
    v8 = (struct _LIST_ENTRY *)(a1 + 216);
  }
  v12 = *(_BYTE *)(a1 + 565);
  v13 = *(_BYTE *)(a1 + 566);
  if ( v12 )
  {
    if ( !v13 )
      goto LABEL_15;
  }
  else
  {
    if ( !v13 )
      goto LABEL_11;
LABEL_15:
    v9 = 0;
  }
  *(_DWORD *)(a1 + 928) = v9 | *(_DWORD *)(a1 + 928) & 0xFFFFFFFD;
  if ( v12 )
  {
    v15 = 5LL * *(unsigned int *)(a1 + 840);
    *(LARGE_INTEGER *)(a1 + 8 * v15 + 856) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 8 * v15 + 864) = v5;
  }
  *(_WORD *)(a1 + 565) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_11:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v3;
}
