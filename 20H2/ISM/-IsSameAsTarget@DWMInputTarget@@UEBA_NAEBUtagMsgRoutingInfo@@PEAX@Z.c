/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800356A8 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  char result; // al
  __int64 v4; // r9
  void *v5; // r10

  result = operator==((__int64)a2, (__int64)this + 72);
  if ( result )
    return DWMInputTarget::IsSameInputSink((DWMInputTarget *)(v4 - 8), v5);
  return result;
}
