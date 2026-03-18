/*
 * XREFs of ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD590
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01595A0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE1A4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0dt_EtwWriteTransfer @ 0x1C005E6E4 (McTemplateK0dt_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::InsertQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2, struct BLTENTRY *a3)
{
  struct _KMUTANT *v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 216) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v11) = 1;
    McTemplateK0dt_EtwWriteTransfer(v7, &EventBltQueueAddEntry, v8, *((_DWORD *)a3 + 15), v11);
  }
  Flink = a2->Flink;
  v10 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  v10->Flink = Flink;
  *((_QWORD *)a3 + 2) = a2;
  Flink->Blink = v10;
  a2->Flink = v10;
  KeReleaseMutex(v3, 0);
}
