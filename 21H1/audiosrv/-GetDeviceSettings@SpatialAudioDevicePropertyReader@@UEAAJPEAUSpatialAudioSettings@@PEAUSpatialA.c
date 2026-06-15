/*
 * XREFs of ?GetDeviceSettings@SpatialAudioDevicePropertyReader@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180045740
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetDeviceSettings(
        SpatialAudioDevicePropertyReader *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  size_t v5; // r12
  unsigned int v9; // ebx
  const void *v10; // rdx
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !*((_DWORD *)this + 128) )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v12) = 687;
LABEL_13:
      v13 = (__int64)"SpatialAudioDevicePropertyReader::GetDeviceSettings";
      LODWORD(v14) = -2147418113;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v14);
    }
    return (unsigned int)-2147418113;
  }
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v12) = 688;
LABEL_21:
      v13 = (__int64)"SpatialAudioDevicePropertyReader::GetDeviceSettings";
      LODWORD(v14) = -2147024809;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  *(_OWORD *)a2 = *((_OWORD *)this + 27);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 28);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 29);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 30);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 62);
  if ( (_DWORD)v5 )
  {
    v10 = (const void *)*((_QWORD *)this + 63);
    if ( v10 )
    {
      if ( a3 && v5 == 834LL * *((unsigned int *)this + 106) )
      {
        memcpy_0(a3, v10, v5);
        return v9;
      }
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v12) = 695;
        goto LABEL_21;
      }
      return (unsigned int)-2147024809;
    }
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v12) = 694;
      goto LABEL_13;
    }
    return (unsigned int)-2147418113;
  }
  return v9;
}
