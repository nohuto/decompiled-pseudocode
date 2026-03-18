/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0252488
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C0201010 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0257718 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  InteractiveControlDevice **v8; // rdi
  __int64 v9; // r14
  InteractiveControlDevice *v10; // rcx
  int v11; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    LODWORD(v14) = a2;
    v13[0] = (__int64)"InteractiveControlManager::SendDeviceHapticsOutput entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F1BB6,
      (__int64)a3,
      a4,
      (void **)v13,
      (__int64)&v14);
  }
  v8 = (InteractiveControlDevice **)((char *)this + 40);
  v9 = 5LL;
  do
  {
    v10 = *v8;
    if ( *v8 && (!a2 || a2 == *((_DWORD *)v10 + 2)) )
    {
      v11 = InteractiveControlDevice::SendHapticFeedbackOutput(v10, a3);
      v4 = v11;
      if ( v11 < 0 && (unsigned int)dword_1C032A2F8 > 2 )
      {
        LODWORD(v14) = v11;
        v13[0] = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032A2F8,
          byte_1C02F1BF0,
          (__int64)a3,
          a4,
          (void **)v13,
          (__int64)&v14);
      }
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    LODWORD(v14) = v4;
    v13[0] = (__int64)"InteractiveControlManager::SendDeviceHapticsOutput exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F1B7D,
      (__int64)a3,
      a4,
      (void **)v13,
      (__int64)&v14);
  }
  return v4;
}
