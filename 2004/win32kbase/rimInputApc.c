/*
 * XREFs of rimInputApc @ 0x1C0175DE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0026560 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0055BBC (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C005F130 (EtwTraceCompleteInputDeviceRead.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013EEE0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015220C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01547B4 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C0174FB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C0175044 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C01750E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0182138 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS Status; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  int v15; // r12d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  BOOL v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdi
  BOOL v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  char v32; // cl
  int v33; // edx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edx
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  BOOL v45; // [rsp+60h] [rbp-79h] BYREF
  NTSTATUS v46; // [rsp+64h] [rbp-75h] BYREF
  int v47; // [rsp+68h] [rbp-71h] BYREF
  int v48; // [rsp+6Ch] [rbp-6Dh] BYREF
  NTSTATUS v49; // [rsp+70h] [rbp-69h] BYREF
  NTSTATUS v50; // [rsp+74h] [rbp-65h] BYREF
  NTSTATUS v51; // [rsp+78h] [rbp-61h] BYREF
  NTSTATUS v52; // [rsp+7Ch] [rbp-5Dh] BYREF
  ULONG_PTR v53; // [rsp+80h] [rbp-59h] BYREF
  char *v54; // [rsp+88h] [rbp-51h] BYREF
  __int64 v55; // [rsp+90h] [rbp-49h] BYREF
  __int64 v56; // [rsp+98h] [rbp-41h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR Information; // [rsp+A8h] [rbp-31h] BYREF
  char *v59; // [rsp+B0h] [rbp-29h] BYREF
  ULONG_PTR v60; // [rsp+B8h] [rbp-21h] BYREF
  char *v61; // [rsp+C0h] [rbp-19h] BYREF
  const WCHAR *v62; // [rsp+C8h] [rbp-11h] BYREF
  const WCHAR *v63; // [rsp+D0h] [rbp-9h] BYREF
  const WCHAR *v64; // [rsp+D8h] [rbp-1h] BYREF
  const WCHAR *v65; // [rsp+E0h] [rbp+7h] BYREF
  char v66[8]; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 *v67[8]; // [rsp+F0h] [rbp+17h] BYREF
  NTSTATUS v68; // [rsp+140h] [rbp+67h] BYREF
  __int64 v69; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v70; // [rsp+158h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v67, "InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6, IoStatusBlock->Status, v7);
  v14 = ApcContext[48];
  v15 = 1;
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
        {
          v23 = *((_QWORD *)ApcContext + 59);
          v24 = *(unsigned __int16 *)(v23 + 16);
          v47 = *(unsigned __int16 *)(v23 + 18);
          Information = IoStatusBlock->Information;
          v49 = IoStatusBlock->Status;
          v48 = v24;
          v59 = ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0246A70,
            byte_1C0217815,
            v12,
            v13,
            (__int64)&v59,
            (__int64)&v49,
            (__int64)&Information,
            (__int64)&v48,
            (__int64)&v47);
        }
      }
      else
      {
        v12 = *((_QWORD *)ApcContext + 60);
        if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
        {
          v16 = *((_QWORD *)ApcContext + 59);
          v17 = *(unsigned __int16 *)(v16 + 18);
          v18 = *(unsigned __int16 *)(v16 + 16);
          v19 = *(_QWORD *)(v12 + 712);
          v20 = !v19 || !*(_DWORD *)(v19 + 36);
          LODWORD(v69) = v17;
          v45 = v20;
          LODWORD(v70) = v18;
          v55 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v12 + 24));
          v56 = IoStatusBlock->Information;
          v46 = IoStatusBlock->Status;
          v57 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0246A70,
            byte_1C0217867,
            v21,
            v22,
            (__int64)&v57,
            (__int64)&v46,
            (__int64)&v56,
            (void **)&v55,
            (__int64)&v45,
            (__int64)&v70,
            (__int64)&v69);
        }
      }
    }
    else if ( v14 == 1 && (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
    {
      v60 = IoStatusBlock->Information;
      v50 = IoStatusBlock->Status;
      v61 = ApcContext;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C0246A70,
        byte_1C02178DA,
        v12,
        v13,
        (__int64)&v61,
        (__int64)&v50,
        (__int64)&v60);
    }
  }
  else if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
  {
    v53 = IoStatusBlock->Information;
    v68 = IoStatusBlock->Status;
    v54 = ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0246A70,
      byte_1C02177D3,
      v12,
      v13,
      (__int64)&v54,
      (__int64)&v68,
      (__int64)&v53);
  }
  v25 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v25 + 81) && !*(_BYTE *)(v25 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    v26 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v66, v26, 0);
    if ( Status >= 0 && (ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0) )
    {
      v15 = 0;
LABEL_43:
      if ( *((_QWORD *)ApcContext + 28) )
      {
        RIMLockExclusive(v25 + 568);
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
                (const void *)v25,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v40) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v40,
                  1,
                  27,
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v25,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
              {
                v41 = (unsigned __int8)ApcContext[48];
                v64 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v52 = Status;
                v65 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v41);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v42,
                  byte_1C0217727,
                  v43,
                  v44,
                  &v65,
                  &v64,
                  (__int64)&v52);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v25,
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
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v25,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
              {
                v36 = (unsigned __int8)ApcContext[48];
                v62 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v51 = Status;
                v63 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v36);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v37,
                  byte_1C0217780,
                  v38,
                  v39,
                  &v63,
                  &v62,
                  (__int64)&v51);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v25, (__int64)ApcContext, v34, v35);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 281) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 284) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v25, (struct RIMDEV *)ApcContext);
        }
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v25 + 568));
      }
      else if ( Status >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            (__int64)gRimLog,
            4u,
            1u,
            0x1Cu,
            (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
            v25,
            ApcContext);
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v25, ApcContext);
      }
      if ( v15 )
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v25 + 104));
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v25, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v66);
      goto LABEL_70;
    }
    if ( *(_QWORD *)(v25 + 640) && !*(_BYTE *)(v25 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_42:
        RIMLockExclusive(v25 + 104);
        goto LABEL_43;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_42;
  }
LABEL_70:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v67);
}
