/*
 * XREFs of _MNSetTimerToCloseHierarchy@4 @ 0x1977B8
 * Callers:
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

int __thiscall MNSetTimerToCloseHierarchy(void *this)
{
  int v2; // esi
  int v3; // eax
  _DWORD v5[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0);
  if ( (***(_BYTE ***)this & 0x20) != 0 )
  {
    if ( (***(_DWORD ***)this & 0x4000) != 0 )
      goto LABEL_8;
    v3 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(**(_DWORD **)this + 12));
    if ( v3 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_DWORD *)(v3 + 4));
      if ( *(_DWORD *)v5[0] )
      {
        if ( !InternalSetTimer(*(_DWORD *)(**(_DWORD **)this + 8), (char *)0xFFFF, gdtMNDropDown, 0, 0, 16) )
        {
          v2 = -1;
          goto LABEL_9;
        }
        ***(_DWORD ***)this |= 0x4000u;
        **(_DWORD **)v5[0] |= 0x1000u;
LABEL_8:
        v2 = 1;
      }
    }
  }
LABEL_9:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5);
  return v2;
}
