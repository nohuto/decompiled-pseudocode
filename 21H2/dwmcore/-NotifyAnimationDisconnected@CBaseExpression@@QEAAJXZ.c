/*
 * XREFs of ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800420D8
 * Callers:
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800407C0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180041060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180227110 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180042224 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4 (-UnregisterForTelemetry@CBaseExpression@@IEAAXXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800FFAA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801FDB2C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationDisconnected(CBaseExpression *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( CNotificationResource::ShouldNotify(this) || CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 24)) )
  {
    v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL), 8LL, this);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x5F2u, 0LL);
      goto LABEL_8;
    }
    if ( (unsigned int)dword_1803D0EF0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 4LL) )
    {
      v9 = *((_DWORD *)this + 16);
      v10 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 144LL))(this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1803D0EF0,
        (unsigned int)&unk_180371C5D,
        v7,
        v8,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
  if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
    CBaseExpression::UnregisterForTelemetry(this);
  if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
      *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
      this);
LABEL_8:
  *((_DWORD *)this + 72) = 8;
  return v2;
}
