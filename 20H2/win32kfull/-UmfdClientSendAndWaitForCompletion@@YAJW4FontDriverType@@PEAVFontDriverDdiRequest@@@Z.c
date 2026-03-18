/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230
 * Callers:
 *     UmfdQueryTrueTypeTable @ 0x1C005FE90 (UmfdQueryTrueTypeTable.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C005FFCC (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0060120 (UmfdQueryAdvanceWidths.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00657CC (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C00F3500 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00F3640 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C00F36D0 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C00F3780 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00F3908 (UmfdUnloadFontFileInternal.c)
 *     UmfdDestroyFont @ 0x1C0100390 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0145ED0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DD520 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DD580 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DD630 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DD6F0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DD770 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E9E78 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0124A14 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015D97C (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D0890 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C0BFC (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02DD808 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DE268 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DE2A8 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02DE2CC (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 *v3; // rsi
  unsigned __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  PSLIST_ENTRY v7; // rbx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // rdi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  int v23; // [rsp+38h] [rbp-29h] BYREF
  PSLIST_ENTRY v24; // [rsp+40h] [rbp-21h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-19h] BYREF
  void *v26; // [rsp+50h] [rbp-11h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp+7h] BYREF
  int v30; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+D0h] [rbp+6Fh]
  int v32; // [rsp+D8h] [rbp+77h] BYREF
  int v33; // [rsp+E0h] [rbp+7Fh] BYREF

  v31 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (__int64 *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  if ( v3 )
  {
    *v3 = 0LL;
    v26 = &UmfdHostLifeTimeManager::s_ReadyLock;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    if ( !UmfdHostLifeTimeManager::s_Ready )
    {
      GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
      KeLeaveCriticalRegion();
      v5 = -1073741823;
LABEL_37:
      EngFreeMem(v3);
      return (unsigned int)v5;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31)
      && UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread != KeGetCurrentThread() )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v4);
      v5 = -1073741823;
LABEL_16:
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v26);
      if ( v5 >= 0 )
      {
        v10 = *v3;
        if ( *v3 )
        {
          v12 = *(_QWORD *)(v10 + 40);
          Timeout.QuadPart = -300000000LL;
          if ( KeWaitForSingleObject(**(PVOID **)(v12 + 8), Executive, 0, 0, &Timeout) == 258 )
          {
            v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( (unsigned int)dword_1C032A3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x200000000000LL) )
            {
              v30 = 0;
              v32 = v16;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v17,
                (unsigned int)&unk_1C02F2CA5,
                v18,
                v19,
                (__int64)&v32,
                (__int64)&v30);
            }
            v5 = UmfdClientWaitForCompletion(v2, v3, 0LL);
            if ( (unsigned int)dword_1C032A3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x200000000000LL) )
            {
              v23 = v5;
              v33 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v16;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                MEMORY[0xFFFFF78000000320],
                (unsigned int)&unk_1C02F2C4E,
                v20,
                v21,
                (__int64)&v23,
                (__int64)&v33);
            }
          }
          else
          {
            v13 = *(_DWORD *)(v10 + 8) == 3;
            v14 = v2[1];
            v15 = *(_QWORD *)(v10 + 40);
            v29[1] = v15;
            v29[0] = v14;
            v28 = v10;
            if ( v13 )
            {
              CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v28);
              CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v29);
              *v3 = 0LL;
              v5 = 0;
            }
            else
            {
              EngFreeMem((PVOID)v10);
              if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v14) > 8 )
              {
                _InterlockedDecrement((volatile signed __int32 *)v14);
                CEventPool::CEventPoolEntry::Destroy((PVOID)v15);
              }
              else
              {
                KeResetEvent(**(PRKEVENT **)(v15 + 8));
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 16), (PSLIST_ENTRY)v15);
              }
              *v3 = 0LL;
              v5 = -1073741823;
            }
          }
        }
        else
        {
          v5 = -1073741811;
        }
      }
      goto LABEL_37;
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
      *((_QWORD *)v8 + 7) = v31;
      v8[2] = 0;
      v11 = *v2;
      v25 = v8;
      if ( !*(_BYTE *)v11 )
      {
        v8[2] = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 16), (PSLIST_ENTRY)v8);
        KeSetEvent(**(PRKEVENT **)(v11 + 8), 1, 0);
LABEL_14:
        *v3 = (__int64)v9;
        v5 = 0;
        if ( !v9 )
          v5 = -1073741823;
        goto LABEL_16;
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
    goto LABEL_14;
  }
  return 3221225495LL;
}
