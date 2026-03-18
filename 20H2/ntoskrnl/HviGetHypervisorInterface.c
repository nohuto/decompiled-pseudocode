/*
 * XREFs of HviGetHypervisorInterface @ 0x1403A85B0
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x1404F04F0 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x140890D88 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
