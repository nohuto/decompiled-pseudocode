/*
 * XREFs of ??_GKeywordDetectorResourceConsumer@@UEAAPEAXI@Z @ 0x180139A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeywordDetectorResourceConsumer *__fastcall KeywordDetectorResourceConsumer::`scalar deleting destructor'(
        KeywordDetectorResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
