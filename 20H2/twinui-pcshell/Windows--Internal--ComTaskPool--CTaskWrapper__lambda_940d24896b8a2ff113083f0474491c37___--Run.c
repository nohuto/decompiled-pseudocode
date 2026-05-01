/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___::Run @ 0x180098D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x1801F1650 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??4?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F1C38 (--4-$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U-$default_delete@VAssistantLightWNF.c)
 *     ?reset@?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAAXPEAVAssistantLightWNFListener@Lighting@TwinUI@@@Z @ 0x1801F4D60 (-reset@-$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U-$default_delete@VAssistantLigh.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_940d24896b8a2ff113083f0474491c37___::Run(
        __int64 a1)
{
  __int64 v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>(&v4);
  wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::operator=(
    *(_QWORD *)(a1 + 16) + 248LL,
    v2);
  return wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::reset(
           &v4,
           0LL);
}
