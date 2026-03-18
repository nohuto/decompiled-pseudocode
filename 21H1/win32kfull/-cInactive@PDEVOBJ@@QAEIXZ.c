/*
 * XREFs of ?cInactive@PDEVOBJ@@QAEIXZ @ 0xF5D4F
 * Callers:
 *     prfntKillList @ 0xCE282 (prfntKillList.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x800000) != 0 )
    v1 = *(_DWORD *)(v1 + 2316);
  return *(_DWORD *)(v1 + 948);
}
