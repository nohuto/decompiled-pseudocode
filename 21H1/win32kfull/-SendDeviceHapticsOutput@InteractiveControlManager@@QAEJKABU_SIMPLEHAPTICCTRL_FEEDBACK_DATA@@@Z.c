/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1AE647
 * Callers:
 *     _NtUserSendInteractiveControlHapticsReport@12 @ 0x168680 (_NtUserSendInteractiveControlHapticsReport@12.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C (-SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

int __thiscall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        unsigned int a2,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a3)
{
  int v3; // esi
  int v5; // eax
  InteractiveControlDevice **v6; // edi
  InteractiveControlDevice *v7; // ecx
  int v8; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v10 = a2;
    v11 = (int)"InteractiveControlManager::SendDeviceHapticsOutput entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A8E,
      (int)this,
      (int)this,
      (const char **)&v11,
      (int)&v10);
  }
  v5 = 5;
  v6 = (InteractiveControlDevice **)((char *)this + 24);
  v10 = 5;
  do
  {
    v7 = *v6;
    if ( *v6 && (!a2 || a2 == *((_DWORD *)v7 + 1)) )
    {
      v8 = InteractiveControlDevice::SendHapticFeedbackOutput(v7, a3);
      v3 = v8;
      if ( v8 < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        v11 = v8;
        v12 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          (int)v7,
          (int)v7,
          (const char **)&v12,
          (int)&v11);
      }
      v5 = v10;
    }
    ++v6;
    v10 = --v5;
  }
  while ( v5 );
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v12 = v3;
    v11 = (int)"InteractiveControlManager::SendDeviceHapticsOutput exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      (int)v7,
      (int)v7,
      (const char **)&v11,
      (int)&v12);
  }
  return v3;
}
