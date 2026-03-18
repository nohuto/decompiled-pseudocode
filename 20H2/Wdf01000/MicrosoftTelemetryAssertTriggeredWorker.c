/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008DDF8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008DDC4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C0041AD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0041AFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetImageTuple @ 0x1C008DCB4 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C008E4DC (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 ReturnAddress,
        unsigned int BucketArg1,
        const char *BucketArg2,
        unsigned int a4,
        unsigned int hasArgs)
{
  KIRQL v6; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // r14
  _LIST_ENTRY *v9; // rdi
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int ImageTuple; // eax
  _LIST_ENTRY *v18; // r10
  __int64 v19; // r12
  int v20; // r15d
  unsigned int v21; // ebx
  unsigned int Flink_high; // eax
  int Blink; // edi
  const char *v24; // r14
  const char *v25; // rdx
  unsigned __int8 CurrentIrql; // al
  const _GUID *v27; // r9
  int v28; // edi
  const _GUID *v29; // r8
  ULONG cData; // r10d
  KIRQL v31; // al
  _LIST_ENTRY *v32; // rcx
  unsigned int SizeOfImage; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Timestamp; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int _tlgTemp0; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int _tlgTemp1; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int _tlgTemp2; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int _tlgTemp3; // [rsp+68h] [rbp-98h] BYREF
  unsigned int _tlgTemp5; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int _tlgTemp6; // [rsp+70h] [rbp-90h] BYREF
  unsigned int _tlgTemp7; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  unsigned int _tlgTemp9; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int _tlgTemp10; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v47; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+8Ch] [rbp-74h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+94h] [rbp-6Ch] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  _EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  unsigned int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  unsigned int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  unsigned int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  int *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  _EVENT_DATA_DESCRIPTOR _tlgData[14]; // [rsp+140h] [rbp+40h] BYREF

  v43 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v6 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
  v8 = v6;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == g_MicrosoftTelemetryAssertsTriggeredList.Flink )
  {
LABEL_5:
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
$Done_70:
      KeReleaseSpinLock(&g_AssertSpinLock, v8);
      return;
    }
    v11 = MEMORY[0xFFFFF78000000320];
    PoolWithTag->Flink = (_LIST_ENTRY *)ReturnAddress;
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v9[1].Flink) = 0;
    HIDWORD(v9[1].Flink) = 0;
    LODWORD(v9[1].Blink) = 0;
    v9->Blink = (_LIST_ENTRY *)(((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
                              + ((unsigned __int64)((unsigned __int128)(v11
                                                                      * TimeIncrement
                                                                      * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
                              - 60001);
    v13 = v9 + 2;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    v13->Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    v9[2].Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v14->Blink = v13;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = v9 + 2;
  }
  else
  {
    while ( 1 )
    {
      v9 = Flink - 2;
      if ( Flink[-2].Flink == (_LIST_ENTRY *)ReturnAddress )
        break;
      Flink = Flink->Flink;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == Flink )
        goto LABEL_5;
    }
  }
  ++LODWORD(v9[1].Flink);
  ++HIDWORD(v9[1].Flink);
  v15 = MEMORY[0xFFFFF78000000320];
  Timestamp = 0;
  SizeOfImage = 0;
  v16 = v15 * KeQueryTimeIncrement();
  if ( v16 / 10000 - (unsigned __int64)v9->Blink <= 0xEA60 )
    goto $Done_70;
  ImageTuple = GetImageTuple((_IMAGE_DOS_HEADER *)v16, &Timestamp, &SizeOfImage);
  v19 = SizeOfImage;
  v20 = ImageTuple;
  if ( ImageTuple
    && ReturnAddress >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)SizeOfImage > 0x1C0000000LL
    && ReturnAddress <= 0x1C0000000LL + (unsigned __int64)SizeOfImage )
  {
    v21 = ReturnAddress - 0xC0000000;
  }
  else
  {
    v21 = 0;
  }
  SizeOfImage = (unsigned int)v9[1].Flink;
  Flink_high = HIDWORD(v9[1].Flink);
  v9->Blink = v18;
  Blink = (int)v9[1].Blink;
  v35 = Flink_high;
  KeReleaseSpinLock(&g_AssertSpinLock, v8);
  v24 = "<unknown>";
  if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
  {
    _tlgTemp0 = 10;
    _tlgData[2].Ptr = (unsigned __int64)&_tlgTemp0;
    v25 = "<unknown>";
    *(_QWORD *)&_tlgData[2].Size = 4LL;
    _tlgData[3].Ptr = (unsigned __int64)&_tlgTemp1;
    _tlgTemp1 = v21;
    *(_QWORD *)&_tlgData[3].Size = 4LL;
    _tlgData[4].Ptr = (unsigned __int64)&_tlgTemp2;
    _tlgTemp2 = v20 != 0 ? Timestamp : 0;
    *(_QWORD *)&_tlgData[4].Size = 4LL;
    _tlgData[5].Ptr = (unsigned __int64)&_tlgTemp3;
    _tlgTemp3 = v20 != 0 ? v19 : 0;
    *(_QWORD *)&_tlgData[5].Size = 4LL;
    if ( g_ModuleName )
      v25 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(&_tlgData[6], v25);
    _tlgData[7].Ptr = (unsigned __int64)&_tlgTemp5;
    _tlgTemp6 = v35;
    _tlgData[8].Ptr = (unsigned __int64)&_tlgTemp6;
    _tlgTemp5 = SizeOfImage;
    *(_QWORD *)&_tlgData[7].Size = 4LL;
    *(_QWORD *)&_tlgData[8].Size = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    _tlgTemp7 = CurrentIrql;
    _tlgData[9].Ptr = (unsigned __int64)&_tlgTemp7;
    *(_QWORD *)&_tlgData[9].Size = 4LL;
    tlgCreate1Sz_char(&_tlgData[10], "wdf01000.sys");
    _tlgData[11].Ptr = (unsigned __int64)&_tlgTemp9;
    _tlgTemp10 = hasArgs;
    _tlgTemp9 = v43;
    _tlgData[12].Ptr = (unsigned __int64)&_tlgTemp10;
    *(_QWORD *)&_tlgData[11].Size = 4LL;
    *(_QWORD *)&_tlgData[12].Size = 4LL;
    tlgCreate1Sz_char(&_tlgData[13], "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(
      &Tlgmtakm_hTelemetryAssertProv,
      (char *)&tlgEvent_3._tlgChannel,
      0LL,
      v27,
      0xEu,
      _tlgData);
  }
  if ( Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.LevelPlus1 && !Blink && !KeGetCurrentIrql() )
  {
    v28 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, Timestamp, v19, 0LL, 0LL, 0);
    if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
    {
      v54 = 4LL;
      v53 = &v46;
      v46 = 10;
      v55 = &v47;
      v47 = v21;
      v56 = 4LL;
      v57 = &v48;
      v48 = v20 != 0 ? Timestamp : 0;
      v58 = 4LL;
      v60 = 4LL;
      v49 = v20 != 0 ? v19 : 0;
      v59 = &v49;
      if ( g_ModuleName )
        v24 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(&pDesc, v24);
      v50 = SizeOfImage;
      v63 = 4LL;
      v62 = &v50;
      v64 = &v35;
      v66 = &v51;
      v65 = 4LL;
      v51 = v28;
      v67 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        &Tlgmtakm_hTelemetryAssertProv,
        (char *)&tlgEvent_5._tlgChannel,
        v29,
        0LL,
        cData,
        &pData);
    }
    if ( !v28 )
    {
      v31 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v32 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      v8 = v31;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != g_MicrosoftTelemetryAssertsTriggeredList.Flink )
      {
        while ( v32[-2].Flink != (_LIST_ENTRY *)ReturnAddress )
        {
          v32 = v32->Flink;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v32 )
            goto $Done_70;
        }
        ++LODWORD(v32[-1].Blink);
      }
      goto $Done_70;
    }
  }
}
