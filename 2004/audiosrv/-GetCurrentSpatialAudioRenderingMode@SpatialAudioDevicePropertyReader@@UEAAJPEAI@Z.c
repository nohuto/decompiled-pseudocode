/*
 * XREFs of ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1801284E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 *     AudioEncoderIdToRenderingMode @ 0x180127E6C (AudioEncoderIdToRenderingMode.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 52) + 48LL))(*((_QWORD *)this + 52), v16);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v12 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v16[0];
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == v16[0] )
        v12 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - v16[1];
      if ( v12 )
        *a2 = AudioEncoderIdToRenderingMode(v16, v9, v10, v11);
      else
        return (*(unsigned int (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)this
                                                                                                  + 192LL))(
                 this,
                 a2);
    }
    else if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      HIDWORD(v14) = v8;
      LODWORD(v14) = 785;
      v15 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D305,
        v10,
        v11,
        (const CHAR **)&v15,
        (__int64)&v14,
        (__int64)&v14 + 4);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v14 = 0x30B80070057LL;
      v15 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v5,
        v6,
        (const CHAR **)&v15,
        (__int64)&v14 + 4,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
