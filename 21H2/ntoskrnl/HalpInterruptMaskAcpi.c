/*
 * XREFs of HalpInterruptMaskAcpi @ 0x140A521EC
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14039693C (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptPicLine @ 0x1403B6C6C (HalpInterruptPicLine.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptMaskAcpi(char a1)
{
  _QWORD *Lines; // rax
  __int64 v3; // rcx
  ULONG_PTR *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  HalpInterruptPicLine(&v8, (unsigned __int16)word_140C4C04E);
  HalpInterruptApplyOverrides(&v8, 0LL, 0LL);
  Lines = HalpInterruptFindLines((unsigned int *)&v8);
  if ( !Lines )
    return HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8CAu);
  v3 = Lines[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
  if ( v4 )
    return HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v8, v5 + *(_QWORD *)(v6 + 40));
  else
    return HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8DAu);
}
