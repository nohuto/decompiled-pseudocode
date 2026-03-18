/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0018990
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003E344 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003E5D0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0042D28 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0018A54 (VidSchiSignalRegisteredSyncObjects.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00403E8 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C004416C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     McTemplateK0ptq_EtwWriteTransfer @ 0x1C0044488 (McTemplateK0ptq_EtwWriteTransfer.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C0044B48 (VidSchiNotifyDeviceRemoved.c)
 */

void __fastcall VidSchiMarkDeviceAsError(struct HwQueueStagingList *a1, __int64 a2, int a3, _OWORD *a4)
{
  signed __int32 v8; // r14d
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+48h] BYREF

  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0ptq_EtwWriteTransfer((_DWORD)a1, a2, a3, *(_QWORD *)(a2 + 8), a3 < 0, a3);
  if ( a3 != 14 )
  {
    if ( a3 == 7 )
    {
      v11 = *(_QWORD *)(a2 + 32);
      v12 = *(_QWORD *)(v11 + 3024);
      if ( v12 )
      {
        v13 = *(unsigned __int16 *)(v12 + 4);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL) + 8LL * *(unsigned int *)(v11 + 4));
        v15 = *(_QWORD *)(v14 + 8);
        if ( (unsigned int)v13 < *(_DWORD *)(v14 + 80) )
          v15 += 8 * v13;
        *(_DWORD *)(*(_QWORD *)v15 + 228LL) = *(_DWORD *)(*(_QWORD *)v15 + 224LL);
      }
    }
    else if ( a3 >= 0 && a3 != 9 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a2,
        *(const char **)(*(_QWORD *)(a2 + 40) + 2648LL),
        a3,
        (const void *)&g_ErrorDeviceDebugMode);
      __debugbreak();
    }
  }
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 200), a3, 0);
  VidSchiSignalRegisteredSyncObjects(a1);
  if ( a4 )
  {
    *(_OWORD *)(a2 + 208) = *a4;
    *(_OWORD *)(a2 + 224) = a4[1];
  }
  if ( !v8 && a3 != 14 )
  {
    v16 = *(_QWORD *)(a2 + 64);
    if ( v16 )
      ((void (__fastcall *)(__int64, _QWORD))DxgCoreInterface[69])(v16, *(unsigned int *)(a2 + 200));
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a2);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && (unsigned int)dword_1C006E048 > 5
      && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
    {
      v18 = *(_QWORD *)(a2 + 40);
      v25 = a3;
      v26 = *(_QWORD *)(v18 + 2648);
      v20 = *(_QWORD *)(v18 + 2640);
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL);
      v21 = *(_QWORD *)(v19 + 1616);
      v22 = *(_QWORD *)(v19 + 404);
      v24 = 1;
      v23 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned int)&unk_1C0052186,
        v17,
        (unsigned int)&v23,
        (__int64)&v24,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 1224LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a2 + 32) + 1192LL), 0, 0);
  v9 = (_QWORD *)(a2 + 88);
  for ( i = *(_QWORD **)(a2 + 88); i != v9; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext(a1, (struct VIDSCH_HW_CONTEXT *)(i - 24));
}
