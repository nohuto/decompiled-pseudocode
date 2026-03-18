/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z @ 0x1AE50E (-OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x1AD8A9 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z @ 0x1B1CCA (-DetermineMessageCreationFlags@InteractiveControlDevice@@QAEIPAVInteractiveControlInput@@0@Z.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QAEHPAU_LIST_ENTRY@@PAPAVInteractiveControlInput@@@Z @ 0x1B1F2D (-GetPreviousInputReport@InteractiveControlDevice@@QAEHPAU_LIST_ENTRY@@PAPAVInteractiveControlInp.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z @ 0x1B265C (-QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z @ 0x1B2D2A (-UpdateInputTarget@InteractiveControlDevice@@QAEPAUtagWND@@I@Z.c)
 *     ??0InteractiveControlInput@@QAE@PAVInteractiveControlDevice@@@Z @ 0x1B2DCB (--0InteractiveControlInput@@QAE@PAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 *     ?ParseInputReport@InteractiveControlInput@@QAEJPAEK@Z @ 0x1B325B (-ParseInputReport@InteractiveControlInput@@QAEJPAEK@Z.c)
 */

int __thiscall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        unsigned int updated)
{
  unsigned __int8 *v3; // ebx
  InteractiveControlInput *v4; // esi
  int Messages; // edi
  unsigned int v6; // eax
  InteractiveControlInput *v7; // eax
  unsigned __int8 *v8; // eax
  int v9; // ecx
  unsigned __int8 *v10; // eax
  unsigned __int8 *v12; // [esp+10h] [ebp-10h]
  struct InteractiveControlInput *v13; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v14; // [esp+18h] [ebp-8h] BYREF
  InteractiveControlDevice *v15; // [esp+1Ch] [ebp-4h]

  v15 = this;
  v14 = *((unsigned __int16 *)this + 24);
  v3 = a2;
  v4 = 0;
  v13 = 0;
  Messages = 0;
  if ( updated % v14 )
  {
    Messages = -1073739509;
    if ( (unsigned int)dword_2662F8 > 2 )
    {
      a2 = (unsigned __int8 *)v14;
      v13 = (struct InteractiveControlInput *)-1073739509;
      v14 = (unsigned int)"InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        updated,
        byte_2573D9,
        updated,
        updated,
        (const char **)&v14,
        (int)&v13,
        (int)&updated,
        (int)&a2);
    }
  }
  else
  {
    v12 = &a2[updated];
    if ( a2 < &a2[updated] )
    {
      v6 = v14;
      while ( 1 )
      {
        if ( !v4 )
        {
          v7 = (InteractiveControlInput *)Win32AllocPool(68, 1819440195);
          if ( v7 )
            v4 = InteractiveControlInput::InteractiveControlInput(v7, v15);
          else
            v4 = 0;
          if ( !v4 )
            return -1073741670;
          v6 = v14;
        }
        v8 = (unsigned __int8 *)InteractiveControlInput::ParseInputReport(v4, v3, v6);
        Messages = (int)v8;
        if ( (int)v8 < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(v15, 0, &v13);
        v10 = (unsigned __int8 *)InteractiveControlDevice::DetermineMessageCreationFlags(v15, v13, v4);
        a2 = v10;
        if ( v10 )
        {
          updated = (unsigned int)InteractiveControlDevice::UpdateInputTarget(v15, (unsigned int)v10);
          InteractiveControlDevice::PerformInputActions(v15, v4, (unsigned int)a2);
          InteractiveControlDevice::QueueInput(v15, 0, v4);
          if ( !*((_DWORD *)v15 + 72) )
            Messages = InteractiveControlInput::GenerateMessages(v4, updated, *((_DWORD *)v15 + 9), a2);
          v4 = 0;
        }
        v6 = v14;
        v3 += v14;
        if ( v3 >= v12 )
          goto LABEL_22;
      }
      if ( (unsigned int)dword_2662F8 > 2 )
      {
        a2 = v8;
        updated = (unsigned int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          v9,
          v9,
          (const char **)&updated,
          (int)&a2);
      }
LABEL_22:
      if ( v4 )
      {
        if ( *((_DWORD *)v4 + 15) )
        {
          Win32FreePool(*((_DWORD *)v4 + 15));
          *((_DWORD *)v4 + 15) = 0;
          *((_DWORD *)v4 + 16) = 0;
        }
        Win32FreePool(v4);
      }
    }
  }
  return Messages;
}
