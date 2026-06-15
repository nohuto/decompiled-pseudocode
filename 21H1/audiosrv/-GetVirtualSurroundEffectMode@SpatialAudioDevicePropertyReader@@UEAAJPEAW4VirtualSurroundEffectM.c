/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180044DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v5 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 52) + 32LL))(*((_QWORD *)this + 52), &v12);
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( (unsigned int)dword_18019D4B0 > 2 )
        {
          LODWORD(v10) = v6;
          LODWORD(v11) = 855;
          v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_18019D4B0,
            (__int64)v9,
            (__int64)&v11,
            (__int64)&v10);
        }
      }
      else
      {
        if ( !v12 )
          v5 = *((_DWORD *)this + 125);
        *(_DWORD *)a2 = v5;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v10) = -2147024809;
        v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
        LODWORD(v11) = 851;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)v9,
          (__int64)&v11,
          (__int64)&v10);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v10) = -2147418113;
      v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      LODWORD(v11) = 850;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v9,
        (__int64)&v11,
        (__int64)&v10);
    }
    return (unsigned int)-2147418113;
  }
  return v7;
}
