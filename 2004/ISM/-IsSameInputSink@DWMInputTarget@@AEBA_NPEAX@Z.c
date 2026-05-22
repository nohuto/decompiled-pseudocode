/*
 * XREFs of ?IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z @ 0x1800B6C60
 * Callers:
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B6B90 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800B6AD0 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 */

char __fastcall DWMInputTarget::IsSameInputSink(DWMInputTarget *this, void *a2)
{
  void *InputSinkHandle; // rax

  InputSinkHandle = DWMInputTarget::GetInputSinkHandle(this);
  if ( a2 == InputSinkHandle )
    return 1;
  if ( a2 && InputSinkHandle )
    return (*(__int64 (__fastcall **)(char *, void *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, a2);
  return 0;
}
