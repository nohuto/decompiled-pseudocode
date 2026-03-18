/*
 * XREFs of ?ClearDeviceFocus@InteractiveControlManager@@QAEJK@Z @ 0x1ADB4B
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

int __fastcall InteractiveControlManager::ClearDeviceFocus(InteractiveControlManager *this, int a2, unsigned int a3)
{
  int *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v10 = 0;
    v9 = (int)"InteractiveControlManager::ClearDeviceFocus entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A8E,
      (int)this,
      (int)this,
      (const char **)&v9,
      (int)&v10);
  }
  v4 = (int *)((char *)this + 24);
  v5 = 5;
  do
  {
    v6 = *v4;
    if ( *v4 )
      InteractiveControlDevice::SetFocus(0, 0, 1);
    ++v4;
    --v5;
  }
  while ( v5 );
  HMAssignmentLock(v6, a2);
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v9 = 0;
    v10 = (int)"InteractiveControlManager::ClearDeviceFocus exit";
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
