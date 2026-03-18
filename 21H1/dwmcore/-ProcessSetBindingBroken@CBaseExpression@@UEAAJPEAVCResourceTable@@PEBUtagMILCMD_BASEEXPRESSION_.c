/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800C5250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800970B0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800C52A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v3 = *((_BYTE *)this + 208);
  if ( (v3 & 2) != 0 )
  {
    v5 = CBaseExpression::NotifyAnimationDisconnected(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x14Cu, 0LL);
      return v7;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v3 = *((_BYTE *)this + 208);
  }
  *((_BYTE *)this + 208) = v3 | 0x10;
  return 0;
}
