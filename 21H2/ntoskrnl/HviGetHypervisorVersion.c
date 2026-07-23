/*
 * XREFs of HviGetHypervisorVersion @ 0x1405BF270
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F3760 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlpHvIdentityInfoCallback @ 0x1404F2010 (HvlpHvIdentityInfoCallback.c)
 *     HvlPhase0Initialize @ 0x140796EFC (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x14088E488 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE390 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
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
