/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FD560
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011A6B4 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C015E550 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C02FF200 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C015E708 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C0227540 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD904 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C02FF0E0 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  _QWORD **v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _EX_RUNDOWN_REF **v6; // rbp
  void *v7; // rcx

  v1 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  v3 = (_QWORD **)((char *)this + 216);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v6 = (struct _EX_RUNDOWN_REF **)(v4 - 1);
    v5[1] = v3;
    v7 = (void *)v4[4];
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      v6[5] = 0LL;
    }
    BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v6, 1u);
    DXGALLOCATIONREFERENCE::AssignNull(v6 + 4);
    BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)((char *)this + 232), (struct BLTENTRY *)v6);
  }
  if ( *((_BYTE *)this + 565) || *((_BYTE *)this + 566) )
  {
    *(_WORD *)((char *)this + 565) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex(v1, 0);
}
