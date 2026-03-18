/*
 * XREFs of MiUnlinkProtectedStandbyPfn @ 0x14038EF10
 * Callers:
 *     MiUnlinkStandbyPage @ 0x14038EB20 (MiUnlinkStandbyPage.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402C1520 (MiIsDecayPfn.c)
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 */

void __fastcall MiUnlinkProtectedStandbyPfn(__int64 a1)
{
  __int64 v1; // rbx
  BOOL v2; // edi
  ULONG_PTR v3; // r9
  __int64 TransitionPte; // rax
  __int64 v5; // r8
  __int64 v6; // r10

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
  v2 = 0;
  if ( MiIsDecayPfn(v1) )
  {
    v2 = v3 == v1;
    TransitionPte = MiMakeTransitionPte(v3, 4);
    *(_QWORD *)(v5 + 16) = TransitionPte;
  }
  else
  {
    *(_QWORD *)(48 * v1 - 0x220000000000LL) = v3 | *(_QWORD *)(48 * v1 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  if ( MiIsDecayPfn(v3) )
    MiSetPfnPteFrame(v6, v1);
  else
    MiSetPfnBlink(v6, v1, 0);
  if ( v2 )
    MiDecayNodeNowEmpty(v1);
}
