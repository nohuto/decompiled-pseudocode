/*
 * XREFs of ?GetCurrentSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x180127750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 52) + 48LL))(
               *((_QWORD *)this + 52),
               a2);
    if ( (int)result < 0 )
      return (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
               this,
               a2);
    v8 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a2->Data1 )
      v8 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *, struct _GUID *))(*(_QWORD *)this + 200LL))(
               this,
               a2);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v9) = -2147024809;
      v11 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId";
      LODWORD(v10) = 805;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        v5,
        v6,
        (const CHAR **)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
    return 2147942487LL;
  }
  return result;
}
