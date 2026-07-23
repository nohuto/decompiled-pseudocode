/*
 * XREFs of MiCanPageMove @ 0x140259930
 * Callers:
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiReferenceInPageFile @ 0x1403279E8 (MiReferenceInPageFile.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1) )
    return 1LL;
  v3 = *(_QWORD *)(v1 + 16);
  if ( (v3 & 0x400) == 0 )
    return 1LL;
  if ( (unsigned int)MiIsPfnFileOnly(v1, v3, v2) == 1 )
    return 0LL;
  if ( qword_140C4DF80 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C4DF80;
  v5 = v4 >> 16;
  v6 = *(_QWORD *)v5;
  return v5 == *(_QWORD *)v5 + 128LL || (*(_DWORD *)(v6 + 56) & 0x20) == 0 || (*(_DWORD *)(v6 + 92) & 0x20000) == 0;
}
