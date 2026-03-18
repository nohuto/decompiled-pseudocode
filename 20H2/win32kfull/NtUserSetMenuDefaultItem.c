/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1C0109180
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C010929C (_SetMenuDefaultItem.c)
 */

__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v6 = ValidateHmenu(a1);
  v7 = 0;
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v6);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v8 = v12;
    if ( !v12 )
      v8 = *(_QWORD *)v11[0];
    v7 = SetMenuDefaultItem(v8, a2, a3);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
