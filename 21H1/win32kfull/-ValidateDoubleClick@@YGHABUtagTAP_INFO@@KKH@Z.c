/*
 * XREFs of ?ValidateDoubleClick@@YGHABUtagTAP_INFO@@KKH@Z @ 0x17D65B
 * Callers:
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge ValidateDoubleClick@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagTAP_INFO *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int16 v7; // dx

  v7 = *(_WORD *)(a2 + 4);
  return v7
      && *(_DWORD *)a2 == _gptiCurrent
      && *(const struct tagTAP_INFO **)(a2 + 16) == a3
      && (*(_DWORD *)(a2 + 20) != 0) == (a4 != 0)
      && (v7 == word_275250[6 * a1] || (unsigned int)(a1 + 1) < 5 && v7 == word_27525C[6 * a1]);
}
