/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C01B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180042684 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, struct CChannelContext *a2, bool a3)
{
  int v6; // eax
  __int64 v7; // rcx

  if ( a3 )
  {
    v6 = CWindowNode::Detach(this);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE4u, 0LL);
  }
  CNotificationResource::DetachFromChannel(this, a2, a3);
}
