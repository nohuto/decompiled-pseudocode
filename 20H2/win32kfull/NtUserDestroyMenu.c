/*
 * XREFs of NtUserDestroyMenu @ 0x1C01149B0
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+58h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  SmartObjStackRefBase<tagMENU>::Init(v7, 0LL);
  v2 = ValidateHmenu(a1);
  v3 = 0;
  v8 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v7, v2);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v7)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v4 = v8;
    if ( !v8 )
      v4 = *(_QWORD *)v7[0];
    v3 = DestroyMenu(v4);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v7);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
