/*
 * XREFs of ??_Gimmersive_shell_component@winrt@@UEAAPEAXI@Z @ 0x1804620F4
 * Callers:
 *     ??_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z @ 0x180100810 (--_Eimmersive_shell_component@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x180461E04 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 */

winrt::immersive_shell_component *__fastcall winrt::immersive_shell_component::`scalar deleting destructor'(
        winrt::immersive_shell_component *this,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
