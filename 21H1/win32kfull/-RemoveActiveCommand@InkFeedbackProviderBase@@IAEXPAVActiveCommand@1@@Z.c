/*
 * XREFs of ?RemoveActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AFD94
 * Callers:
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z @ 0x1AFE22 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@333@Z @ 0x1AF604 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U1@U1@@-$_tlgW.c)
 */

void __thiscall InkFeedbackProviderBase::RemoveActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // edx
  int v4; // eax
  struct InkFeedbackProviderBase::ActiveCommand **v5; // ecx
  int v6; // [esp+4h] [ebp-18h] BYREF
  const char *v7; // [esp+8h] [ebp-14h] BYREF
  const char *v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  --*((_DWORD *)this + 5);
  v4 = *(_DWORD *)v2;
  if ( *(struct InkFeedbackProviderBase::ActiveCommand **)(*(_DWORD *)v2 + 4) != v2
    || (v5 = (struct InkFeedbackProviderBase::ActiveCommand **)*((_DWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct InkFeedbackProviderBase::ActiveCommand *)v4;
  *(_DWORD *)(v4 + 4) = v5;
  *((_DWORD *)v2 + 1) = 0;
  *(_DWORD *)v2 = 0;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v11 = *((_DWORD *)this + 5);
    v10 = *((_DWORD *)v2 + 4);
    v9 = *((_DWORD *)v2 + 3);
    HIBYTE(a2) = *((_BYTE *)v2 + 8);
    v8 = (const char *)*((_DWORD *)this + 6);
    v7 = "Removed active command";
    v6 = 0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      0,
      byte_257077,
      0,
      0,
      (int)&v6,
      &v7,
      &v8,
      (int)&a2 + 3,
      (int)&v9,
      (int)&v10,
      (int)&v11);
  }
}
