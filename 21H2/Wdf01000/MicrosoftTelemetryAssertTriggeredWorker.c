/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008F448
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008F414 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0060430 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetImageTuple @ 0x1C008F3C4 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C008FB70 (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 ReturnAddress,
        unsigned int OriginatingBinary,
        const char *BucketArg1,
        unsigned int BucketArg2,
        unsigned int ReturnAddress_0)
{
  KIRQL v7; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v9; // r14
  _LIST_ENTRY *v10; // rdi
  _LIST_ENTRY *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ImageTuple; // eax
  _LIST_ENTRY *v19; // r10
  __int64 v20; // r12
  int v21; // r15d
  unsigned int v22; // ebx
  unsigned int Flink_high; // eax
  int Blink; // edi
  const char *v25; // r14
  const char *v26; // rdx
  KIRQL CurrentIrql; // al
  __int64 v28; // r8
  unsigned int v29; // edi
  ULONG cData; // r9d
  KIRQL v31; // al
  _LIST_ENTRY *v32; // rcx
  unsigned int SizeOfImage; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Timestamp; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int _tlgTemp3; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int _tlgTemp5; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int _tlgTemp6; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int _tlgTemp7; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned int _tlgTemp9; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int _tlgTemp10; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+74h] [rbp-8Ch]
  unsigned int _tlgTemp0; // [rsp+78h] [rbp-88h] BYREF
  unsigned int _tlgTemp1; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int _tlgTemp2; // [rsp+80h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *p_tlgTemp10; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  unsigned int *p_tlgTemp9; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  unsigned int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  unsigned int *p_tlgTemp7; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *p_tlgTemp6; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  unsigned int *p_tlgTemp5; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  unsigned int *p_tlgTemp3; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  _EVENT_DATA_DESCRIPTOR _tlgData[14]; // [rsp+130h] [rbp+30h] BYREF

  v39 = BucketArg2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == g_MicrosoftTelemetryAssertsTriggeredList.Flink )
  {
LABEL_5:
    Pool2 = (_LIST_ENTRY *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
$Done_72:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    Pool2->Flink = (_LIST_ENTRY *)ReturnAddress;
    TimeIncrement = KeQueryTimeIncrement();
    v10[1].Flink = 0LL;
    LODWORD(v10[1].Blink) = 0;
    v10->Blink = (_LIST_ENTRY *)(((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
                               + ((unsigned __int64)((unsigned __int128)(v12
                                                                       * TimeIncrement
                                                                       * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
                               - 60001);
    v14 = v10 + 2;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    v14->Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    v10[2].Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v15->Blink = v14;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = v10 + 2;
  }
  else
  {
    while ( 1 )
    {
      v10 = Flink - 2;
      if ( Flink[-2].Flink == (_LIST_ENTRY *)ReturnAddress )
        break;
      Flink = Flink->Flink;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == Flink )
        goto LABEL_5;
    }
  }
  ++LODWORD(v10[1].Flink);
  ++HIDWORD(v10[1].Flink);
  v16 = MEMORY[0xFFFFF78000000320];
  v17 = v16 * KeQueryTimeIncrement();
  Timestamp = 0;
  SizeOfImage = 0;
  if ( v17 / 10000 - (unsigned __int64)v10->Blink <= 0xEA60 )
    goto $Done_72;
  ImageTuple = GetImageTuple((_IMAGE_DOS_HEADER *)v17, &Timestamp, &SizeOfImage);
  v20 = SizeOfImage;
  v21 = ImageTuple;
  if ( ImageTuple
    && ReturnAddress >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)SizeOfImage > 0x1C0000000LL
    && ReturnAddress <= 0x1C0000000LL + (unsigned __int64)SizeOfImage )
  {
    v22 = ReturnAddress - 0xC0000000;
  }
  else
  {
    v22 = 0;
  }
  SizeOfImage = (unsigned int)v10[1].Flink;
  Flink_high = HIDWORD(v10[1].Flink);
  v10->Blink = v19;
  Blink = (int)v10[1].Blink;
  v42 = Flink_high;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v25 = "<unknown>";
  if ( !BucketArg1 )
    BucketArg1 = (const char *)g_ModuleName;
  if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5
    && (Tlgmtakm_hTelemetryAssertProv.KeywordAny & 0x400000000000LL) != 0
    && (Tlgmtakm_hTelemetryAssertProv.KeywordAll & 0x400000000000LL) == Tlgmtakm_hTelemetryAssertProv.KeywordAll )
  {
    _tlgTemp0 = 10;
    _tlgData[2].Ptr = (unsigned __int64)&_tlgTemp0;
    v26 = "<unknown>";
    *(_QWORD *)&_tlgData[2].Size = 4LL;
    _tlgData[3].Ptr = (unsigned __int64)&_tlgTemp1;
    _tlgTemp1 = v22;
    *(_QWORD *)&_tlgData[3].Size = 4LL;
    _tlgData[4].Ptr = (unsigned __int64)&_tlgTemp2;
    _tlgTemp2 = v21 != 0 ? Timestamp : 0;
    *(_QWORD *)&_tlgData[4].Size = 4LL;
    _tlgData[5].Ptr = (unsigned __int64)&_tlgTemp3;
    *(_QWORD *)&_tlgData[5].Size = 4LL;
    _tlgTemp3 = v21 != 0 ? v20 : 0;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(&_tlgData[6], v26);
    _tlgData[7].Ptr = (unsigned __int64)&_tlgTemp5;
    _tlgTemp6 = v42;
    _tlgData[8].Ptr = (unsigned __int64)&_tlgTemp6;
    _tlgTemp5 = SizeOfImage;
    *(_QWORD *)&_tlgData[7].Size = 4LL;
    *(_QWORD *)&_tlgData[8].Size = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    _tlgData[9].Reserved = 0;
    _tlgTemp7 = CurrentIrql;
    _tlgData[9].Size = 4;
    _tlgData[9].Ptr = (unsigned __int64)&_tlgTemp7;
    tlgCreate1Sz_char(&_tlgData[10], BucketArg1);
    _tlgData[11].Ptr = (unsigned __int64)&_tlgTemp9;
    _tlgTemp10 = ReturnAddress_0;
    _tlgTemp9 = v39;
    _tlgData[12].Ptr = (unsigned __int64)&_tlgTemp10;
    *(_QWORD *)&_tlgData[11].Size = v28;
    *(_QWORD *)&_tlgData[12].Size = v28;
    tlgCreate1Sz_char(&_tlgData[13], "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(
      &Tlgmtakm_hTelemetryAssertProv,
      (char *)&tlgEvent_3._tlgChannel,
      0LL,
      0LL,
      0xEu,
      _tlgData);
  }
  if ( Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.LevelPlus1 && !Blink && !KeGetCurrentIrql() )
  {
    v29 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, Timestamp, v20, 0LL, 0LL, 0);
    if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5
      && (Tlgmtakm_hTelemetryAssertProv.KeywordAny & 0x400000000000LL) != 0
      && (Tlgmtakm_hTelemetryAssertProv.KeywordAll & 0x400000000000LL) == Tlgmtakm_hTelemetryAssertProv.KeywordAll )
    {
      v48 = 4LL;
      p_tlgTemp10 = &_tlgTemp10;
      _tlgTemp10 = 10;
      p_tlgTemp9 = &_tlgTemp9;
      _tlgTemp9 = v22;
      v50 = 4LL;
      v51 = &v39;
      v39 = v21 != 0 ? Timestamp : 0;
      v52 = 4LL;
      v54 = 4LL;
      _tlgTemp7 = v21 != 0 ? v20 : 0;
      p_tlgTemp7 = &_tlgTemp7;
      if ( g_ModuleName )
        v25 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(&pDesc, v25);
      _tlgTemp6 = SizeOfImage;
      v57 = 4LL;
      p_tlgTemp6 = &_tlgTemp6;
      _tlgTemp5 = v42;
      p_tlgTemp5 = &_tlgTemp5;
      p_tlgTemp3 = &_tlgTemp3;
      v59 = 4LL;
      _tlgTemp3 = v29;
      v61 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        &Tlgmtakm_hTelemetryAssertProv,
        (char *)&tlgEvent_5._tlgChannel,
        0LL,
        0LL,
        cData,
        &pData);
    }
    if ( !v29 )
    {
      v31 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v32 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      v9 = v31;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != g_MicrosoftTelemetryAssertsTriggeredList.Flink )
      {
        while ( v32[-2].Flink != (_LIST_ENTRY *)ReturnAddress )
        {
          v32 = v32->Flink;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v32 )
            goto $Done_72;
        }
        ++LODWORD(v32[-1].Blink);
      }
      goto $Done_72;
    }
  }
}
