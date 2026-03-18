/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00DFC8C
 * Callers:
 *     UmfdDestroyFont @ 0x1C00DC9A0 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00DF810 (UmfdQueryTrueTypeTable.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C00DFA2C (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     UmfdQueryAdvanceWidths @ 0x1C00DFB80 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryFontTree @ 0x1C00E1500 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00E1648 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFont @ 0x1C00E2200 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C00E22F0 (UmfdQueryFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00E2380 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00E26D0 (UmfdLoadFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C01438A0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DE9C0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DEA20 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DEAD0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DEB90 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DEC10 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C005A788 (_tlgKeywordOn.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C00E0524 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C00E0654 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C010E08C (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C010EA38 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C010EAC0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015A810 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ @ 0x1C015ADB0 (-Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D16A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C215C (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DF6A8 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  __int64 *v2; // r14
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rax
  signed int v5; // ebx
  __int64 v6; // rbx
  PSLIST_ENTRY v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  void *v17; // rax
  int v18; // r8d
  int v19; // r9d
  signed int v21; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+34h] [rbp-2Ch] BYREF
  signed int v23; // [rsp+38h] [rbp-28h] BYREF
  PSLIST_ENTRY v24; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-18h] BYREF
  void *v26; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h]
  int v29; // [rsp+B0h] [rbp+50h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  v2 = (__int64 *)g_pUmfdClientPort[a1];
  v3 = EngAllocMem(0, 8u, 0x71724446u);
  if ( !v3 )
    return 3221225495LL;
  *v3 = 0LL;
  v26 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28)
      && UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread != KeGetCurrentThread() )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v4);
      v5 = -1073741823;
LABEL_15:
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v26);
      goto LABEL_21;
    }
    v6 = v2[1];
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v6 + 16));
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6);
    }
    else
    {
      v7 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v7 )
      {
        v24 = 0LL;
        goto LABEL_13;
      }
    }
    v24 = v7;
    v8 = EngAllocMem(0, 0x40u, 0x676D6466u);
    v9 = v8;
    if ( v8 )
    {
      v8[6] = 8;
      *((_QWORD *)v8 + 5) = v7;
      v8[7] = 8;
      *((_QWORD *)v8 + 2) = v8 + 14;
      *((_QWORD *)v8 + 7) = v28;
      v8[2] = 0;
      v10 = *v2;
      v25 = v8;
      if ( !*(_BYTE *)v10 )
      {
        v8[2] = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 16), (PSLIST_ENTRY)v8);
        KeSetEvent(**(PRKEVENT **)(v10 + 8), 1, 0);
        goto LABEL_14;
      }
    }
    else
    {
      v25 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v25);
LABEL_13:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v24);
    v9 = 0LL;
LABEL_14:
    *v3 = v9;
    v5 = v9 != 0LL ? 0 : 0xC0000001;
    goto LABEL_15;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  v5 = -1073741823;
LABEL_21:
  if ( v5 >= 0 )
  {
    v5 = UmfdClientWaitForCompletion(v2, v3, (const unsigned int *)"0u");
    if ( v5 == 258 )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled() )
      {
        if ( (unsigned int)dword_1C032B3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
        {
          v27 = 0;
          v29 = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v12,
            (unsigned int)&unk_1C02F35D6,
            v13,
            v14,
            (__int64)&v29,
            (__int64)&v27);
        }
        v5 = UmfdClientWaitForCompletion(v2, v3, 0LL);
        if ( (unsigned int)dword_1C032B3F8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
          {
            v21 = v5;
            v30 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v30,
              (unsigned int)&unk_1C02F3604,
              v15,
              v16,
              (__int64)&v21,
              (__int64)&v30);
          }
        }
      }
      else
      {
        v17 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v17 )
          ZwClose(v17);
        UmfdCancelServerOutstandingRequests(v2);
        v5 = UmfdClientWaitForCompletion(v2, v3, 0LL);
        if ( (unsigned int)dword_1C032B3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3F8, 0x200000000000LL) )
        {
          v23 = v5;
          v22 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v22,
            (unsigned int)&unk_1C02F3590,
            v18,
            v19,
            (__int64)&v23,
            (__int64)&v22);
        }
      }
    }
  }
  EngFreeMem(v3);
  return (unsigned int)v5;
}
