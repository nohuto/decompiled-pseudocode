/*
 * XREFs of HviGetHypervisorInterface @ 0x1403C0360
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403C0314 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x140543910 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x140930DA8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHypervisorInterface(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent(a1, a2);
  if ( (_BYTE)result )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
