/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YGKABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1965EF
 * Callers:
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 */

int __thiscall GetMenuInheritedContextHelpId(int **this)
{
  int v1; // esi
  int v2; // eax
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, **this);
  if ( (**(_BYTE **)v4[0] & 1) == 0 )
  {
    v1 = 0;
    while ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4[0] + 20) + 20) + 28) )
    {
      if ( (**(_BYTE **)v4[0] & 2) != 0 && *(_DWORD *)(*(_DWORD *)v4[0] + 16) == *(_DWORD *)(*(_DWORD *)v4[0] + 4) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_DWORD *)(*(_DWORD *)v4[0] + 32));
        break;
      }
      if ( *(_DWORD *)(*(_DWORD *)v4[0] + 16) )
      {
        v2 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(*(_DWORD *)v4[0] + 16));
        if ( v2 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_DWORD *)(v2 + 4));
          if ( *(_DWORD *)v4[0] )
            continue;
        }
      }
      goto LABEL_12;
    }
  }
  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4[0] + 20) + 20) + 28);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
  return v1;
}
