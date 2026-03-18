/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x18022E870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180156384 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  CInteractionContextWrapper *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v5 = StopInteractionContext();
    if ( v5 >= 0 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this);
  }
  else
  {
    v5 = -2147019873;
  }
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v7 = v5;
    v8 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180341E80,
      byte_1802E97E4,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7);
  }
  return (unsigned int)v5;
}
