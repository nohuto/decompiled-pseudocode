/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1969DC
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 */

int __thiscall MNSetTimerToOpenHierarchy(void *this)
{
  int v2; // ecx
  int v3; // eax

  if ( *(_DWORD *)(**(_DWORD **)this + 40) == -1 )
    return 0;
  if ( *(_DWORD *)(**(_DWORD **)this + 40) >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 20) + 20) + 24) )
    return 0;
  v2 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 20) + 56);
  v3 = 80 * *(_DWORD *)(**(_DWORD **)this + 40);
  if ( !*(_DWORD *)(v3 + v2 + 8) || (*(_BYTE *)(*(_DWORD *)(v3 + v2) + 4) & 3) != 0 )
    return 0;
  if ( (***(_DWORD ***)this & 0x2000) == 0
    && ((***(_BYTE ***)this & 0x20) == 0 || *(_DWORD *)(**(_DWORD **)this + 40) != *(_DWORD *)(**(_DWORD **)this + 44)) )
  {
    if ( !InternalSetTimer(*(_DWORD *)(**(_DWORD **)this + 8), (char *)0xFFFE, gdtMNDropDown, 0, 0, 16) )
      return -1;
    ***(_DWORD ***)this |= 0x2000u;
  }
  return 1;
}
