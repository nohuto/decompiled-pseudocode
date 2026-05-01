/*
 * XREFs of wil::details::functor_wrapper_void__lambda_e3a97466454155837bd5f0bc0e9aabcb__&_::Run @ 0x18042BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x18042BC9C (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_e3a97466454155837bd5f0bc0e9aabcb____::Run(__int64 a1)
{
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  started = TwinUI::Lighting::AssistantLightManager::StartWatching(**(TwinUI::Lighting::AssistantLightManager ***)(a1 + 8));
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)started);
  return 0LL;
}
