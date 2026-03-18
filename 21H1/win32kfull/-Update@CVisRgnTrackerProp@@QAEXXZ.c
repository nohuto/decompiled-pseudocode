/*
 * XREFs of ?Update@CVisRgnTrackerProp@@QAEXXZ @ 0xF4974
 * Callers:
 *     _UpdateDirtyVisRgnTrackers@0 @ 0xF4DC4 (_UpdateDirtyVisRgnTrackers@0.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z @ 0xF49FC (-UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z.c)
 */

void __thiscall CVisRgnTrackerProp::Update(CVisRgnTrackerProp *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // ebx
  int IsTopLevelWindow; // eax
  char v5; // cl
  int v6; // eax

  v2 = 18;
  v3 = (_DWORD *)*((_DWORD *)this + 1);
  IsTopLevelWindow = _IsTopLevelWindow(v3);
  *((_BYTE *)this + 33) = 0;
  v5 = *(_BYTE *)(v3[5] + 23) & 0x10;
  if ( *((_BYTE *)this + 32) || v5 )
  {
    *((_BYTE *)this + 32) = v5 != 0;
    if ( !IsTopLevelWindow && (*(_BYTE *)(v3[5] + 23) & 4) != 0 )
      v2 = 26;
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 8) != 0 )
    {
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 0);
      v6 = *((_DWORD *)this + 4);
    }
    if ( (v6 & 6) != 0 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 20) + 23) & 2) != 0 )
        v2 |= 4u;
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 1u);
      v6 = *((_DWORD *)this + 4);
    }
    if ( (v6 & 0xF) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, 0, 2u);
  }
}
