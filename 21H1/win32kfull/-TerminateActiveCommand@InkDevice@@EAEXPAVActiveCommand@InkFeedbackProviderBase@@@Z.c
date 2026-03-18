/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1B12A5
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1B0675 (-DoSuperWetInkStop@InkDevice@@AAEJPBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __thiscall InkDevice::TerminateActiveCommand(InkDevice *this, struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = (int)this;
  if ( *((_BYTE *)this - 12) )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
    {
      a2 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_DWORD *)a2 + 3);
      InkDevice::DoSuperWetInkStop((InkDevice *)((char *)this - 20), &a2);
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = (struct InkFeedbackProviderBase::ActiveCommand *)"Device not opened";
    v2 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)this,
      byte_25690B,
      (int)this,
      (int)this,
      (int)&v2,
      (const char **)&a2);
  }
}
