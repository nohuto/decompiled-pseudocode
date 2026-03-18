/*
 * XREFs of _xxxRecreateSmallIcons@4 @ 0x1A12BF
 * Callers:
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 * Callees:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _DestroyClassSmIcon@4 @ 0x47A0C (_DestroyClassSmIcon@4.c)
 *     _ClassLock@8 @ 0x705D6 (_ClassLock@8.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78 (-ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z.c)
 */

int __thiscall xxxRecreateSmallIcons(_DWORD *this)
{
  int v2; // ecx
  struct tagCLS *v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int result; // eax
  char v7; // [esp+Fh] [ebp-19h]
  bool v8; // [esp+10h] [ebp-18h]
  int *v9[2]; // [esp+14h] [ebp-14h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-Ch] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v9, this[19]);
  v8 = 0;
  if ( DestroyClassSmIcon(v9) )
    v8 = *(_DWORD *)(this[19] + 48) != 0;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v9);
  if ( v8 )
  {
    v2 = this[19];
    memset(v10, 0, sizeof(v10));
    if ( ClassLock(v2, v10) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v9, this[19]);
      xxxCreateClassSmIcon(v9);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v9);
      v3 = (struct tagCLS *)this[19];
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      *(_DWORD *)(ThreadWin32Thread + 8) = v10[0];
      ClassUnlockWorker(v3);
    }
  }
  v7 = *(_BYTE *)(this[5] + 15) & 0x20;
  if ( DestroyWindowSmIcon(this) && !v7 )
    xxxCreateWindowSmIcon((int)this, *(_DWORD *)(this[5] + 172), 1);
  result = IsToplevelWindowDesktopComposed(this);
  if ( result )
    return SendDwmIconChange(this);
  return result;
}
