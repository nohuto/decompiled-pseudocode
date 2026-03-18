/*
 * XREFs of LockDesktopMenu @ 0x1C007C328
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C007BB68 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244858 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = 0;
  v12 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v5 = a2[2];
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 56LL) + 16LL);
    if ( !v5 )
      v5 = (_QWORD *)**a2;
    HMChangeOwnerProcess(v5, v6);
    SmartObjStackRefBase<tagMENU>::operator=(v11);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) |= 0x40u;
    v7 = v12;
    if ( !v12 )
      v7 = *(_QWORD *)v11[0];
    HMChangeOwnerProcess(v7, v6);
    v8 = a2[2];
    if ( !v8 )
      v8 = (_QWORD *)**a2;
    v10[0] = a1;
    v10[1] = v8;
    HMAssignmentLock(v10);
    v4 = 1;
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
  return v4;
}
