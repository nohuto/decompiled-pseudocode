/*
 * XREFs of ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851
 * Callers:
 *     _NtUserSetInteractiveControlFocus@12 @ 0x169551 (_NtUserSetInteractiveControlFocus@12.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x1AD8A9 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

int __fastcall InteractiveControlManager::SetDeviceFocus(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int *v7; // edi
  int v8; // ecx
  int v9; // ebx
  int v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h] BYREF
  int v13; // [esp+14h] [ebp-Ch] BYREF
  const char *v14; // [esp+18h] [ebp-8h] BYREF
  int v15; // [esp+1Ch] [ebp-4h]

  v15 = a1;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v11 = a5;
    v12 = a4;
    v13 = a3;
    v14 = "InteractiveControlManager::SetDeviceFocus entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      byte_256CAE,
      a1,
      a1,
      &v14,
      (int)&v13,
      (int)&v12,
      (int)&v11);
  }
  v6 = 5;
  v7 = (int *)(a1 + 24);
  v11 = 5;
  do
  {
    v8 = *v7;
    if ( *v7 && (!a3 || a3 == *(_DWORD *)(v8 + 4)) )
    {
      InteractiveControlDevice::SetFocus(a5, a4, 1);
      v6 = v11;
    }
    ++v7;
    v11 = --v6;
  }
  while ( v6 );
  v9 = v15;
  if ( !a3 )
  {
    HMAssignmentLock(v8, a2);
    *(_DWORD *)(v9 + 4) = a4;
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v13 = 0;
    v12 = (int)"InteractiveControlManager::SetDeviceFocus exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v8,
      v8,
      (const char **)&v12,
      (int)&v13);
  }
  return 0;
}
