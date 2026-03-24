/*
 * XREFs of MiCanPageMove @ 0x14026B990
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiReferenceInPageFile @ 0x14031CC98 (MiReferenceInPageFile.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1) || (*(_QWORD *)(v1 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( MiIsPfnFileOnly(v1) )
    return 0LL;
  if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF40;
  v3 = v2 >> 16;
  v4 = *(_QWORD *)v3;
  return v3 == *(_QWORD *)v3 + 128LL || (*(_DWORD *)(v4 + 56) & 0x20) == 0 || (*(_DWORD *)(v4 + 92) & 0x20000) == 0;
}
