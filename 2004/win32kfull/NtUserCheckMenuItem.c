/*
 * XREFs of NtUserCheckMenuItem @ 0x1C014DD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _CheckMenuItem @ 0x1C014DE4C (_CheckMenuItem.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+68h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v16 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7);
LABEL_8:
    v10 = -1;
    goto LABEL_7;
  }
  v8 = ValidateHmenu(a1);
  SmartObjStackRefBase<tagMENU>::operator=(v15, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v16;
  if ( !v16 )
    v9 = *(_QWORD *)v15[0];
  v10 = CheckMenuItem(v9, a2, a3);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v10;
}
