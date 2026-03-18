/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UAEXPBX@Z @ 0x99BCC
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@33@Z @ 0x1AF51F (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWrit.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z @ 0x1AFE22 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z.c)
 */

void __thiscall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(InkFeedbackProviderBase *this, const void *a2)
{
  InkFeedbackProviderBase *v2; // edi
  struct InkFeedbackProviderBase::ActiveCommand *v3; // eax
  struct InkFeedbackProviderBase::ActiveCommand *v4; // esi
  struct InkFeedbackProviderBase::ActiveCommand *v5; // ebx
  int v6; // eax
  char v7; // [esp+Fh] [ebp-19h] BYREF
  int v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h] BYREF
  const char *v11; // [esp+1Ch] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp-8h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v13; // [esp+24h] [ebp-4h] BYREF

  v2 = this;
  v3 = (InkFeedbackProviderBase *)((char *)this + 12);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_DWORD *)this + 3);
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    v13 = v5;
    if ( *((const void **)v5 + 4) == a2 )
    {
      if ( (unsigned int)CallbackContext > 4 )
      {
        LOBYTE(this) = *((_BYTE *)v5 + 8);
        v8 = *((_DWORD *)v5 + 4);
        v9 = *((_DWORD *)v5 + 3);
        v6 = *((_DWORD *)v2 + 6);
        v12 = 0;
        v10 = v6;
        v7 = (char)this;
        v11 = "Terminating active command by owner thread";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          this,
          this,
          &v12,
          &v11,
          &v10,
          &v7,
          &v9,
          &v8);
      }
      (*(void (__thiscall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_DWORD *)v2 + 20))(
        v2,
        v5);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(v2, &v13);
      v3 = (InkFeedbackProviderBase *)((char *)v2 + 12);
    }
  }
}
