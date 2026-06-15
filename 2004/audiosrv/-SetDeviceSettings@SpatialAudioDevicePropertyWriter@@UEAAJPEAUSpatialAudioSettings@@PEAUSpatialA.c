/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18005BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005BE1C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+44h] [rbp-95h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h] BYREF
  struct tagPROPVARIANT v26; // [rsp+50h] [rbp-89h] BYREF
  struct _tagpropertykey v27; // [rsp+70h] [rbp-69h] BYREF
  int v28; // [rsp+90h] [rbp-49h] BYREF
  __int128 v29; // [rsp+94h] [rbp-45h]
  __int128 v30; // [rsp+A4h] [rbp-35h]
  __int128 v31; // [rsp+B4h] [rbp-25h]
  __int128 v32; // [rsp+C4h] [rbp-15h]
  __int64 v33; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = v5;
  v10 = v5 / 0x342;
  v11 = v9 - 834 * v10;
  if ( !a2 || v11 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v23 = 466;
      goto LABEL_28;
    }
    return (unsigned int)-2147024809;
  }
  v12 = *(_OWORD *)a2;
  v28 = 1509949441;
  v13 = *((_OWORD *)a2 + 1);
  v26.bstrblobVal.pData = (BYTE *)&v28;
  v29 = v12;
  v14 = *((_OWORD *)a2 + 2);
  v27.pid = 2;
  v30 = v13;
  v15 = *((_OWORD *)a2 + 3);
  v31 = v14;
  v33 = *((_QWORD *)a2 + 8);
  v32 = v15;
  v27.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
  *(_OWORD *)&v26.vt = 0LL;
  v26.vt = 65;
  v26.lVal = 76;
  v16 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v27, &v26);
  v17 = v16;
  if ( v16 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v23 = v16;
      v24 = 482;
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23);
    }
    return v17;
  }
  memset(&v26, 0, sizeof(v26));
  v27.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
  v26.vt = 2;
  v26.iVal = v10;
  v27.pid = 2;
  v18 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v27, &v26);
  v17 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v24 = v18;
      v23 = 489;
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v24);
    }
    return v17;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_14:
    if ( !*((_DWORD *)this + 24) )
      (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
    return v17;
  }
  if ( !a3 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v23 = 493;
LABEL_28:
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      v24 = -2147024809;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v24);
      return (unsigned int)-2147024809;
    }
    return (unsigned int)-2147024809;
  }
  v19 = 0;
  while ( 1 )
  {
    v27.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
    *(_OWORD *)&v26.vt = 0LL;
    v26.vt = 65;
    v26.lVal = 834;
    v26.bstrblobVal.pData = (BYTE *)a3 + 834 * v19;
    v20 = *((_QWORD *)this + 13);
    v27.pid = v19 + 2;
    v21 = v20
        ? (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v20 + 96LL))(
            v20,
            (char *)this + 112,
            0LL,
            &v27,
            &v26)
        : (*(unsigned __int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
            *((_QWORD *)this + 11),
            &v27,
            &v26);
    v17 = v21;
    if ( v21 < 0 )
      break;
    if ( ++v19 >= (unsigned int)v10 )
      goto LABEL_14;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v24 = v21;
    v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    v23 = 506;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v25,
      (__int64)&v23,
      (__int64)&v24);
  }
  return v17;
}
