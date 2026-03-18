/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0082980
 * Callers:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C008291C (HmgIsObjectOwnedByW32Pid.c)
 *     HmgNextOwned @ 0x1C00925E0 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
