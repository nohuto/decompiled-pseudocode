/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01BC1B0
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C01A9030 (CancelCapturedMipOverride.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0033CBC (QHelper--_anonymous_namespace_--GetQ.c)
 *     IsMiPActive @ 0x1C00A21C8 (IsMiPActive.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(
        CMouseProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 v6; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
  {
    v4 = (char *)this + 3568;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3568, 2LL, a3, a4);
    if ( PtiFromInputDest )
    {
      if ( IsMiPActive(PtiFromInputDest, 0LL) )
      {
        v6 = QHelper::_anonymous_namespace_::GetQ((__int64)v4);
        if ( v6 )
          *(_QWORD *)(v6 + 440) = 0LL;
      }
    }
  }
}
