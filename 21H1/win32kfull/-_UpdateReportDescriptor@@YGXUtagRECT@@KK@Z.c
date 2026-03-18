/*
 * XREFs of ?_UpdateReportDescriptor@@YGXUtagRECT@@KK@Z @ 0x14AEB2
 * Callers:
 *     _CreatePseudoDigitizerDevice@12 @ 0x14AF9F (_CreatePseudoDigitizerDevice@12.c)
 * Callees:
 *     <none>
 */

void __userpurge _UpdateReportDescriptor(
        __int16 a1@<dx>,
        __int16 a2@<cx>,
        struct tagRECT a3,
        unsigned int a4,
        unsigned int a5)
{
  word_26C1DA = a1;
  word_26C24C = a1;
  word_26C2BE = a1;
  word_26C330 = a1;
  word_26C1D5 = a2;
  word_26C247 = a2;
  word_26C2B9 = a2;
  word_26C32B = a2;
  word_26C23A = LOWORD(a3.right) - LOWORD(a3.left);
  word_26C1C8 = LOWORD(a3.right) - LOWORD(a3.left);
  word_26C1DD = LOWORD(a3.bottom) - LOWORD(a3.top);
  word_26C24F = LOWORD(a3.bottom) - LOWORD(a3.top);
  word_26C2AC = LOWORD(a3.right) - LOWORD(a3.left);
  word_26C2C1 = LOWORD(a3.bottom) - LOWORD(a3.top);
  word_26C31E = LOWORD(a3.right) - LOWORD(a3.left);
  word_26C333 = LOWORD(a3.bottom) - LOWORD(a3.top);
}
