/*
 * XREFs of HalpInterruptFindControllerAndLineState @ 0x1404BB874
 * Callers:
 *     HalpInterruptGetRemappedLineState @ 0x1404BB950 (HalpInterruptGetRemappedLineState.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 */

__int64 __fastcall HalpInterruptFindControllerAndLineState(__int64 a1, ULONG_PTR **a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  ULONG_PTR *v7; // rdi
  _QWORD *Lines; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v9[0] = 0LL;
  if ( (int)HalpInterruptGsiToLine(a1, v9) < 0 )
  {
    result = 3221225485LL;
LABEL_7:
    HalpInterruptLastProblem = 18;
    goto LABEL_8;
  }
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
    *(ULONG_PTR *)((char *)v7 + 292) = 18LL;
    v7[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    result = 3221226021LL;
    *((_DWORD *)v7 + 78) = 643;
    goto LABEL_7;
  }
  HalpInterruptLastProblem = 17;
  result = 3221226021LL;
LABEL_8:
  *a2 = 0LL;
LABEL_10:
  *a3 = v4;
  return result;
}
