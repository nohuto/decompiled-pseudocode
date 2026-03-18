/*
 * XREFs of ?_ValidateAllocationPair@UmfdAllocation@@CG_NW4FontDriverType@@KPAV1@PAXIP6G_N22I@Z@Z @ 0xE05B8
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 * Callees:
 *     ?TryProbeForRead@@YG_NPAXII@Z @ 0x8D2F6 (-TryProbeForRead@@YG_NPAXII@Z.c)
 */

bool __fastcall UmfdAllocation::_ValidateAllocationPair(
        void *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        unsigned __int8 (__stdcall *a6)(unsigned int, _DWORD *, int))
{
  unsigned int v7; // [esp+0h] [ebp-Ch]
  unsigned int v8; // [esp+4h] [ebp-8h]

  return a3[3] == a4
      && a1 == (void *)a3[1]
      && a2 == a3[2]
      && a5 == a3[4]
      && TryProbeForRead(a5, a4, a1, v7, v8)
      && a6(a4, a3 + 5, a5);
}
