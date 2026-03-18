/*
 * XREFs of _LockDesktopMenu@8 @ 0xCC438
 * Callers:
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 *     ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018 (-xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

int __fastcall LockDesktopMenu(int a1, int **a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD v11[2]; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = a1;
  v2 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v11, 0);
  v12 = 0;
  if ( !SmartObjStackRef<tagMENU>::operator==(a2, v4)
    && *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24)
    && *(_DWORD *)(*(_DWORD *)(**a2 + 56) + 8) )
  {
    *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 20) |= 0x40u;
    v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20) + 28) + 8);
    v6 = a2[2];
    if ( !v6 )
      v6 = (int *)**a2;
    HMChangeOwnerProcess(v6, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20) + 28) + 8));
    SmartObjStackRefBase<tagMENU>::operator=(v11, *(_DWORD *)(*(_DWORD *)(**a2 + 56) + 8));
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11[0] + 20) + 20) |= 0x40u;
    v7 = v12;
    if ( !v12 )
      v7 = *(_DWORD *)v11[0];
    HMChangeOwnerProcess(v7, v5);
    HMAssignmentLock(v9, v8);
    v2 = 1;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
  return v2;
}
