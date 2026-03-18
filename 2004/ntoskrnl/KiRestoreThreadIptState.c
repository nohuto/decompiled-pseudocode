/*
 * XREFs of KiRestoreThreadIptState @ 0x140515030
 * Callers:
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x140514E6C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x140514F40 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
  else
    return KiInitIptState();
}
