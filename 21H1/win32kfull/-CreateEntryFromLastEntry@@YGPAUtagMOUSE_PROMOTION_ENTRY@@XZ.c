/*
 * XREFs of ?CreateEntryFromLastEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x17CE30
 * Callers:
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__stdcall CreateEntryFromLastEntry()
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // eax

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48, 1886221141);
  if ( result )
    qmemcpy(result, &dword_275298, 0x30u);
  return result;
}
