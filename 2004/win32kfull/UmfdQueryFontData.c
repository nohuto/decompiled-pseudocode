/*
 * XREFs of UmfdQueryFontData @ 0x1C00E0040
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C005A788 (_tlgKeywordOn.c)
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C00E0410 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C00E0524 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C010EA38 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C010EAC0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015A810 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ @ 0x1C015ADB0 (-Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D16A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C215C (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  CMultipleConsumerWorkQueue *v12; // r14
  _QWORD *v13; // rdi
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  signed int v16; // ebx
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v17; // rax
  unsigned __int64 v18; // rsi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // r8d
  int v23; // r9d
  void *v24; // rax
  int v25; // r8d
  int v26; // r9d
  int v28; // [rsp+38h] [rbp-91h] BYREF
  int v29; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v30; // [rsp+40h] [rbp-89h] BYREF
  signed int v31; // [rsp+44h] [rbp-85h] BYREF
  int v32; // [rsp+48h] [rbp-81h] BYREF
  signed int v33; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned __int8 v34[8]; // [rsp+50h] [rbp-79h] BYREF
  void *v35; // [rsp+58h] [rbp-71h] BYREF
  void **v36; // [rsp+68h] [rbp-61h] BYREF
  int v37; // [rsp+70h] [rbp-59h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-51h]
  __int64 v39; // [rsp+80h] [rbp-49h]
  char v40; // [rsp+88h] [rbp-41h]
  __int64 v41; // [rsp+90h] [rbp-39h]
  int v42; // [rsp+98h] [rbp-31h]
  int v43; // [rsp+9Ch] [rbp-2Dh]
  __int64 v44; // [rsp+A0h] [rbp-29h]
  __int64 v45; // [rsp+A8h] [rbp-21h]
  __int64 v46; // [rsp+B0h] [rbp-19h]
  int v47; // [rsp+B8h] [rbp-11h]
  unsigned int v48; // [rsp+BCh] [rbp-Dh]
  __int64 v49; // [rsp+C0h] [rbp-9h]
  __int128 v50; // [rsp+C8h] [rbp-1h]
  __int128 ThreadInformation; // [rsp+D8h] [rbp+Fh] BYREF

  v37 = 2;
  CurrentThread = KeGetCurrentThread();
  v40 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v39 = ThreadInformation;
    v40 = 1;
  }
  v49 = 0LL;
  v48 = -1;
  v36 = &QueryFontDataRequest::`vftable';
  v45 = a5;
  v46 = a6;
  v47 = a7;
  v50 = 0LL;
  v41 = a1;
  v44 = a2;
  v42 = a3;
  v43 = a4;
  v11 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  *(_QWORD *)v34 = &v36;
  if ( (unsigned int)v11 > 3 )
    return 0xFFFFFFFFLL;
  v12 = (CMultipleConsumerWorkQueue *)g_pUmfdClientPort[v11];
  v13 = EngAllocMem(0, 8u, 0x71724446u);
  if ( !v13 )
    return 0xFFFFFFFFLL;
  *v13 = 0LL;
  v35 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 16LL))(*(_QWORD *)v34)
      || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
    {
      v17 = CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(v12, v34, v14);
      *v13 = v17;
      v16 = v17 == 0LL ? 0xC0000001 : 0;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v15);
      v16 = -1073741823;
    }
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v35);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v16 = -1073741823;
  }
  if ( v16 >= 0 )
  {
    v16 = UmfdClientWaitForCompletion(v12, v13, (const unsigned int *)"0u");
    if ( v16 == 258 )
    {
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled() )
      {
        if ( (unsigned int)dword_1C032B3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
        {
          v28 = 0;
          v29 = v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v19,
            (unsigned int)&unk_1C02F35D6,
            v20,
            v21,
            (__int64)&v29,
            (__int64)&v28);
        }
        v16 = UmfdClientWaitForCompletion(v12, v13, 0LL);
        if ( (unsigned int)dword_1C032B3F8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
          {
            v31 = v16;
            v30 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v18;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v30,
              (unsigned int)&unk_1C02F3604,
              v22,
              v23,
              (__int64)&v31,
              (__int64)&v30);
          }
        }
      }
      else
      {
        v24 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v24 )
          ZwClose(v24);
        UmfdCancelServerOutstandingRequests(v12);
        v16 = UmfdClientWaitForCompletion(v12, v13, 0LL);
        if ( (unsigned int)dword_1C032B3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
        {
          v33 = v16;
          v32 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v32,
            (unsigned int)&unk_1C02F3590,
            v25,
            v26,
            (__int64)&v33,
            (__int64)&v32);
        }
      }
    }
  }
  EngFreeMem(v13);
  if ( v16 >= 0 )
    return v48;
  else
    return 0xFFFFFFFFLL;
}
