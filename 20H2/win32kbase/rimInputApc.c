/*
 * XREFs of rimInputApc @ 0x1C01739B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00B5C88 (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00BF490 (EtwTraceCompleteInputDeviceRead.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013CB90 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C014FC84 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0152254 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C0172B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C0172C14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C0172CB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C017FD08 (RIMApplyPTPConfigRemedy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS Status; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  int v16; // r12d
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  BOOL v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rdi
  BOOL v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  char v33; // cl
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // edx
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  BOOL v46; // [rsp+60h] [rbp-79h] BYREF
  NTSTATUS v47; // [rsp+64h] [rbp-75h] BYREF
  int v48; // [rsp+68h] [rbp-71h] BYREF
  int v49; // [rsp+6Ch] [rbp-6Dh] BYREF
  NTSTATUS v50; // [rsp+70h] [rbp-69h] BYREF
  NTSTATUS v51; // [rsp+74h] [rbp-65h] BYREF
  NTSTATUS v52; // [rsp+78h] [rbp-61h] BYREF
  NTSTATUS v53; // [rsp+7Ch] [rbp-5Dh] BYREF
  ULONG_PTR v54; // [rsp+80h] [rbp-59h] BYREF
  char *v55; // [rsp+88h] [rbp-51h] BYREF
  __int64 v56; // [rsp+90h] [rbp-49h] BYREF
  __int64 v57; // [rsp+98h] [rbp-41h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR Information; // [rsp+A8h] [rbp-31h] BYREF
  char *v60; // [rsp+B0h] [rbp-29h] BYREF
  ULONG_PTR v61; // [rsp+B8h] [rbp-21h] BYREF
  char *v62; // [rsp+C0h] [rbp-19h] BYREF
  const WCHAR *v63; // [rsp+C8h] [rbp-11h] BYREF
  const WCHAR *v64; // [rsp+D0h] [rbp-9h] BYREF
  const WCHAR *v65; // [rsp+D8h] [rbp-1h] BYREF
  const WCHAR *v66; // [rsp+E0h] [rbp+7h] BYREF
  char v67[8]; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 *v68[8]; // [rsp+F0h] [rbp+17h] BYREF
  NTSTATUS v69; // [rsp+140h] [rbp+67h] BYREF
  __int64 v70; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v71; // [rsp+158h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v68, "InputApc", 0LL, a4);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  LOBYTE(v7) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v7, IoStatusBlock->Status, v8);
  v15 = ApcContext[48];
  v16 = 1;
  if ( v15 )
  {
    if ( v15 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
        {
          v24 = *((_QWORD *)ApcContext + 59);
          v25 = *(unsigned __int16 *)(v24 + 16);
          v48 = *(unsigned __int16 *)(v24 + 18);
          Information = IoStatusBlock->Information;
          v50 = IoStatusBlock->Status;
          v49 = v25;
          v60 = ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0244A70,
            byte_1C02159A6,
            v13,
            v14,
            (__int64)&v60,
            (__int64)&v50,
            (__int64)&Information,
            (__int64)&v49,
            (__int64)&v48);
        }
      }
      else
      {
        v13 = *((_QWORD *)ApcContext + 60);
        if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
        {
          v17 = *((_QWORD *)ApcContext + 59);
          v18 = *(unsigned __int16 *)(v17 + 18);
          v19 = *(unsigned __int16 *)(v17 + 16);
          v20 = *(_QWORD *)(v13 + 712);
          v21 = !v20 || !*(_DWORD *)(v20 + 36);
          LODWORD(v70) = v18;
          v46 = v21;
          LODWORD(v71) = v19;
          v56 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v13 + 24));
          v57 = IoStatusBlock->Information;
          v47 = IoStatusBlock->Status;
          v58 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0244A70,
            byte_1C02159F8,
            v22,
            v23,
            (__int64)&v58,
            (__int64)&v47,
            (__int64)&v57,
            (void **)&v56,
            (__int64)&v46,
            (__int64)&v71,
            (__int64)&v70);
        }
      }
    }
    else if ( v15 == 1 && (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
    {
      v61 = IoStatusBlock->Information;
      v51 = IoStatusBlock->Status;
      v62 = ApcContext;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C0244A70,
        byte_1C0215A6B,
        v13,
        v14,
        (__int64)&v62,
        (__int64)&v51,
        (__int64)&v61);
    }
  }
  else if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v54 = IoStatusBlock->Information;
    v69 = IoStatusBlock->Status;
    v55 = ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0244A70,
      byte_1C0215964,
      v13,
      v14,
      (__int64)&v55,
      (__int64)&v69,
      (__int64)&v54);
  }
  v26 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v26 + 81) && !*(_BYTE *)(v26 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    v27 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v67, v27, 0);
    if ( Status >= 0 && (ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0) )
    {
      v16 = 0;
LABEL_43:
      if ( *((_QWORD *)ApcContext + 28) )
      {
        RIMLockExclusive(v26 + 568);
        v32 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
        *((_DWORD *)ApcContext + 46) = v32;
        if ( Status < 0 )
        {
          if ( (v32 & 8) == 0 && Status != -1073741536 )
          {
            v33 = ApcContext[205];
            ApcContext[205] = v33 + 1;
            if ( (unsigned __int8)v33 >= 5u )
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v26,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v41) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v41,
                  1,
                  27,
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v26,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
              {
                v42 = (unsigned __int8)ApcContext[48];
                v65 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v53 = Status;
                v66 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v42);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v43,
                  byte_1C02158B8,
                  v44,
                  v45,
                  &v66,
                  &v65,
                  (__int64)&v53);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v26,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v34) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v34,
                  1,
                  26,
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v26,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
              {
                v37 = (unsigned __int8)ApcContext[48];
                v63 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v52 = Status;
                v64 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v37);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v38,
                  byte_1C0215911,
                  v39,
                  v40,
                  &v64,
                  &v63,
                  (__int64)&v52);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v26, (__int64)ApcContext, v35, v36);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 282) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 285) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v26, (struct RIMDEV *)ApcContext);
        }
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v26 + 568));
      }
      else if ( Status >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_qq(
            (_DWORD)gRimLog,
            v28,
            1,
            28,
            (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
            v26,
            (char)ApcContext);
        }
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v26, ApcContext);
      }
      if ( v16 )
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v26 + 104));
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v26, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v67);
      goto LABEL_70;
    }
    if ( *(_QWORD *)(v26 + 640) && !*(_BYTE *)(v26 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_42:
        RIMLockExclusive(v26 + 104);
        goto LABEL_43;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_42;
  }
LABEL_70:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v68);
}
