/*
 * XREFs of _RtlInitializeProcessExceptionChain@4 @ 0x4B3665BC
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitializeProcessExceptionChain(char a1)
{
  RtlpFinalExceptionHandler = (int)FinalExceptionHandler + (a1 & 0x3F);
}
