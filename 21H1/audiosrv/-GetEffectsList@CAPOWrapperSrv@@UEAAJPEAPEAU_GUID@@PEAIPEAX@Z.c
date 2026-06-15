/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18012F680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(
        CAPOWrapperSrv *this,
        struct _GUID **a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 10);
  if ( !v6 )
  {
    v9 = -2147467263;
LABEL_9:
    if ( (unsigned int)dword_18019D4E8 > 2 )
    {
      LODWORD(v14) = v9;
      v13 = (__int64)"CAPOWrapperSrv::GetEffectsList";
      LODWORD(v12) = 351;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4E8,
        byte_18016D3F0,
        (__int64)a3,
        a4,
        (const CHAR **)&v13,
        (__int64)&v12,
        (__int64)&v14);
    }
    return (unsigned int)v9;
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)this + 11);
    if ( v10 && v10 != -1 )
    {
      CloseHandle(*((HANDLE *)this + 11));
      v6 = *((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 11) = a4;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *, __int64))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2,
         a3,
         a4);
  if ( v9 < 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
