/*
 * XREFs of ?Commit@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXXZ @ 0x18007D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::Commit(
        CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 24) )
  {
    v1 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v1 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x342,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)(unsigned int)v1);
      JUMPOUT(0x18007D5F1LL);
    }
  }
}
