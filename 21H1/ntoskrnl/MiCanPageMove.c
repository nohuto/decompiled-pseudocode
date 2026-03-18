/*
 * XREFs of MiCanPageMove @ 0x14034C6C0
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiReferenceInPageFile @ 0x14028249C (MiReferenceInPageFile.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1, a2, a3) || (*(_QWORD *)(v3 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( MiIsPfnFileOnly(v3) )
    return 0LL;
  if ( qword_140C4DE80 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C4DE80;
  v5 = v4 >> 16;
  v6 = *(_QWORD *)v5;
  return v5 == *(_QWORD *)v5 + 128LL || (*(_DWORD *)(v6 + 56) & 0x20) == 0 || (*(_DWORD *)(v6 + 92) & 0x20000) == 0;
}
