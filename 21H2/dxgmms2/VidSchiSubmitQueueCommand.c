/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00F379C
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0038950 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000EC78 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00163B0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0016F08 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0018878 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0096600 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00F38D0 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  DWORD LowPart; // eax
  __int64 v8; // rbp
  LARGE_INTEGER *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8

  v3 = this[11];
  v5 = *(_QWORD *)(v3.QuadPart + 104);
  v6 = *(_QWORD *)(v3.QuadPart + 96);
  LowPart = this[6].LowPart;
  v8 = *(_QWORD *)(v5 + 32);
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)this, a2, a3);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 6u:
        v9 = this + 40;
        if ( this[39].LowPart != 5 )
          v9 = (LARGE_INTEGER *)v9->QuadPart;
        ((void (__fastcall *)(LARGE_INTEGER *))this[37].QuadPart)(v9);
        VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)this, v10, v11);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v5 + 32))
      || *(_BYTE *)(v5 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
    {
      this[8].LowPart &= ~4u;
    }
    if ( (this[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 2880));
      RtlSetBitEx(v8 + 488, *(unsigned __int16 *)(v6 + 4));
    }
    if ( (this[34].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)this);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)this);
  }
}
