/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C008D290
 * Callers:
 *     VidSchiWorkerThread @ 0x1C008D1B0 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000B6C0 (VidSchIsTDRPending.c)
 *     VidSchiRewindPacket @ 0x1C000F224 (VidSchiRewindPacket.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F3B0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000F448 (VidSchiSubmitWaitCommand.c)
 *     VidSchiIncrementContextReference @ 0x1C0010CC0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0010EB0 (VidSchiDecrementContextReference.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C0012530 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0012740 (VidSchiSubmitSignalCommand.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012890 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0012C3C (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C001510C (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E070 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084E80 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A5C (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C00D598C (VidSchiRecoverFromTDR.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _VIDSCH_CONTEXT *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v16; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v16 = 0;
    v2 = VidSchiScheduleCommandToRun(a1, &v16);
    v4 = v2;
    if ( v2 )
    {
      v5 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( v16 && (unsigned int)(*(_DWORD *)(a1 + 2916) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v5, 0LL, 0);
        VidSchiRewindPacket(v4, 0LL, 1, 0);
        VidschiUnselectContext(v5);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v5, v3);
        v6 = *(_QWORD *)(v4 + 88);
        v7 = *(_QWORD *)(v6 + 104);
        v8 = *(_QWORD *)(v6 + 96);
        v9 = *(_DWORD *)(v4 + 48);
        v10 = *(_QWORD *)(v7 + 32);
        if ( v9 )
        {
          switch ( v9 )
          {
            case 8:
              VidSchiSubmitPagingCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 6:
              v11 = (_QWORD *)(v4 + 320);
              if ( (unsigned int)(*(_DWORD *)(v4 + 312) - 5) > 1 )
                v11 = (_QWORD *)*v11;
              (*(void (__fastcall **)(_QWORD *))(v4 + 296))(v11);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v4, v12, v13);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v10 + 2940) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v7 + 32))
            || *(_BYTE *)(v7 + 204)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
          {
            *(_DWORD *)(v4 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v4 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 2864));
            RtlSetBitEx(v10 + 480);
          }
          if ( (*(_DWORD *)(v4 + 272) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v4);
          else
            VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v5);
        VidSchiSetTransferContextRunningTime((__int64)v5, 0LL, 0);
        VidschiUnselectContext(v5);
        VidSchiDecrementContextReference(v5, 0);
      }
    }
    if ( VidSchIsTDRPending(a1) )
    {
      v14 = *(_DWORD *)(a1 + 2916);
      if ( v14 != 2 && v14 != 3 )
        break;
    }
  }
  return VidSchiRecoverFromTDR(a1);
}
