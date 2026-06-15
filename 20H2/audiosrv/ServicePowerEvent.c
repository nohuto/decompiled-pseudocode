/*
 * XREFs of ServicePowerEvent @ 0x180053D40
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180038140 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B7524 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180115490 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v7; // r8d
  int v8; // r9d
  const unsigned __int16 *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v9 = EventTypeNameFromEventType(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (unsigned int)&dword_18019C4B8,
      (unsigned int)&unk_180169ABB,
      v7,
      v8,
      (__int64)&v9);
  }
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 != 9 && (_DWORD)a1 && (_DWORD)a1 != 2 )
      {
        if ( (_DWORD)a1 == 4 )
        {
          return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 88LL))(
                                 g_AudioService,
                                 a2);
        }
        else
        {
          if ( (_DWORD)a1 != 7 )
            return v2;
          return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 80LL))(
                                 g_AudioService,
                                 a2);
        }
      }
    }
    else if ( (_DWORD)a1 == 32787 )
    {
      return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 96LL))(
                             g_AudioService,
                             a2);
    }
  }
  return v2;
}
