/*
 * XREFs of ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UAEXI@Z @ 0x1AF909
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@33@Z @ 0x1AF51F (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWrit.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z @ 0x1AFE22 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z.c)
 */

void __thiscall InkFeedbackProviderBase::EndActiveCommandsByPointerId(InkFeedbackProviderBase *this, unsigned int a2)
{
  InkFeedbackProviderBase *v2; // edi
  struct InkFeedbackProviderBase::ActiveCommand *v3; // eax
  struct InkFeedbackProviderBase::ActiveCommand *v4; // esi
  struct InkFeedbackProviderBase::ActiveCommand *v5; // ebx
  int v6; // edx
  const char *v7; // eax
  struct InkFeedbackProviderBase::ActiveCommand *v8; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+14h] [ebp-18h] BYREF
  const char *v10; // [esp+18h] [ebp-14h] BYREF
  const char *v11; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+20h] [ebp-Ch] BYREF
  int v13; // [esp+24h] [ebp-8h] BYREF
  char v14; // [esp+2Bh] [ebp-1h] BYREF

  v2 = this;
  v3 = (InkFeedbackProviderBase *)((char *)this + 12);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_DWORD *)this + 3);
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    v8 = v5;
    v6 = *((_DWORD *)v5 + 3);
    if ( v6 == a2 )
    {
      if ( (unsigned int)CallbackContext > 4 )
      {
        LOBYTE(this) = *((_BYTE *)v5 + 8);
        v13 = *((_DWORD *)v5 + 4);
        v7 = (const char *)*((_DWORD *)v2 + 6);
        v9 = 0;
        v11 = v7;
        v12 = v6;
        v14 = (char)this;
        v10 = "Terminating active command by pointer id";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)this,
          byte_2570FD,
          (int)this,
          (int)this,
          (int)&v9,
          &v10,
          &v11,
          (int)&v14,
          (int)&v12,
          (int)&v13);
      }
      (*(void (__thiscall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_DWORD *)v2 + 20))(
        v2,
        v5);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(v2, &v8);
      v3 = (InkFeedbackProviderBase *)((char *)v2 + 12);
    }
  }
}
