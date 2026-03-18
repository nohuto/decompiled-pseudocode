/*
 * XREFs of _xxxHiliteMenuItem@16 @ 0x1A6B5B
 * Callers:
 *     _NtUserHiliteMenuItem@16 @ 0x165097 (_NtUserHiliteMenuItem@16.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0 (-UT_FindTopLevelMenuIndex@@YGHABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 */

int __fastcall xxxHiliteMenuItem(int a1, int a2, unsigned int a3, __int16 a4)
{
  int TopLevelMenuIndex; // eax
  unsigned int v6; // ebx
  int v8; // [esp+Ch] [ebp-Ch]
  _DWORD v9[2]; // [esp+10h] [ebp-8h] BYREF

  v8 = a1;
  if ( (a4 & 0x400) != 0 )
  {
    v6 = a3;
  }
  else
  {
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex(a2, a3);
    a1 = v8;
    v6 = TopLevelMenuIndex;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 20) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, 0);
  xxxMNInvertItem(v9, a2, v6, v8, a4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
  return 1;
}
