/*
 * XREFs of HviGetImplementationLimits @ 0x140647C04
 * Callers:
 *     HvlIsSingleGroupRequired @ 0x1403C2F24 (HvlIsSingleGroupRequired.c)
 *     HvlpSelectLpSet @ 0x140544A9C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140544EF0 (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x140930DA8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403C0314 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
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
