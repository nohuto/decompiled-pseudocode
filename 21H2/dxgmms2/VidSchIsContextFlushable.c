/*
 * XREFs of VidSchIsContextFlushable @ 0x1C00F4740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  return !*(_DWORD *)(a1 + 796)
      && (!*(_DWORD *)(a1 + 800) || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 816LL));
}
