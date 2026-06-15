/*
 * XREFs of ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x140062D64
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062C60 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x1400615AC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ResetStream(CSpatialCrossProcessBaseEndpoint *this)
{
  unsigned __int32 State; // eax
  __int64 v2; // r10
  unsigned __int32 v3; // r8d

  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0x10u);
  *(_QWORD *)(*((_QWORD *)this + 161) + 32LL) = 0LL;
  State = PingPongState::GetState((__int64)this + 576);
  if ( State != 17 )
  {
    do
    {
      if ( State > 0x10 )
        break;
      v3 = State;
      State = _InterlockedCompareExchange(
                *(volatile signed __int32 **)(v2 + 136),
                `PingPongState::Reset'::`2'::nextState[State],
                State);
    }
    while ( v3 != State );
  }
  return 0LL;
}
