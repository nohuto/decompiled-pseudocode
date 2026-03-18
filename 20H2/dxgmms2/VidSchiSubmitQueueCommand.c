/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00D1320
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002F304 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchIsTDRPending @ 0x1C000AEF0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013C58 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00140F0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00145C4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0016C3C (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0066F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C00848E0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D145C (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rbp
  int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *((_DWORD *)this + 12);
  v6 = *(_QWORD *)(v3 + 32);
  if ( v5 )
  {
    switch ( v5 )
    {
      case 8:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3:
        VidSchiSubmitMmIoFlipCommand(this);
        break;
      case 4:
        VidSchiSubmitWaitCommand(this);
        break;
      case 5:
        VidSchiSubmitSignalCommand(this);
        break;
      case 6:
        v7 = *((_DWORD *)this + 78);
        v8 = (_QWORD *)((char *)this + 320);
        if ( (unsigned int)(v7 - 5) > 1 )
          v8 = (_QWORD *)*v8;
        (*((void (__fastcall **)(_QWORD *))this + 37))(v8);
        VidSchiProcessCompletedQueuePacket(this, v9, v10);
        break;
      case 7:
        VidSchiSubmitSoftwareCommand(this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 2940) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
      || *(_BYTE *)(v3 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
    {
      *((_DWORD *)this + 16) &= ~4u;
    }
    if ( (*((_DWORD *)this + 16) & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
      RtlSetBitEx(v6 + 480);
    }
    if ( (*((_DWORD *)this + 68) & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand(this);
    else
      VidSchiSubmitRenderCommand(this);
  }
}
