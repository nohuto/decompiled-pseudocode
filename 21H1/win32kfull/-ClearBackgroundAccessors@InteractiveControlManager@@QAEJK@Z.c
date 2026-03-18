/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z @ 0x1ADAB0
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z @ 0x1B26CF (-SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z.c)
 */

int __fastcall InteractiveControlManager::ClearBackgroundAccessors(
        InteractiveControlManager *this,
        int a2,
        unsigned int a3)
{
  InteractiveControlDevice **v4; // esi
  int v5; // ebx
  InteractiveControlDevice *v6; // ecx
  int v7; // ecx
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v10 = 0;
    v9 = (int)"InteractiveControlManager::ClearBackgroundAccessors entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A8E,
      (int)this,
      (int)this,
      (const char **)&v9,
      (int)&v10);
  }
  v4 = (InteractiveControlDevice **)((char *)this + 24);
  v5 = 5;
  do
  {
    v6 = *v4;
    if ( *v4 )
      InteractiveControlDevice::SetBackgroundAccessor(v6, 0, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 3) = 0;
  HMAssignmentLock(v6, a2);
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v9 = 0;
    v10 = (int)"InteractiveControlManager::ClearBackgroundAccessors exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v7,
      v7,
      (const char **)&v10,
      (int)&v9);
  }
  return 0;
}
