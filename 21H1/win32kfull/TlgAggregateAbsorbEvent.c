/*
 * XREFs of TlgAggregateAbsorbEvent @ 0x1B6CA9
 * Callers:
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15EC02 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15ECFC (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x1B68E3 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall TlgAggregateAbsorbEvent(
        int a1,
        EVENT_DESCRIPTOR *a2,
        unsigned __int8 a3,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  NTSTATUS result; // eax
  unsigned __int8 AggregateFieldTypes; // [esp+Ch] [ebp-4h]

  result = -1073741811;
  if ( *(void (__stdcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 32) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(a1, (int)UserData);
    if ( AggregateFieldTypes )
      return InsertEventEntryInLookUpTable(a1, a2, a3, (int)UserData, AggregateFieldTypes);
    else
      return EtwWriteTransfer(*(_QWORD *)(a1 + 24), a2, 0, 0, a3, UserData);
  }
  return result;
}
