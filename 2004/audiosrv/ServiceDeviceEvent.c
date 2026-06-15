/*
 * XREFs of ServiceDeviceEvent @ 0x180116738
 * Callers:
 *     ServiceDeviceEventCallback @ 0x1801168E0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B8194 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DD1E4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180116120 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801165DC (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180116640 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v23; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_18019D4E8 > 4 )
  {
    v23 = EventTypeNameFromEventType(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)&dword_18019D4E8,
      byte_18016AD88,
      v4,
      v5,
      (void **)&v23);
  }
  v6 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( !v6 )
    goto LABEL_12;
  v7 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
  if ( !v8 )
  {
LABEL_12:
    if ( a2->dbcc_devicetype != 5 )
    {
      v13 = 783LL;
      goto LABEL_32;
    }
    v9 = a1 - 0x8000;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
              v13 = 778LL;
LABEL_32:
              wil::details::in1diag3::Log_Hr(
                retaddr,
                v13,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                (const char *)0x80070078LL);
              return 0LL;
            }
            v14 = OnAudioDeviceRemoval(a2);
            if ( v14 < 0 )
            {
              v15 = (unsigned int)v14;
              v16 = 775LL;
LABEL_30:
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                v16,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                (const char *)v15);
            }
          }
          else
          {
            v17 = OnAudioDeviceRemoval(a2);
            if ( v17 < 0 )
            {
              v15 = (unsigned int)v17;
              v16 = 772LL;
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        v18 = PostDeviceEvent(2, &a2->dbcc_size);
        if ( v18 < 0 )
        {
          v15 = (unsigned int)v18;
          v16 = 769LL;
          goto LABEL_30;
        }
      }
    }
    else
    {
      v19 = PostDeviceEvent(0, &a2->dbcc_size);
      v20 = v19;
      if ( v19 >= 0 )
        v20 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x218,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
          (const char *)(unsigned int)v19);
      if ( v20 < 0 )
      {
        v15 = (unsigned int)v20;
        v16 = 764LL;
        goto LABEL_30;
      }
    }
  }
  return 0LL;
}
