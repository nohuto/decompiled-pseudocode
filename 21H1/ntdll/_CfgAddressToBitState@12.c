/*
 * XREFs of _CfgAddressToBitState@12 @ 0x4B363939
 * Callers:
 *     _RtlValidateUserCallTarget@8 @ 0x4B363B20 (_RtlValidateUserCallTarget@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall CfgAddressToBitState(unsigned int a1, int a2, int a3)
{
  return (*(char *)(((2 * (a1 >> 4)) >> 3) + a2) >> ((2 * (a1 >> 4)) & 7)) & 1 | (2
                                                                                * ((*(char *)(((2 * (a1 >> 4) + 1) >> 3)
                                                                                            + a2) >> ((2 * (a1 >> 4) + 1) & 7)) & 1));
}
