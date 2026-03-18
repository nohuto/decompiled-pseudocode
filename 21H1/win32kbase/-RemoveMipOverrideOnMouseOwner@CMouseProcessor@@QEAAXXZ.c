/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C42A4
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C01B1110 (CancelCapturedMipOverride.c)
 * Callees:
 *     IsMiPActive @ 0x1C0031048 (IsMiPActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC (QHelper--_anonymous_namespace_--GetQ.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  char *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 v3; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 940, 1, 1) )
  {
    v1 = (char *)this + 3640;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3640, 2);
    if ( PtiFromInputDest )
    {
      if ( IsMiPActive(PtiFromInputDest, 0LL) )
      {
        v3 = QHelper::_anonymous_namespace_::GetQ((__int64)v1);
        if ( v3 )
          *(_QWORD *)(v3 + 440) = 0LL;
      }
    }
  }
}
