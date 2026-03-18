/*
 * XREFs of _NtUserRemoveMenu@12 @ 0xE70C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

int __stdcall NtUserRemoveMenu(int a1, unsigned int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // [esp+8h] [ebp-18h] BYREF
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  _DWORD v13[2]; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+1Ch] [ebp-4h]

  v10 = 0;
  v3 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  SmartObjStackRefBase<tagMENU>::Init(v13, 0);
  v14 = 0;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x3EC);
  }
  else
  {
    v4 = ValidateHmenu(a1);
    SmartObjStackRefBase<tagMENU>::operator=(v13, v4);
    if ( !SmartObjStackRef<tagMENU>::operator==(v13, v5)
      && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v13[0] + 20) + 20) & 0x40) == 0
      && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v13[0] + 20) + 20) & 0x200) == 0 )
    {
      v6 = v14;
      if ( !v14 )
        v6 = *(_DWORD *)v13[0];
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v10 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v10;
      v11 = v6;
      if ( v6 )
        HMLockObject(v6);
      v3 = xxxRemoveDeleteMenuHelper((int)v13, a2, a3, 0);
      ThreadUnlock1();
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
  UserSessionSwitchLeaveCrit();
  return v3;
}
