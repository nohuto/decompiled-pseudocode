/*
 * XREFs of ??1?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1801F19B8
 * Callers:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801F1A80 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044DDCC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::~unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>(
        _QWORD **a1)
{
  _QWORD *v1; // rbx
  TwinUI::Lighting::AssistantLightManager *v2; // rdi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = (TwinUI::Lighting::AssistantLightManager *)v1[1];
    v1[1] = 0LL;
    if ( v2 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v2);
      operator delete(v2, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
