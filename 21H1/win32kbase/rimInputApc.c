/*
 * XREFs of rimInputApc @ 0x1C0049940
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C0049AC0 (EtwTraceCompleteInputDeviceRead.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015855C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C015AB04 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C017B2E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C017B374 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C017B418 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0187E38 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  NTSTATUS Status; // r14d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  int v11; // r12d
  __int64 v12; // rdi
  BOOL v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  __int64 v22; // rax
  BOOL v23; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  unsigned int v31; // eax
  char v32; // cl
  int v33; // edx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // edx
  __int64 v42; // rcx
  BOOL v43; // [rsp+60h] [rbp-79h] BYREF
  NTSTATUS v44; // [rsp+64h] [rbp-75h] BYREF
  int v45; // [rsp+68h] [rbp-71h] BYREF
  int v46; // [rsp+6Ch] [rbp-6Dh] BYREF
  NTSTATUS v47; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v48[3]; // [rsp+74h] [rbp-65h] BYREF
  ULONG_PTR v49; // [rsp+80h] [rbp-59h] BYREF
  char *v50; // [rsp+88h] [rbp-51h] BYREF
  __int64 v51; // [rsp+90h] [rbp-49h] BYREF
  __int64 Information; // [rsp+98h] [rbp-41h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR v54; // [rsp+A8h] [rbp-31h] BYREF
  char *v55; // [rsp+B0h] [rbp-29h] BYREF
  ULONG_PTR v56; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v57[5]; // [rsp+C0h] [rbp-19h] BYREF
  char v58[8]; // [rsp+E8h] [rbp+Fh] BYREF
  _BYTE v59[64]; // [rsp+F0h] [rbp+17h] BYREF
  NTSTATUS v60; // [rsp+140h] [rbp+67h] BYREF
  __int64 v61; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v62; // [rsp+158h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v59,
    "InputApc",
    0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  LOBYTE(v5) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v5, (unsigned int)IoStatusBlock->Status);
  v10 = ApcContext[48];
  v11 = 1;
  if ( v10 )
  {
    if ( v10 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)dword_1C024C960 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, *((_QWORD *)ApcContext + 60), v9) )
        {
          v19 = *((_QWORD *)ApcContext + 59);
          v20 = *(unsigned __int16 *)(v19 + 18);
          v21 = *(unsigned __int16 *)(v19 + 16);
          v22 = *(_QWORD *)(v18 + 712);
          v23 = !v22 || !*(_DWORD *)(v22 + 36);
          LODWORD(v61) = v20;
          v43 = v23;
          LODWORD(v62) = v21;
          v51 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v18 + 24));
          Information = IoStatusBlock->Information;
          v44 = IoStatusBlock->Status;
          v53 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C024C960,
            (__int64)&v53,
            (__int64)&v44,
            (__int64)&Information,
            (__int64)&v51,
            (__int64)&v43,
            (__int64)&v62,
            (__int64)&v61);
        }
      }
      else if ( (unsigned int)dword_1C024C960 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, v8, v9) )
        {
          v27 = *((_QWORD *)ApcContext + 59);
          v28 = *(unsigned __int16 *)(v27 + 16);
          v45 = *(unsigned __int16 *)(v27 + 18);
          v54 = IoStatusBlock->Information;
          v47 = IoStatusBlock->Status;
          v46 = v28;
          v55 = ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C024C960,
            (unsigned int)&unk_1C021D43D,
            v25,
            v26,
            (__int64)&v55,
            (__int64)&v47,
            (__int64)&v54,
            (__int64)&v46,
            (__int64)&v45);
        }
      }
    }
    else if ( (unsigned int)dword_1C024C960 > 4
           && v10 == 1
           && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, v8, v9) )
    {
      v56 = IoStatusBlock->Information;
      v48[0] = IoStatusBlock->Status;
      v57[0] = ApcContext;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1C024C960,
        (unsigned int)&unk_1C021D3F8,
        v29,
        v30,
        (__int64)v57,
        (__int64)v48,
        (__int64)&v56);
    }
  }
  else if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, v8, v9) )
  {
    v49 = IoStatusBlock->Information;
    v60 = IoStatusBlock->Status;
    v50 = ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C024C960,
      (unsigned int)&unk_1C021D3B6,
      v16,
      v17,
      (__int64)&v50,
      (__int64)&v60,
      (__int64)&v49);
  }
  v12 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v12 + 81) && !*(_BYTE *)(v12 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v13 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v58, v13, 0);
    if ( ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
    {
      v11 = 0;
LABEL_13:
      if ( *((_QWORD *)ApcContext + 28) )
      {
        RIMLockExclusive(v12 + 568);
        v31 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
        *((_DWORD *)ApcContext + 46) = v31;
        if ( Status < 0 )
        {
          if ( (v31 & 8) == 0 && Status != -1073741536 )
          {
            v32 = ApcContext[205];
            ApcContext[205] = v32 + 1;
            if ( (unsigned __int8)v32 >= 5u )
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v12,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v38,
                  1,
                  27,
                  (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
                  v12,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C024B170 > 5
                && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v39, v40) )
              {
                v41 = (unsigned __int8)ApcContext[48];
                v57[3] = *((_QWORD *)ApcContext + 27);
                v48[2] = Status;
                v57[4] = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v41);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v42,
                  &unk_1C021D2EA);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v12,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v33,
                  1,
                  26,
                  (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
                  v12,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C024B170 > 5
                && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v34, v35) )
              {
                v36 = (unsigned __int8)ApcContext[48];
                v57[1] = *((_QWORD *)ApcContext + 27);
                v48[1] = Status;
                v57[2] = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v36);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v37,
                  &unk_1C021D297);
              }
              RIMStartDeviceSpecificRead(v12, ApcContext, v34);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 281) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 284) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v12, (struct RIMDEV *)ApcContext);
        }
        *(_QWORD *)(v12 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 568, 0LL);
        KeLeaveCriticalRegion();
      }
      else if ( Status >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          WPP_RECORDER_SF_qq(
            (_DWORD)gRimLog,
            v14,
            1,
            28,
            (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
            v12,
            (char)ApcContext);
        }
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v12, ApcContext);
      }
      if ( v11 )
      {
        *(_QWORD *)(v12 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 104, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v12, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v58);
      goto LABEL_20;
    }
    if ( *(_QWORD *)(v12 + 640) && !*(_BYTE *)(v12 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_53:
        RIMLockExclusive(v12 + 104);
        goto LABEL_13;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_53;
  }
LABEL_20:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v59);
}
