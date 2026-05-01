/*
 * XREFs of ??_EVoiceAssistantPositioner@@UEAAPEAXI@Z @ 0x1803DFC00
 * Callers:
 *     ??_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z @ 0x1800FDD20 (--_EVoiceAssistantPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VoiceAssistantPositioner@@UEAA@XZ @ 0x1803DFADC (--1VoiceAssistantPositioner@@UEAA@XZ.c)
 */

VoiceAssistantPositioner *__fastcall VoiceAssistantPositioner::`vector deleting destructor'(
        VoiceAssistantPositioner *this,
        char a2)
{
  VoiceAssistantPositioner::~VoiceAssistantPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
