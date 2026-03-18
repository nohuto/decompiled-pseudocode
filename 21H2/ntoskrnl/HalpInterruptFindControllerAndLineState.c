/*
 * XREFs of HalpInterruptFindControllerAndLineState @ 0x1405080D4
 * Callers:
 *     HalpInterruptGetRemappedLineState @ 0x1405081B8 (HalpInterruptGetRemappedLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140508364 (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptFindControllerAndLineState(__int64 a1, ULONG_PTR **a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  ULONG_PTR *v7; // rdi
  _QWORD *Lines; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v9[0] = 0LL;
  if ( (int)HalpInterruptGsiToLine(a1, v9) >= 0 )
  {
    v7 = HalpInterruptLookupController(v9[0]);
    if ( v7 )
    {
      Lines = HalpInterruptFindLines((unsigned int *)v9);
      if ( Lines )
      {
        *a2 = v7;
        result = 0LL;
        v4 = Lines[5];
        goto LABEL_10;
      }
      HalpInterruptSetProblemEx(
        (_DWORD)v7,
        18,
        0,
        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
        668);
    }
    else
    {
      HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 652);
    }
    result = 3221226021LL;
  }
  else
  {
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 639);
    result = 3221225485LL;
  }
  *a2 = 0LL;
LABEL_10:
  *a3 = v4;
  return result;
}
