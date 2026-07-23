/*
 * XREFs of KiRestoreThreadIptState @ 0x14051A6E0
 * Callers:
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x14051A51C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x14051A5F0 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
  else
    return KiInitIptState();
}
