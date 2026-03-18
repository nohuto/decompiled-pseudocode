/*
 * XREFs of _tlgWriteAgg @ 0x140375C84
 * Callers:
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     CmpOKToFollowLink @ 0x14061C0A0 (CmpOKToFollowLink.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     PnpTraceClearDevNodeProblem @ 0x14073F5D4 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceSetDevNodeProblem @ 0x1407425E0 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceInterruptConnection @ 0x14075DF60 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140768CA4 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14076F5B0 (MiLogNonRetpolineImageLoadEvent.c)
 *     MiLogPinDriverAddressesWorker @ 0x1407B1510 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x1407B1614 (MiLogPinDriverAddress.c)
 *     HvpIsReadErrorTransient @ 0x1408843F4 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1403761D4 (ExtractAggregateFieldTypes.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = a4;
      return InsertEventEntryInLookUpTable(
               a1,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a4, UserData);
    }
  }
  return result;
}
