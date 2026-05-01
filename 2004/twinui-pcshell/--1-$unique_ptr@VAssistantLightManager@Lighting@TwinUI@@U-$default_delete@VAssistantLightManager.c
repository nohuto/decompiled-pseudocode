/*
 * XREFs of ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x18044D614
 * Callers:
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$1 @ 0x18044D5EF (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044E50C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>::~unique_ptr<TwinUI::Lighting::AssistantLightManager,wistd::default_delete<TwinUI::Lighting::AssistantLightManager>>(
        TwinUI::Lighting::AssistantLightManager **a1)
{
  TwinUI::Lighting::AssistantLightManager *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x70);
  }
}
