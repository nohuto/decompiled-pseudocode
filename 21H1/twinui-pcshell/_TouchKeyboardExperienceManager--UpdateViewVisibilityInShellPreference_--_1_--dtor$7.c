/*
 * XREFs of _TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference_::_1_::dtor$7 @ 0x1803352C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference_::_1_::dtor_7(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)&a2[5], a2, a3);
}
