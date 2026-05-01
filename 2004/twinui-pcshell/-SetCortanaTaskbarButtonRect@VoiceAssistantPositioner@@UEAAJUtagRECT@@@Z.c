/*
 * XREFs of ?SetCortanaTaskbarButtonRect@VoiceAssistantPositioner@@UEAAJUtagRECT@@@Z @ 0x18008BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VoiceAssistantPositioner::SetCortanaTaskbarButtonRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  this[18] = *a2;
  return result;
}
