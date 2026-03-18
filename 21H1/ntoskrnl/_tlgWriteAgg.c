/*
 * XREFs of _tlgWriteAgg @ 0x1403727B4
 * Callers:
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 *     CmpOKToFollowLink @ 0x140623500 (CmpOKToFollowLink.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406649AC (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     PnpTraceSetDevNodeProblem @ 0x140734BAC (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x140736ADC (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceInterruptConnection @ 0x14074AF60 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14075CB54 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075ECB0 (MiLogNonRetpolineImageLoadEvent.c)
 *     MiLogPinDriverAddressesWorker @ 0x14079E200 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x14079E304 (MiLogPinDriverAddress.c)
 *     HvpIsReadErrorTransient @ 0x14087D164 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x140372D04 (ExtractAggregateFieldTypes.c)
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
