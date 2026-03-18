/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C00147A8
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001A8AC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x1C0044C40 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C001E6B6 (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  unsigned int i; // esi
  _QWORD v9[2]; // [rsp+40h] [rbp-40h] BYREF
  char v10; // [rsp+50h] [rbp-30h]
  _QWORD v11[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v12; // [rsp+78h] [rbp-8h]

  if ( a4 != -3 )
  {
    if ( a4 < *((_DWORD *)a1 + 10) )
    {
      VidSchiSetFlipDevice(a1, a4, a2, 0, a3, 0, a5);
      goto LABEL_4;
    }
    WdLogSingleEntry1(3LL, a4);
  }
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    VidSchiSetFlipDevice(a1, i, a2, 0, a3, 0, a5);
LABEL_4:
  if ( *((_BYTE *)a1 + 51) )
  {
    v12 = 0;
    v11[0] = (char *)a1 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v11);
    v10 = 0;
    v9[1] = v9;
    v9[0] = v9;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v9, a1) )
    {
      *((_QWORD *)a1 + 153) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1192), 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v9);
    AcquireSpinLock::Release((AcquireSpinLock *)v11);
  }
}
