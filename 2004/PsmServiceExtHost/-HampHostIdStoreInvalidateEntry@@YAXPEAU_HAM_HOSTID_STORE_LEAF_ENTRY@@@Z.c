/*
 * XREFs of ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18003786C
 * Callers:
 *     ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x180037850 (-HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x180081C60 (-HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180081A7C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall HampHostIdStoreInvalidateEntry(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1)
{
  __int16 v2; // ax
  __int64 v3; // rcx

  v2 = *((_WORD *)a1 + 304);
  *((_WORD *)a1 + 304) = 1;
  if ( !v2 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v3,
          &unk_1800A1F78);
    }
    CemRcObjectDereference(a1);
  }
}
