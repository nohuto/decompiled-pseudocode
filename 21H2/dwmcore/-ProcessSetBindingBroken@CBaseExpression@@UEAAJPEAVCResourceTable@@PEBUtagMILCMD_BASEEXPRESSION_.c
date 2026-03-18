/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800407C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800420D8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18004A1F8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800FFAA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v4 = CBaseExpression::NotifyAnimationDisconnected(this);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x198u, 0LL);
      return v6;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 232) |= 1u;
  if ( (unsigned int)dword_1803D0EF0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 4LL) )
  {
    v10 = *((_DWORD *)this + 16);
    v11 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 144LL))(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1803D0EF0,
      (unsigned int)&unk_180371D33,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v10);
  }
  return 0;
}
