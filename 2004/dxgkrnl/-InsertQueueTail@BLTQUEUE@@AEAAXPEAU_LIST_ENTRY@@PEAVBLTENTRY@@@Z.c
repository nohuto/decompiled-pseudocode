/*
 * XREFs of ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD654
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01595A0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FD2B0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE1A4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C02FF618 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0dt_EtwWriteTransfer @ 0x1C005E6E4 (McTemplateK0dt_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::InsertQueueTail(BLTQUEUE *this, struct _LIST_ENTRY *a2, struct BLTENTRY *a3)
{
  struct _KMUTANT *v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 216) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v11) = 0;
    McTemplateK0dt_EtwWriteTransfer(v7, &EventBltQueueAddEntry, v8, *((_DWORD *)a3 + 15), v11);
  }
  Blink = a2->Blink;
  v10 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  if ( Blink->Flink != a2 )
    __fastfail(3u);
  *((_QWORD *)a3 + 2) = Blink;
  v10->Flink = a2;
  Blink->Flink = v10;
  a2->Blink = v10;
  KeReleaseMutex(v3, 0);
}
