/*
 * XREFs of MiCanPageMove @ 0x140277C9C
 * Callers:
 *     MiReferenceInPageFile @ 0x14027A818 (MiReferenceInPageFile.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 0x400) == 0 )
    return 1LL;
  if ( (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v3 = v2 >> 16;
  v4 = *(_QWORD *)v3;
  return v3 == *(_QWORD *)v3 + 128LL || (*(_DWORD *)(v4 + 56) & 0x20) == 0 || (*(_DWORD *)(v4 + 92) & 0x20000) == 0;
}
