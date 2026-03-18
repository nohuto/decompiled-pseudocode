/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0011408
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001516C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x1C003D194 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00D2960 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C003020C (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _KEVENT *a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // edi
  _QWORD v7[2]; // [rsp+40h] [rbp-40h] BYREF
  char v8; // [rsp+50h] [rbp-30h]
  _QWORD v9[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp-8h]

  for ( i = 0; i < LODWORD(a1[1].Header.WaitListHead.Blink); ++i )
    VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, i, a2, 0, a3, 0, 0);
  if ( a1[2].Header.Reserved1 )
  {
    v10 = 0;
    v9[0] = (char *)a1 + 1712;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
    v8 = 0;
    v7[1] = v7;
    v7[0] = v7;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v7, a1) )
    {
      a1[50].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      KeSetEvent(a1 + 49, 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v7);
    AcquireSpinLock::Release((AcquireSpinLock *)v9);
  }
}
